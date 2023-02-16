#include <stdio.h>
#include <pthread.h>

// question 1

void *printnumbers(void *p){
	int start = *((int*)p);
	int end = *((int*)p+1);
	int thread = *((int*)p+2);
	
	int i;
	for(i = start; i<=end; i++){
		printf("thread %d: %d \n",thread,i);
	}
	return NULL;
}

int main(){
	pthread_t th[2];
	int start = 1;
	int end = 1000/2;
	int i,arg[3],are[3];
	
	arg[0] = start;
	arg[1] = end;
	arg[2] = 1;
	pthread_create(&th[0],NULL,printnumbers,arg);
	
	are[0] = end+1;
	are[1] = 1000;
	are[2] = 2;
	pthread_create(&th[1],NULL,printnumbers,are);
	
	for (i = 0; i<2; i++){
		pthread_join(th[i],NULL);
	}
	
	return 0;
}
