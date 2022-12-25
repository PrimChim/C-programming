int main(){
	int n[]={1,2,3,4,5};
	int *ptr,i;
	ptr = &n[0];
	for (i=0; i<5; i++){
		printf("%d ",*(ptr+i));
	}
	
	return 0;
}
