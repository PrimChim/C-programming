#include <stdio.h>
#include "lodepng.h"

int main(){
	unsigned char *image;
	unsigned int h,w;
	int error = lodepng_decode32_file(&image,&h,&w,"luffy.png");
	printf("%s",lodepng_error_text(error));
	printf("h: %d, w %d", h,w);
	printf("\nDisplaying information of image\n");
	
	int i;
	unsigned char *neg = image;
	for (i = 0; i < (h*w*4); i += 4){
		neg[i]=255-*(image+i);
		neg[i+1]=255-*(image+i+1);
		neg[i+2]=255-*(image+i+2);
		neg[i+3]=*(image+i+3);
	}

	unsigned error1 = lodepng_encode32_file("luffynegatie.png", neg, h, w);
	if(error1) printf("error %u: %s\n", error1, lodepng_error_text(error));
	
	return 0;
}
