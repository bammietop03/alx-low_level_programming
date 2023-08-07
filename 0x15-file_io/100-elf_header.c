#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>

#define EI_NIDENT 16

typedef struct {
    unsigned char e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

void print_error(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

void print_magic(unsigned char *e_ident) {
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

void print_class(unsigned char class) {
    printf("  Class:                             ");
    switch (class) {
        case 1:
            printf("ELF32\n");
            break;
        case 2:
            printf("ELF64\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
}

void print_data(unsigned char data) {
    printf("  Data:                              ");
    switch (data) {
        case 1:
            printf("2's complement, little endian\n");
            break;
        case 2:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Error opening file");
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        close(fd);
        print_error("Error reading ELF header");
    }

    close(fd);

    if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' || header.e_ident[2] != 'L' || header.e_ident[3] != 'F') {
        print_error("Not an ELF file");
    }

    printf("ELF Header:\n");
    print_magic(header.e_ident);
    print_class(header.e_ident[4]);
    print_data(header.e_ident[5]);

    printf("  Version:                           %u (current)\n", header.e_version);
    printf("  OS/ABI:                            ");
    switch (header.e_ident[7]) {
        case 0:
            printf("UNIX - System V\n");
            break;
        case 6:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("  ABI Version:                       %u\n", header.e_ident[8]);
    printf("  Type:                              ");
    switch (header.e_type) {
        case 1:
            printf("EXEC (Executable file)\n");
            break;
        case 3:
            printf("DYN (Shared object file)\n");
            break;
        default:
            printf("Unknown\n");
            break;
    }

    printf("  Entry point address:               0x%lx\n", header.e_entry);

    return 0;
}

