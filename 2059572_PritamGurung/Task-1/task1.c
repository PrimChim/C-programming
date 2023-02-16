#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *ptr;
	ptr = fopen("datasetLR4.txt","r");
	int x,y,sum_1,sum_2=0,xsqr,xy,n;
	
	if(ptr==NULL){
		printf("Error while opening file!!!");
		return 1;
	}
	while(fscanf(ptr,"%d,%d",&x,&y)!=EOF){
		sum_1 += x;
		sum_2 += y;
		xsqr += x*x;
		xy += x*y;
		n++;
	}
	fclose(ptr);
	
	float a,b;
	a = ((sum_2*xsqr)-(sum_1*xy))/((n*xsqr)-(sum_1*sum_1));
	b = ((n*xy)-(sum_1*sum_2))/((n*xsqr)-(sum_1*sum_1));
	
	printf("y = %.2f x + %.2f\n",b,a);
	
	float x1;
	printf("Enter a value of x to calculate the value of y:\n");
	scanf("%f",&x1);
	float y1 = (b*x1)+a;
	printf("The value of y is : %.2f",y1);
	
	return 0;
}
