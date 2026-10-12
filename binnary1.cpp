//binarry search 
#include<stdio.h>
int main(){
		int n=7;

	int arr[n]={10,20,30,40,50,60,70};
	int low=0;
	int high=n-1;
	int mid;
	int target=40;  
	  
	  
	  while(low<=high){
	  	mid=(low+high)/2;
	  	if(arr[mid]==target){
	  		printf("element found in array at %d=%d",mid,target);
	  		break;
		  }
		  else if(arr[mid]<=target){
		  	low=mid+1;
		  }
		  else{
		  	high=mid-1;
		  }
	  		

	  }

	  return 0;
}
