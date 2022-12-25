#include <stdio.h>

int main(){
	int a;
	printf("Enter the size of the array:\n");
	scanf("%d",&a);
	
	int array[a],i;
	for (i = 0; i<a; i++){
		printf("Enter the elements of array:\n");
		scanf("%d",&array[i]);
	}
	
	int largest=0;
	for (i = 0; i<a; i++){
		if(largest<array[i]){
			largest = array[i];
		}
	}
	printf("%d is the largest number in the array.",largest);
	return 0;
}
