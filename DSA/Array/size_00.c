#include <stdio.h>

int main(int argc, char const *argv[])
{
	int size = *(&argv +1) - argv;
	printf("Argc : %d ", argc);
	for(int i = 0 ; i <= size; i++){
			printf(" argv in array is : %s",argv[i]);

	}
	return 0;
}