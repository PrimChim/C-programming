#include <stdio.h>
#include <stdlib.h>

// question 2

int main(){
	int size;
	printf("Enter the size of array to create: ");
	scanf("%d",&size);
	
	int * ptr = (int*)malloc(sizeof(int)*size);
	
	int i,a;
	printf("Enter %d elements now:\n");
	for(i=0; i<size; i++){
		scanf("%d",&a);
		*(ptr+i) = a;
	}
	
	printf("initial elements : ");
	for(i = 0; i<size; i++){
		printf("%d ",*(ptr+i));
	}
	printf("\n");
	
	int nSize;
	printf("Enter the size to be increased : ");
	scanf("%d",&nSize);
	
	ptr = realloc(ptr,sizeof(int)*(size+nSize));
	
	printf("Enter new elements to be added: \n");
	for(i = size;i<(size+nSize); i++){
		scanf("%d",&a);
		*(ptr+i) = a;
	}
	
	printf("final elements : ");
	for(i = 0; i<(size+nSize); i++){
		printf("%d ",*(ptr+i));
	}
	
	free(ptr);
	
	return 0;
}
