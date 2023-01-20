#include <stdio.h>
#include <pthread.h>

struct data{
	int a;
	int b;
}d;

int result;
void * add(void* p){
	struct data *d1 = p;
	result = d1->a + d1->b;
	pthread_exit(&result);
}

void main(){
	d.a = 10;
	d.b = 20;
	pthread_t th1;
	pthread_create(&th1,NULL,add,&d);
	void *res;
	pthread_join(th1,&res);
	int re = *(int*)res;
	printf("%d",re);
}
