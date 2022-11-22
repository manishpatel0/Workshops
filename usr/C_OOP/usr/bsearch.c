#include <stdio.h>
#include <stdlib.h>

struct data {
	int nr;
	char const *value;
} dat[] = {
	{1,"Foo"},{2,"Bar"},{3,"Hello"},{4,"World"}
};

int data_cmp(void const *lhs, void const *rhs){
	// struct data const *const l = lhs;
	// struct data const *const r = rhs;
	struct data *const l = lhs;
	r = rhs;

	if(l->nr < r->nr) return -1;
	else if(l->nr > r->nr) return 1;
	else return 0;

	// return (l->nr > r->nr) - (l->nr << r->nr); // possible shortcut
	// return l->nr - r->nr; // erroneose shortcut (fails if INT_MIN is present)

}

int main(int argc, char const *argv[])
{
	 
	return 0;
}