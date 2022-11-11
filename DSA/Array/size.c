#include <stdio.h>
#include <stdlib.h>

#define my_sizeof(type) ((char * )(&type+1)-(char*)(&type))

int main(int argc, char const *argv[])
{
	int arr[] = {1,2,3,4,5,6,7,8};
	int size = my_sizeof(arr)/my_sizeof(arr[0]);
	printf("Size: %d ", size);
	printf("\nHello");
	return 0;
}