#include <stdio.h>

struct point{
	float x;
	float y;
};

struct point getPoint(){
	struct point a;
	printf("Enter value of x: ");
	scanf("%f",&a.x);
	printf("Enter value of y: ");
	scanf("%f",&a.y);
	
	return a;
}

struct point calcMidpoint(struct point a, struct point b){
	struct point m;
	
	m.x = (a.x+b.x)/2;
	m.y = (a.y+b.y)/2;
	
	return m;
}

void printStruct(struct point a){
	printf("(%.2f,%.2f)\n",a.x,a.y);
}

int main(){
	struct point p1, p2, mid;
	
	p1= getPoint();
	printStruct(p1);
	p2 = getPoint();
	printStruct(p2);
	
	mid = calcMidpoint(p1,p2);
	printStruct(mid);
	return 0;
}
