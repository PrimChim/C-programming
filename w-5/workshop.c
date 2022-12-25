#include <stdio.h>
#include <string.h>

//struct complex{
//	float real;
//	float imaginary;
//};
//
//struct complex sumComplex(struct complex a, struct complex b){
//	struct complex x;
//	x.real = a.real+b.real;
//	x.imaginary = a.imaginary+b.imaginary;
//	return x;
//}
//
//struct complex takeInput(){
//	struct complex x;
//	
//	printf("Enter the real part: \n");
//	scanf("%f",&x.real);
//	
//	printf("Enter the imaginary part: \n");
//	scanf("%f", &x.imaginary);
//	
//	return x;
//}
//
//void print(struct complex a){
//	printf("%.2f + %.2fi",a.real,a.imaginary);
//}

// first question
//int main(){
//	struct complex n1,n2,n3;
//	n1 = {2,3};
//	n2 = {5,8};
//	n3.real = n1.real + n2.real;
//	n3.imaginary = n1.imaginary+n2.imaginary;
//	
//	printf("n3 : %.2f + %.2fi",n3.real,n3.imaginary);
//}

// second question
//int main(){
//	struct complex a,b;
//	
//	a = takeInput();
//	b = takeInput();
//	
//	struct complex sum = sumComplex(a,b);
//	printf("\nSum of complex numbers : ");
//	print(sum);
//	
//	return 0;
//}

// question no 3
//struct student{
//	char name[25];
//	int rollNo;
//	float marks;
//};
//
//
//struct student read(){
//	struct student a;
//	
//	fflush(stdin);
//	printf("Enter the name of student: ");
//	gets(a.name);
//	
//	printf("Enter the roll number of student: ");
//	scanf("%d",&a.rollNo);
//	
//	printf("Enter the marks of student: ");
//	scanf("%f",&a.marks);
//	
//	return a;
//}
//
//void display(struct student a){
//	printf("\nName: %s\nRoll No: %d\nMarks: %.2f",a.name,a.rollNo,a.marks);
//}
//
//int main(){
//	struct student s[10];
//	int i;
//	
//	for (i = 0; i<10; i++){
//		s[i] = read();
//	}
//	
//	for (i=0; i<10;i++){
//		display(s[i]);
//	}
//	
//	return 0;
//}

// employee salary problem
//struct employee{
//	char name[15];
//	char post[10];
//	float salary;
//};
//
//void displayEmp(struct employee a){
//	printf("Name: %s\nPost: %s\nSalary: %.2f",a.name,a.post,a.salary);
//}
//
//int main(){
//	struct employee e[2];
//	int i;
//	for (i=0; i<2; i++){
//		fflush(stdin);
//		printf("Enter the name of employee: ");
//		gets(e[i].name);
//		printf("Enter the post of employee: ");
//		gets(e[i].post);
//		printf("Enter the salary of employee: ");
//		scanf("%f",&e[i].salary);
//	}
//	
//	for (i=0; i<2;i++){
//		if(e[i].salary>10000){
//			displayEmp(e[i]);
//		}
//	}
//	return 0;
//}

// upper and lower limit
//struct range{
//	int lower;
//	int upper;
//};
//
//void display(struct range a){
//	int i;
//	printf("The numbers between %d and %d are: ",a.lower,a.upper);
//	for (i=a.lower; i<=a.upper; i++){
//		printf("%d ",i);
//	}
//}
//
//int main(){
//	struct range a;
//	printf("Enter the lower limit: ");
//	scanf("%d", &a.lower);
//	printf("Enter the upper limit: ");
//	scanf("%d",&a.upper);
//	
//	display(a);
//	
//	return 0;
//}


// student again
//struct student_info{
//	char name[15];
//	int age;
//	char dateOfBirth[10];
//};
//struct student{
//	int rollNo;
//	float marks;
//	struct student_info a;
//};
//
//int main(){
//	struct student s[3];
//	int i;
//	for (i=0; i<3; i++){
//		fflush(stdin);
//		printf("Enter the roll number: ");
//		scanf("%d",&s[i].rollNo);
//		printf("Enter the marks: ");
//		scanf("%f",&s[i].marks);
//		fflush(stdin);
//		printf("Enter name: ");
//		gets(&s[i].a.name);
//		printf("Enter age: ");
//		scanf("%d",&s[i].a.age);
//		fflush(stdin);
//		printf("Enter date of birth: ");
//		gets(&s[i].a.dateOfBirth);
//	}
//	
//	for (i=0; i<3; i++){
//		printf("Name: %s\nAge: %d\nDate of birth: %s\n",s[i].a.name,s[i].a.age,s[i].a.dateOfBirth);
//		printf("Roll No: %d\nMarks: %.2f\n",s[i].rollNo,s[i].marks);
//	}
//	return 0;
//}

// employee again for qn 5
//struct employee{
//	char name[15];
//	float salary;
//	int hours;
//};
//
//void finalSal(struct employee e){
//	if(10>e.hours>=8){
//		e.salary+=50;
//	} else if(12>e.hours>=10){
//		e.salary += 100;
//	} else if(e.hours>=12){
//		e.salary += 150;
//	}
//	printf("Name: %s\nFinal salary: %.2f\n",e.name,e.salary);
//}
//
//int main(){
//	struct employee e[5];
//	int i;
//	for (i=0; i<5; i++){
//		printf("Enter name: ");
//		gets(&e[i].name);
//		printf("Enter salary: ");
//		scanf("%f",&e[i].salary);
//		printf("Enter hours: ");
//		scanf("%d",&e[i].hours);
//		fflush(stdin);
//	}
//	for(i=0;i<5;i++){
//		finalSal(e[i]);
//	}
//	return 0;
//}

struct Employee{
	char name[15];
	float salary;
	int hours;
};

void highest(struct Employee a[],int n){
	int i;
	float max = a[0].salary;
	for (i=1;i<n;i++){
		if(max<(a[i].salary)){
			max = (a[i].salary);
		}
	}
	printf("The highest salary is : %.2f",max);
}

int main(){
	int n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	struct Employee e[n];
	for (i=0;i<n;i++){
		fflush(stdin);
		printf("Enter name: ");
		gets(&e[i].name);
		printf("Enter salary: ");
		scanf("%f",&e[i].salary);
		printf("Enter hours: ");
		scanf("%d",&e[i].hours);
	}
	highest(e,n);
	return 0;
}

