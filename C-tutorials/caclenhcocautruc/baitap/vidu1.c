// Lap trinh C tren Ubuntu su dung Geany

/* Tim nghich dao cua mot so thuc a khac 0
 */

#include <stdio.h>

int main(){
	float a;
	
	printf("Nhap vao so thuc a: ");
	scanf("%f",&a);
	
	if (a != 0){
		float nghichdao = (float) 1/a;
		printf("So nghich dao cua a: %f\n", nghichdao);
	}
	
	return 0;
}
