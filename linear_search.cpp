//linear serach
#include<stdio.h>
int main(){
	int arr[5];
	int key,i;
	
	printf("enter five number:\n ");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		
		
		
	}
	printf("enetr the number :\n");
	scanf("%d",&key);
	
	for(i=0;i<5;i++){
		if(arr[i]==key){
			printf("element are found at loca %d\n",i+1);
			return 0;
		}
	}
	printf("element are not found:\n");
}
