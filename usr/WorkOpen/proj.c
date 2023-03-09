#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *create(int data){
	struct node *ptr = (struct node*) malloc(sizeof(struct node));
	(*ptr).data = data;
	(*ptr).next = NULL;
	return ptr;
}

void travlaser(struct node *ptr){
	while(ptr->next == NULL){
		printf("%d , ",ptr->data);
		ptr->next = ptr;
	}
	printf(" ");
}

int main(int argc, char const *argv[])
{
	printf("Hello!");

	struct node *head = (struct node*) malloc(sizeof(struct node));
	struct node *first = create(4);
	struct node *second = create(1);
	struct node *threed = create(9);
	struct node *four = create(8);

	head->data = 5;
	head->next = first;
	first->next = second;
	second->next = threed;
	threed->next = four;

	travlaser(head);
	// printf(/ "%d",head->data);




	return 0;
}