// search number in aaray
#include<stdio.h>
main(){
	int n;
	printf("enetr the size of array:\n");
	scanf("%d",&n);
	int arr[n];
	int i,search;
	printf("enetr elements of array:\n");
	for(i=0;i<n;i++){
	
	scanf("%d",&arr[i]);
}
	printf("enetr the serach elements  in array :\n");
	scanf("%d",&search);
	for(i=0;i<n;i++){
		if(arr[i]==search){
			printf("elemnet is found %d\n",search);
		}
		else{
			printf("element is not found:\n");
		}
	}
}
