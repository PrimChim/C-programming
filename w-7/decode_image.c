#include <stdio.h>
#include "lodepng.h"

void main(){
	unsigned char *image;
	unsigned int h,w;
	int error = lodepng_decode32_file(&image,&h,&w,"tenbyten.png");
	printf("%s",lodepng_error_text(error));
	printf("height: %d, width %d", h,w);
	printf("\nDisplaying information of image\n");
	
	int i,j;
//	for (i=0; i<h;i++){
//		for(j=0; j<w; j++){
//			printf("%3d \t",image[4*w*i+4*j+0]);
//		}
//	}

	unsigned error1 = lodepng_encode32_file("tenby20.png", image, h, w);
	if(error) printf("error %u: %s\n", error, lodepng_error_text(error));
}
