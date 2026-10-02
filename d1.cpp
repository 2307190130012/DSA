#include<stdio.h>
#define N 5
main(){
	struct stk{
		int stack[N];
		int top;
	};
	struct stk s;
	int  ch=0,item,i;
	s.top=-1;
	while(ch<=4){
	printf("1-> push\n");
	printf("2-> push\n");
	printf("3-> push\n");
	printf("4-> exit\n");
    scanf("%d",&ch);
switch(ch){
	case 1:
		if(s.top==N-1){
			printf("stack is over flow:");
		}
		else{
			s.top++;
			printf("enetr the element  for enetr in stack (push) ");
			scanf("%d",&item);
			s.stack[s.top]=item;
			
		}
		break;
	case 2:
		if( s.top==-1){
			printf("stack is underflow:\n");
			
		}
		else{
			item=s.stack[s.top];
			printf("deleted element is %d\n",item);
			s.top=s.top-1;
		}
		
	break;
	
	case 3:
		if(s.top==-1){
			printf("stack is empty:\n");
			
		}
		else{
			for(i=s.top;i>=0;i--){
				printf("%d",s.stack[i]);
			}
		}
		
	break;
	
	
	
	case 4:
		
		printf("exit:");
	break;	
}
	}
}
