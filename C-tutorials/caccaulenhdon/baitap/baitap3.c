// Lap trinh C tren Ubuntu su dung Geany
// Build: gcc baitap3.c -o baitap3 -lm

/* Tinh chu vi va dien tich cua tam giác với độ dài ba cạnh a, b, c nhập từ bàn phím
 */

#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	
	printf("Nhap vao 3 canh cua mot tam giac a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	
	float CV = a + b + c;
	
	float p = (float) CV/2;
	
	float S = sqrt(p*(p - a)*(p - b)*(p - c));
	
	printf("Chu vi cua hinh tam giac: %0.5f\n", CV);
	
	printf("Dien tich cua hinh tam giac: %0.5f\n", S);
	
	return 0;
}
