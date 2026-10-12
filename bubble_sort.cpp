#include<stdio.h>
#define N 5
main(){
	int i,j ,temp,ar[N];
	printf("enetr the elements in array :\n");
	for(i=0;i<N;i++){
		scanf("%d",&ar[i]);
	}
	for(i=0;i<=N-2;i++){
		for(j=0;j<=N-i-2;j++){
			if (ar[j]>ar[j+1]){
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	printf("sorted array \n");
	for(i=0;i<N;i++){
		printf("%d\n",ar[i]);
	}
}
