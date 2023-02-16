#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <math.h>

struct threadData{
	int start;
	int end;
	double sum;
} ;

void * leibnz_th_function(void* args){
	struct threadData *data = (struct threadData*)args;
	
	int i;
	for(i = data->start; i < data->end; i++){
		data->sum += pow(-1,i) / (2 * i + 1);
	}
	
	pthread_exit(NULL);
}

int main(){
	int iterations,num_threads;
	
	printf("Enter the number of iterations:\n");
	scanf("%d",&iterations);
	
	printf("Enter the number of threads to create;\n");
	scanf("%d",&num_threads);
	
	pthread_t th[num_threads];
	struct threadData td[num_threads];
	
	int i;
	for(i = 0; i <num_threads; i++){
		td[i].start = i*(iterations/num_threads);
		td[i].end = (i+1)*(iterations/num_threads);
		td[i].sum = 0;
		pthread_create(&th[i], NULL, leibnz_th_function,(void*) &td[i]);
	}
	
	for (i = 0; i<num_threads;i++){
		pthread_join(th[i],NULL);
	}
	double pi;
	for (i=0; i < num_threads; i++){
		pi+= td[i].sum;
	}
	
	pi = 4*pi;
	printf("Pi approximation : %lf", pi);
	
	return 0;
	
}
