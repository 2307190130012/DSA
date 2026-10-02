// wap to insert after given node
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node* next;
	
};
node* start=NULL;
node* newnode;
node* ptr;
main(){
	int item, key, ch=0;
	while(ch!=4){
		printf("1->enetr for insert as first node  \n:");
		printf("2->enetr for insert given node \n:");
		printf("3-> enter for treverse: \n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				newnode=(node*)malloc(sizeof(node));
				printf("enetr elements:\n");
				scanf("%d",&item);
				newnode->data=item;
				newnode->next=start;
				start=newnode;
				break;
			case 2:
			if(start==NULL){
				printf("enetr frirst to as new node\n:");
			}
			else{
				printf("enetr key value\n:");
				scanf("%d",&key);
				ptr=start;
				while(ptr!=NULL){
					if(ptr->data==key){
					break;

					}
					else{
						ptr=ptr->next;
						
					}
				}
				if(ptr==NULL){
					printf("newnode can not be inserted :\n");
				}
				else{
				newnode=(node*)malloc(sizeof(node));
				printf("enetr elemnt:");
				scanf("%d",&item);
				newnode->data=item;
				newnode->next=ptr->next;
				ptr->next=newnode;	
				}
			}
			break;
				case 3:
					if(start==NULL){
						printf("linked list is empty\n:");
					}
					else{
						printf("elemnts of linked list:\n");
						ptr=start;
						while(ptr!=NULL){
							printf("%d\n",ptr->data);
							ptr=ptr->next;
						}
					}
					break;
		}
	}
	
}
