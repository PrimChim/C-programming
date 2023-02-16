#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int *numbers=NULL;
int prime_count = 0;

struct threadData{
	int start;
	int end;
};

// to check if a number is prime
int isPrime(int p){
	if(p<=1){
		return 0;
	}
	
	int i;
	for(i = 2; i<(p/2)+1; i++){
		if(p%i == 0){
			return 0;
		}
	}
	
	return 1;
}

void* prime_th(void* args){
	struct threadData* data = (struct threadData*)args;
	
	int i;
	for(i= data->start; i<data->end; i++){
		if(isPrime(*(numbers+i))){
			prime_count += 1;
		}
	}

	pthread_exit(NULL);
}

int main(){
	
	char x[30];
	
	printf("Enter the name of file to find prime numbers:\n");
	scanf("%s",x);
	FILE *file = fopen(x,"r");
	if(file == NULL){
		printf("Error while opening file!!!");
		return 1;
	}
	
	int count;
	
	while(!feof(file)){
		int n;
		fscanf(file,"%d",&n);
        numbers = realloc(numbers, (count + 1) * sizeof(int));
        numbers[count++] = n;
	}
	fclose(file);
	printf("Numbers Count: %d\n",count);
		
	int num_threads;
	printf("Enter the number of threads :\n");
	scanf("%d", &num_threads);

	
	pthread_t th[num_threads];
	struct threadData td[num_threads];

	int i;
	for(i = 0; i <num_threads; i++){
		td[i].start = i*(count/num_threads);
		td[i].end = (i+1)*(count/num_threads);

		pthread_create(&th[i], NULL, prime_th,(void*) &td[i]);
	}
	
	for (i = 0; i<num_threads;i++){
		pthread_join(th[i],NULL);
	}
	
	printf("Total prime numbers are: %d",prime_count);
	
	
	return 0;
}
