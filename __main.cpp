#include "C:\Users\Will\source\repos\Project3\Matrix.h"
#include "vec.h"


int main()
{
	Matrix a({ {-1,3,6,10,15},{0,-1,3,6,10},{0,0,0,3,6},{0,0,0,0,3 },{0,0,0,0,0} });
	Matrix c = a * a;
	c.print_elements();
	return 0;
}