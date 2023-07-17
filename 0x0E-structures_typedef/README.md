## learning Structures and Typedef
A structure is a user defined data type available in C that allows to combine data items of different kinds.

In C, a structure is a user-defined data type that allows you to group together multiple variables of different data types under a single name. It is a way to create a custom data type that can hold related pieces of information as a single unit.

## The syntax for defining a structure in C is as follows:

	struct structure_name {
    		data_type1 member1;
    		data_type2 member2;
    		// ... more members if needed
	};
## Here's a simple example of defining a structure to represent a point in 2D space:


	struct Point {
	    int x;
	    int y;
	};

In this example, we have defined a structure named Point with two members, x and y, both of type int.

## Once a structure is defined, you can create variables of that structure type:

	struct Point p1;
	struct Point p2;

## You can also define and initialize a structure variable in a single line:

	struct Point p1 = {0, 0};

## To access the members of a structure, you use the dot (.) operator:

	p1.x = 5;
	p1.y = 10;

## You can also pass structures as arguments to functions, either by value or by reference:

	void printPoint(struct Point p) 
	{
	    printf("Point: (%d, %d)\n", p.x, p.y);
	}

	void updatePoint(struct Point *p, int newX, int newY) 
	{
	    p->x = newX;
	    p->y = newY;
	}

## Now let's put it all together in a complete example:

	#include <stdio.h>

	struct Point 
	{
    		int x;
    		int y;
	};

	void printPoint(struct Point p) 
	{
		printf("Point: (%d, %d)\n", p.x, p.y);
	}

	void updatePoint(struct Point *p, int newX, int newY) 
	{
    		p->x = newX;
    		p->y = newY;
	}

	int main(void) 
	{
    		struct Point p1 = {0, 0};
    		struct Point p2 = {3, 5};

    		printPoint(p1);
    		printPoint(p2);

    		updatePoint(&p1, 10, 20);
    		printPoint(p1);

    		return 0;
	}

## Output:

	Point: (0, 0)
	Point: (3, 5)
	Point: (10, 20)

In this example, we defined a structure Point to represent 2D points. We created two variables of type struct Point, p1 and p2, and then printed their values using the printPoint function. We also updated the value of p1 using the updatePoint function, which takes a pointer to the struct Point and modifies its members.
