#include <stdio.h>
//#include <windows.h>
#include <pthread.h>

void* first(void *p){
	while(1){
//		sleep(1);
		printf("This is from first\n");
	}
}

struct data{
	int a;
	int b;
}d;

int result_th1, result_th2;

void* add(void *p){
	struct data* d1 = p;
	result_th1 = d1->a + d1->b;
	pthread_exit(&result_th1);
}

void* second(void *p){
	while(1){
//		sleep(1);
		printf("This is from second\n");
	}
}

void main(){
	
	d.a = 10;
	d.b = 20;
	
	void *result1,*result2;
	
	pthread_t id1, id2;
	
	pthread_create(&id1,NULL,add,&d);
//	pthread_create(&id2,NULL,second,NULL);
	pthread_join(id1,&result1);
	printf("Addition : %d", *(int*)result1);
//	pthread_join(id2,NULL);
}
