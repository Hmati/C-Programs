#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *Next;
};


void printList(struct Node *n)
{
	while (n != NULL)
		printf("%d",n->data);
	n = n->Next;
}


int main()
{
	struct Node* head = NULL;
	struct Node* first = NULL;
	struct Node* second = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	first = (struct Node*)malloc(sizeof(struct Node));
	second= (struct Node*)malloc(sizeof(struct Node));

	head->data = 2;
	head->Next = first;

	first->data = 3;
	first->Next= second;

	second->data = 5 ;
	second->Next = NULL;

	printList(head);

	return 0;
	}
