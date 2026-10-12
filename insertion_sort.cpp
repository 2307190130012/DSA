//insertion sort 
#include<stdio.h>
#define N 5
main(){
	int i,j,key,ar[N];
	printf("enter the number in array :\n");
	for(i=0;i<N;i++){
		scanf("%d",&ar[i]);
	}
	for(i=1;i<=N-1;i++){
		key=ar[i];
		j=i-1;
	while(j>0 && ar[j]>key){
		ar[j+1]=ar[j];
		j=i-1;
		
	}	
	ar[j+1]=key;
	}
	printf("sorted array:\n");
	for(i=0;i<N;i++){
		printf("%d\n",ar[i]);
	}
}
