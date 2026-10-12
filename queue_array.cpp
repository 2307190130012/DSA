//queue using array 
#include<stdio.h>
#define N 7
struct que{
	int queue[N];
	int frount;
	int rear;
	
};
struct que q;
main(){
  q.frount=-1;
  q.rear=-1;
  int ch=0,item;
  while(ch!=4){
  	printf("1->enter to equeue:\n");
  	printf("2->enter to equeue:\n");
  	printf("3->enter to equeue:\n");
  	printf("4->enter to equeue:\n");
  	scanf("%d",&ch);
  	switch(ch){
  		case 1:
  			if( (q.rear+1)%N==q.frount){
  				printf("queue is overflow\n:");
			  }
			  else{
			  	printf("enetr ietem in queue:\n");
			  	scanf("%d",&item);
                 if(q.frount==-1){
                 	q.frount=0;
                 	q.rear=0;
				 }
				 else{
				 	q.rear=(q.rear+1)%N;
				 }
				q.queue[q.rear]=item;

			  }
			  break;
		case 2:
		    if(q.frount==-1){
		    	printf("queue is underflow\n:");
			}
			else{
				item=q.queue[q.frount];
				if(q.frount==q.rear){
					q.frount=-1;
					q.rear=-1;
				}
				else{
					q.frount=(q.frount+1)%N;
				}
			}
			break;
		case 3:
			if(q.frount==-1){
		    	printf("queue is underflow\n:");
				
			}
			else
			 {
        int i = q.frount;

        while(i != q.rear)
        {
            printf("%d\n", q.queue[i]);

            i = (i + 1) % N;
        }

        printf("%d\n", q.queue[q.rear]);
    }
				  
		break;	  
	  }

  }
  
}
