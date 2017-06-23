// Lap trinh C tren Ubuntu su dung Geany

/* Nhap vao 2 so a, b. Kiem tra a co lon hon b khong hoac nguoc lai
 */

#include <stdio.h>

int main(){
	float a, b;
	
	printf("Nhap vao 2 so a, b: ");
	scanf("%f%f",&a, &b);
	
	if (a > b){		
		printf("Gia tri cua a lon hon gia tri cua b\n");		
	}
	else{
		printf("Gia tri cua a nho hon hoac bang gia tri cua b\n");		
	}
	
	printf("Hai so a, b: %0.5f %0.5f", a, b);
	
	return 0;
}
