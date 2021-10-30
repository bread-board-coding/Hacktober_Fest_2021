#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
};

void TraverseForward(struct Node* head){
	struct Node* p= head;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}
void TraverseBackward(struct Node* head){
	struct Node* p=head;
	
	while(p->next!=NULL){
		p=p->next;
	}
	
	while(p->prev!=NULL){
		printf("%d ",p->data);
		p=p->prev;
	}
	
	printf("%d ",p->data);
}
	


int main(){
	struct Node* head=(struct Node*)malloc(sizeof(struct Node));
	struct Node* n2=(struct Node*)malloc(sizeof(struct Node));
	struct Node* n3=(struct Node*)malloc(sizeof(struct Node));
	struct Node* n4=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=10;
	head->prev=NULL;
	head->next=n2;
	
    n2->data=20;
	n2->prev=head;
	n2->next=n3;
	
	n3->data=30;
	n3->prev=n2;
	n3->next=n4;
	
	n4->data=40;
	n4->prev=n3;
	n4->next=NULL;
	
	TraverseForward(head);
	printf("\n");
   TraverseBackward(head);
     return 0;
}
