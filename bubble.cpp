//bubble_sort
#include<stdio.h>
#define n 7
 int main(){
	int i,j,temp,arr[n];
	printf("enetr the elemnets in array:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-2;i++){
		for(j=0;j<=n-i-2;j++){
			if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	}
	printf("sorted array :\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
return 0;
}

