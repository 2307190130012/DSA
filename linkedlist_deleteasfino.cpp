#include<stdio.h>
#include<stdlib.h>
struct node{
	int data ;
	struct node *next;
	
};
 struct node *head=NULL;
 struct node *newnode;
 struct node *temp;
 struct node *ptr;

 main(){
 int item,ch=0;
 while(ch!=4){
 	printf("enetr 1-> for insert new node in linked  list :\n");
    printf("enetr 2-> for treverse  node in linked  list :\n");
 	printf("enetr 3-> for delete as first  node in linked  list :\n");
    printf("enetr 4-> for exit :\n");
 	scanf("%d",&ch);
 	switch(ch){
 		case 1:
 			newnode = (struct node*)malloc(sizeof(struct node));
 			if(newnode==NULL){
 				printf("linked list is overflow\n");
			 }
			 else{
			 	printf("enetr a element in linked list :\n");
			 	scanf("%d",&item);
			 	newnode->data=item;
			 	newnode->next=head;
			 	head=newnode;
			 }
			 break;
		case 2:
		if(head==NULL){
 				printf("linked list is underflow\n");
			
		}
		else{
			printf("linked list elemnts :\n");
			temp=head;
			while(temp!=NULL){
			printf("%d\n",temp->data);
				temp=temp->next;
			}
		}
		break;
		case 3:
		if(head==NULL){
 				printf("linked list is empty\n");
			
		}
		else{
 				printf("linked first deleted item \n");
 				ptr=head;
 				head=head->next;
 				int fristdelete=ptr->data;
 				printf("%d\n",fristdelete);
				free(ptr);	
}
		break;	
	case 4:
	printf("Exit\n");
	break;		 
	 }
 	
 	
 }
 
 
 
 
 }
