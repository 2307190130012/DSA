//wap to create an array of ten numbers by user now count even odd numbers in array
#include<stdio.h>
#define n 10
main(){
	int arr[n];
	int i,count_d=0,count_e=0;
	
	
	
	printf("enetr the  10 number in array :\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
	
	if(arr[i]%2==0){
		count_e=count_e+1;
	}
	else{
		count_d=count_d+1;
	}
}
printf("%d even ",count_e);
printf("%d odd ",count_d);

}
