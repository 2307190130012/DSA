//wap to write binary_search
#include<stdio.h>
#define n 5
int main(){
	int arr[n],key ,low=0,high=n-1,mid,i;
	printf("enetr the  5 number in ascending order:\n");
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("enetr the number :\n");
	scanf("%d",&key);
	for(i=low;i<=high;i++){
		mid=(low+high)/2;
		if(key==arr[mid]){
			printf("element found at position %d:",mid);
			return 0;
		}
		else if(key<arr[mid]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	printf("elemnt is not found:\n");
}
