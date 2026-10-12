//wap to create an array of ten number by user input .now cout positive ,negative zero
#include<stdio.h>
main(){
	int n=10;
	int arr[n];
	int i;
	printf("enetr the 10 elements in array:\n");
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++){
		if(arr[i]>0){
			printf("positive number%d\n",arr[i]);
		}
		if(arr[i]<0){
		printf("negative  number%d\n",arr[i]);
	
		}
		else{
		printf("ZEroes number%d\n",arr[i]);
			
		}
	}
	
	
	
}
