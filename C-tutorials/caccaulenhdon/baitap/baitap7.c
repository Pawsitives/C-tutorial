// Lap trinh C tren Ubuntu su dung Geany

/* Tinh tong tro cua mach dien song song gom 3 dien tro R1, R2, R3
 */

#include <stdio.h>

int main(){
	float R1, R2, R3;
	
	printf("Nhap vao gia tri cua 3 dien tro R1, R2, R3: ");
	scanf("%f%f%f",&R1, &R2, &R3);
	
	float R_tmp = (float) 1/R1 + (float) 1/R2 + (float) 1/R3;
	
	float R = (float) 1/R_tmp;
	
	printf("Tong tro cua mach dien gom 3 dien tro song song: %.5f\n", R);
	
	return 0;
}
