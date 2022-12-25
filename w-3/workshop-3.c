#include <stdio.h>

int main(){
	int a,b;

	printf("\nEnter size of 1st array:");
	scanf("%d",&a);

	int numbers[a],x,i;

	for (i = 0; i<a; i++){
		printf("\nEnter element for array:");
		scanf("%d",&x);
		numbers[i]=x;
	}
	
	printf("\nEnter size of 2nd array:");
	scanf("%d",&b);
	
	int numbers2[b];
	for (i = 0; i<b; i++){
		printf("\nEnter element for array:");
		scanf("%d",&x);
		numbers2[i]=x;
	}
	
	int addition[a];
	if (a==b){
		for (i = 0; i<a; i++){
			addition[i]=numbers[i]+numbers2[i];
		}		
	} else {
		printf("the arrays cannot be added");
	}
	for (i = 0; i<a; i++){
		printf("%d\t",addition[i]);
	}
	return 0;
	
}
