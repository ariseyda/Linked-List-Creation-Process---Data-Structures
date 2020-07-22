#include<stdio.h>
#include<stdlib.h>

//Linked List Creation Process - Data Structures


//The struct structure that holds each node in the linked list.
struct node{
	
	int data;
	struct node* next;//Since the data type of a pointer is determined by the value, we define a pointer with the struct node data type because it will hold a node.
	
};

int main(){
	
	//We have to allocate memory for each node.
	struct node* firstnode=(struct node*)malloc(sizeof(struct node));
	struct node* secondnode=(struct node*)malloc(sizeof(struct node));
	
	firstnode->data=15;
	secondnode->data=20;
	firstnode->next=secondnode;
	secondnode->next=NULL;//In linked lists, the pointer of the last element holds null.
	
	printf("%d => %d",firstnode->data,secondnode->data);
	
	return 0;
}
