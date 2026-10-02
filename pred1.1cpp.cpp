//stack by using array 
#include<stdio.h>
#define N 5
struct stk{
	int stack[N];
	int top;
};
struct stk s;
main(){

 s.top=-1;
int ch=0,item;
while(ch!=5){
	printf("1->enter for push opreation:\n");
	printf("2->enter for pop opreation:\n");
	printf("3->enter for treverse opreation:\n");
	printf("4->enter for exit:\n");
	scanf("%d",&ch);
switch(ch){
	case 1:
		if(s.top==N-1){
			printf("stack is overflow:\n");
		}
		else{
			printf("enetr the item :");
			scanf("%d",&item);
		s.top=s.top+1;

			s.stack[s.top]=item;
			
		}
		break;
	case 2:
	if(s.top==-1){
	printf("stack is underflow:\n");

	}
	else{
		item=s.stack[s.top];
		s.top=s.top-1;
	}
	break;
	case 3:
	if(s.top==-1){
	printf("stack is underflow:\n");

	}
	else{
		printf("stack elemnts:\n");
		for(int i=s.top;i>=0;i--){
printf("%d\n", s.stack[i]);		}
	}
	break;
	case 4:
	printf("exit\n");
	break;	
}


}
}
