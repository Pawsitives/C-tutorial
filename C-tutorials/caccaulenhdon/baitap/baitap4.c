// Lap trinh C tren Ubuntu su dung Geany
// Build: gcc baitap4.c -o baitap4 -lm

/* Tinh log(a, x) voi a, x nhap tu ban phim x>0, a>0 va a khac 1
 */

#include <stdio.h>
#include <math.h>

int main(){
	float a, x;
	
	printf("Nhap vao 2 so a, x: ");
	scanf("%f%f", &a, &x);
	
	float logax = log(x)/log(a);
	
	printf("Log(a, x): %0.5f\n", logax);
	
	return 0;
}
