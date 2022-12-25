#include <stdio.h>
struct student{
	int roll;
	char name[30];
};

int main(){
	FILE *fp;
	fp = fopen("student_record.txt","w");
	
	int i=0;
//	for (i=0; message[i] != '\0'; i++){
//		fputc(message[i],fp);
//	}

//	printf("%d",fprintf(fp,"%s",message));

//	fputs(message, fp);

//	char c = fgetc(fp);
//	while (c != EOF){
//		printf("%c",c);
//		c =  fgetc(fp);
//	}

//	fscanf(fp,"%[^\n]%s",message);
//	printf("%s",message);

//	while (!feof(fp)){
//		fgets(message,30,fp);
//		printf("Line %d: %s",i++,message);
//	}
//	fclose(fp);

	struct student s[5];
	for (i = 0; i<5; i++){
		printf("Roll : ");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("Name : ");
		gets(s[i].name);
		fprintf(fp, "Roll no: %d\nName: %s\n", s[i].roll,s[i].name);
	}
	fclose(fp);
	
	return 0;
}
