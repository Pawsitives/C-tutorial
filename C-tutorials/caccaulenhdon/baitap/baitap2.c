// Lap trinh C tren Ubuntu su dung Geany

/* Tinh chu vi va dien tich cua hinh tron voi ban kinh r nhap tu ban phim
 */ 

#include <stdio.h>
#define pi 3.14

int main(){
	float r;
	
	printf("Nhap vao ban kinh r: ");
	scanf("%f",&r);
	
	float CV = 2*pi*r;
	
	float S = pi*r*r;
	
	printf("Chu vi cua hinh tron: %0.5f\n", CV);
	
	printf("Dien tich cua hinh tron: %0.5f\n", S);
	
	return 0;
}
