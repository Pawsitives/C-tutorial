// Lap trinh C tren Ubuntu su dung Geany
// Build: gcc baitap5.c -o baitap5 -lm

/* Tinh he so goc va khoang cach cua hai diem (x1, y1) va (x2, y2).
 */

#include <stdio.h>
#include <math.h>

int main(){
	float x1, x2, y1, y2;
	
	printf("Nhap vao toa diem diem A: ");
	scanf("%f%f", &x1, &y1);
	
	printf("Nhap vao toa diem diem B: ");
	scanf("%f%f", &x2, &y2);
	
	float hesogoc = (float) (y2 - y1)/(x2 - x1);
	
	float khoangcach = (float) sqrt((y2 - y1)*(y2 - y1) + (x2 - x1)*(x2 - x1));
	
	printf("He so goc: %0.5f\n", hesogoc);	
	printf("Khoang cach: %0.5f\n", khoangcach);
	
	return 0;
}
