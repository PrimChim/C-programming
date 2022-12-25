#include <stdio.h>
#include <stdlib.h>

struct employee{
	char empName[15];
	int age;
	float salary;
};

struct employee input(){
	struct employee e;
	
	printf("Enter name: ");
	gets(&e.empName);
	printf("Enter age: ");
	scanf("%d",&e.age);
	printf("Enter salary: ");
	scanf("%f",&e.salary);
	fflush(stdin);
	return e;
}

int main(){
	FILE *of;
	of = fopen("employee.txt","w");
	
	struct employee e[5];
	int i;
	for(i=0;i<5;i++){
		e[i]=input();
		fprintf(of,"Name: %s,Age: %d,Salary: %.2f\n",e[i].empName,e[i].age,e[i].salary);
	}
	if(fwrite!=0){
		printf("Contents to file written successfully !");
	} else{
		printf("error while writing to file.");
	}
	fclose(of);
	
	return 0;
	
}


