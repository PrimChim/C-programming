#include <stdio.h>
#include <math.h>
// factorial function
int factorial(int a){
	int fact=1;
	while (a>1){
		fact = fact * a;
		a -= 1;
	}
	return fact;
}

// function for question 1
void midpoint(float x1, float y1, float x2, float y2)
{
    float xmid, ymid;
    xmid = (x1 + x2) / 2;
    ymid = (y1 + y2) / 2;
    printf("The midpoint coordinates of the line are (%.2f, %.2f)", xmid, ymid);
}

// function for question 2
int greater (int x, int y)
{
	if (x>y){
		return x;
	}
	return y;
}

//function for question 3
void triangular(int n){
	int a=1;
	for (int i = 0; a < n; i++){
		printf("\n%d",a);
		a += i+2;
	}
}

//function for question 4
float velocityCalc(float v, float u, float a, float t){
	// v=u+at 
	if (isnan(v)){
		return (u+(a*t));
	} else if(isnan(u)){
		return (v-(a*t));
	} else if (isnan(a)){
		return (v-u)/t;
	}
	return (v-u)/a;
}

//function for question 5
void equations(double a, double b, double c, double d,
double e, double f){
	double x = (c*e - b*f)/(a*e - b*d);
	double y = (a*f - c*d)/(a*e - b*d);
	printf("\nx= %.2lf", x);
	printf("\ny= %.2lf", y);
}

//extra question 1!/1+2!/2+3!/3+4!/4+5!/5
float series(){
	int n = 5;
	float sum = 0;
	for (int i = 1; i<=n;i++){
		sum += factorial(i)/i;
	}
	return sum;
}

// armstrong number
int armstrong(int a){
    int i=0;
    while (a>0){
        i += (a%10)*(a%10)*(a%10);
        a = a/10;
    }
    if(a==i){
        return 1;
    } else {
        return 0;
    }
}

// perfect num
int perfect(int b){
    int sum = 0,i;
    for (i = 1; i<b; i++){
        if (b/i==0){
            sum += i;
        }
    }
    if (b==sum){
        return 1;
    }
    return 0;
}

int main(){
	//answer 1
	midpoint(3,5,8,16);
	
	//answer 2
	printf("\n%d",greater(2,3));
	
	//answer 3
	triangular(15);
	
	//answer 4
	printf("\n%.2f ",velocityCalc(12,2,3,NAN));
	
	//answer 5
	equations(1,2,3,4,5,6);
	
	//factorial ans
	printf("\n%d",factorial(10));
	
	//extra ans
	printf("\n%.2f",series());
	
	printf("armstrong %d", armstrong(371));
	
	return 0;
}
