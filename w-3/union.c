#include <stdio.h>

void UNION(int setA[], int setB[],int a, int b){
	
	int setC[a+b];
	
	int i,j,x;
	
	for(i=0;i<a; i++){
		for (j = 0; j<sizeof(setB)/4; j++){
			if (setA[i]!= setB[j]){
				setC[i] = setA[i];
			} else {
				x++;
				break;
			}
		}
		
	}
	
	i = i-x;
	
	for(j=0; j < b ; j++){
		setC[i]=setB[j];
		i++;
	}

	printf("The union is: ");
	for (i=0 ; i< 6; i++){
		if (setC[i] != 0){
			printf("%d ", setC[i]);
		}
	}
}

int main(){
    int setA[3]={1,2,3};
    int setB[3]={3,4,5};
    
    UNION(setA,setB,sizeof(setA)/4,sizeof(setB)/4);
    return 0;
}
