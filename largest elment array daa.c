#include<stdio.h>
int findLargest(int arr[],int n){
	int max=arr[0];
	int i;
	for( i=1;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
}
int main(){
	int n;
	printf("enter the number of element in the array: ");
	scanf("%d",&n);
	int arr[100];
	int i;
	printf("enter the element: ")
	for( i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("the largest element is %d/n",findLargest(arr,n));
	return 0;
}
