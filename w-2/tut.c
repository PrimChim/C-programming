#include <stdio.h>

void main(){
	int n = getUserInput();
	int checkBit = perfectNumber(n);
	if(checkBit == n){
		printf("Perfect number");
	} else{
		printf("Not a perect number");
	}
}

int getUserInput(){
	int num1;
	printf("Enter a number: ");
    scanf("%d", &num1);
    return num1;
}

int isNumberEven(int n){
	return (n%2);
}

int perfectNumber(int n){
	int divisor;
	int sum = 0;
	for(divisor = 1; divisor<n;divisor++){
		if (n%divisor == 0){
			sum = sum + divisor;
		}
	}
	return sum;
	
}

int armstrongNumber(int n){
	while (n>9){
		
	}
}
