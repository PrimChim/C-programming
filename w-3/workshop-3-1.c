#include <stdio.h>

// q1
//int main (){
//	int a, b;
//	
//	printf("Enter a number: ");
//	scanf("%d",&a);
//	
//	printf("Enter second number: ");
//	scanf("%d",&b);
//	
//	int *ptr1, *ptr2;
//	ptr1=&a,ptr2=&b;
//	
//	if(*ptr1>*ptr2){
//		printf("%d is greater than %d",*ptr1,*ptr2);
//	}else{
//		printf("%d is greater than %d",*ptr2,*ptr1);
//	}
//}

//q4
void find(int a[]){
	int largest=a[0],i,smallest = a[0];
	for(i=0; i<3;i++){
		if(largest<a[i]){
			largest = a[i];
		}
		if (smallest>a[i]){
			smallest = a[i];
		}
	}
	printf("%d is the largest and %d is the smallest integer",largest,smallest);
}
int main(){
	int i,numbers[3],a;
	for (i=0; i<3; i++){
		printf("enter the numbers:");
		scanf("%d",&a);
		numbers[i]=a;
	}
	find(numbers);
	return 0;
}

