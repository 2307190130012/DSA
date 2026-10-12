//viva user binnary serach 
#include<stdio.h>
int main(){
int target;
int n;
int low=0;
printf("enetr  number of size for array:\n ");
scanf("%d",&n);
int high=n-1;

int arr[n];
printf(" enetr the number of elemnts");
for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
}
printf("enetr your target which you want to find the number:\n");
scanf("%d",&target);
while(low<=high){
	
	int mid=(low+high)/2;
	if(arr[mid]==target){
		printf("in this array target value find in index %d=%d",mid,target);
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
