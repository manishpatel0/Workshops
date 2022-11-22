#include <stdio.h>
/* 
	Function declarations"

	noptr-declarator 
	parameter-list
	identifier-list
*/

int main(int argc, char const *argv[])
{
	int max(int a, int b);  // declaration
	//int n = max(12.01, 3.14); // OK, conversion from duoble to int
	//int max(a,b);  //redeclared
	int a,b; {return a>b?a:b;}	//definiton expects ints: the second call is undefined
	int n = max(true,(char)'a');	//calls max with two int args (after promotions)
	//int n = max(12.01f, 3.14); 	//calls max with two double args (after promotions) redeclartions
	/*
		Explanation
	*/
	void f(char *s);		// return type is void 
	int sum(int a, int b);	//return type of sum is int.
	int (*foo(const void *p))[3];	//return type is pointer to array of 3 int

	double const bar(void);	//declares function of type double(void).
	double (*barp)(void);	//OK: barp is a pointer to double(void).
	double const (*barpc)(void) ; //OK: barpc is a pointer to double(void)

	int f(void), *fip(), (*pfi)(), *ap[3];	// declares tow function and two object
	// inline int g(int), n;	// ERROR: inline qualifier is for functions only
	typedef int array_t[3];
	// array_t a,h(); // ERROR: array type cannot be a return type for a function

	int f(int);	// external linkege, block scope
	f(1);	// definition need to be available somewhar in the program

	int f(int,int);		//declaration
	// int f(int,int) {return 7;} // ERROR: definition must name parameters 
	//This definition is allowd sinec C23

	int f(int,double); //OK
	int g(int a, double b); // since OK	
	// int f(int , double) {return 1;} // ERROR: definition must name parameters.
	//This definition is allowed since C23

	// int f(static int x); //ERROR
	// int f(int [static 10]); //OK (array index static is not a storge class spacifier)

	int f(int[]);	//declares int f(int*)
	int g(const int[10]);	//declares int g(const int*).
	// int h(int[const volatile]); //declare int  h(int *const volotile).
	// int x(int[*]); 	//declares int x(int*s)

	int f(char g(double));	// declares int f(char (*g)(double))
	// int h(int[void]);	//primary-express
	int h(int(void)); // declaers int h(int (*)(void))

	int f(int, ...);

	int f(void); //OK
	// int g(void x); //ERROR




	return 0;
}