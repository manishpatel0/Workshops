#include <stdio.h>

struct Linear {
	double a,b;
	double operator()(double x) const
	{
		return a * x + b;
	}
};

int main(int argc, char const *argv[])
{
	Linear f(2,1);			//Represent function 2x + 1
	Linear g(-1,0);			//Represent function -x

	double f_0 =f(0);
	double f_1 = f(1);

	double g_0 = g(0);
	return 0;
}