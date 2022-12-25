#include <stdio.h>

int main(){
	
	// q1
//	int c,i;
//	for (i = 0; i<=10; i++){
//		c +=i;
//	}
//	printf("%d", c);
	
	//q2
//	int in_fact,ans_fact;
//	in_fact=10;
//	while(in_fact>0){
//		ans_fact *= in_fact;
//		in_fact --;
//	}
//	printf("%d", ans_fact);

	//q5
	int i,j;
	char ch='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
		}
		printf("\n");
		ch++;
	}

}

