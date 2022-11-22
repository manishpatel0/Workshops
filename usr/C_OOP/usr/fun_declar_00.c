#include <stdio.h>


// int f(void);	// declaration : takes no parameters
// int g();		//declaration : takes unknown parameters

int main(int argc, char const *argv[])
{
	// f(1);		//compile-time error
	// g(2);		// undefined behavior
	return 0;
}

int f(void) {return 1;}	//actual definition
// int g(a,b,c,d) int a,b,c,d; {return 2;} //actual definition