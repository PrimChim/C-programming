#include <stdio.h>
#include <stdlib.h>
//int main(){
//	int *ptr1;
//	float *ptr2;
//	char *ptr3;
//	ptr1 = (int*)calloc(3,sizeof(int));
//	ptr2 = (float*)calloc(3,sizeof(float));
//	ptr3 = (char*)calloc(3,sizeof(char));
//	
//	
//	
//	return 0;
//}


// 1) Write a program in C to store n elements in an array and print the elements using pointer.
//int main(){
//	int n,i;
//	printf("Enter the size of array: \n");
//	scanf("%d", &n);
//	
//	int arr1[n];
//	printf("Enter the elements of array:\n");
//	for(i = 0; i < n; i++){
//		scanf("%d",&arr1[i]);
//	}
//	
//	int *ptr;
//	ptr = arr1;
//	printf("%x", ptr);
//	
//	printf("Printed numbers using pointer: ");
//	for (i = 0; i<n; i++){
//		printf("%d ",ptr[i]);
//	}
//}

// 2) Write a program in C to compute the sum of all elements in an array using pointer.
//int main(){
//	int n,i;
//	printf("Enter the size of array: \n");
//	scanf("%d", &n);
//	
//	int arr1[n];
//	printf("Enter the elements of array:\n");
//	for(i = 0; i < n; i++){
//		scanf("%d",&arr1[i]);
//	}
//	
//	int *ptr,sum=0;
//	ptr = arr1;
//	
//	for (i = 0; i<n; i++){
//		sum += ptr[i];
//	}
//	printf("sum : %d",sum);
//}

// 3) Write a C program to search an element in array using pointers.
//int main(){
//	int arr1[]={1,2,3,4,5,7,9};
//	
//	int *ptr,n,i;
//	ptr = arr1;
//	
//	printf("Enter a number to find:\n");
//	scanf("%d",&n);
//	int index=0;
//	for (i = 0; i<sizeof(arr1)/sizeof(int); i++){
//		if(ptr[i]==n){
//			index = i;
//			break;
//		}
//	}
//	if(index==0){
//		printf("Oops the number you are searching is unavailable...");
//	} else {
//		printf("Index of the number you are searching : %d",index);
//	}
//	return 0;
//}

// 4) write a 'C' program to reverse an array's element using dynamic memory allocation.
int main(){
	int n, *ptr,i;
	
	printf("Enter number of elements: \n");
	scanf("%d", &n);
	ptr = (int*)calloc(n,sizeof(int));
	
	printf("Enter the elements of array:\n");
	for (i=0; i<n; i++){
		scanf("%d", (ptr+i));
	}
	
	printf("array given in reverse is: ");
	for (i=n-1; i>=0; i--){
		printf("%d ", *(ptr+i));
	}
	
	free(ptr);
	
	return 0;
}



