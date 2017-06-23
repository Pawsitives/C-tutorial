// Lap trinh C tren Ubuntu su dung Geany

/* Tinh diem trung binh Toan, Ly, Hoa cua mot hoc sinh voi 2 chu so thap phan
 */

#include <stdio.h>

int main(){
	float T, L, H;
	
	printf("Nhap vao diem Toan, Ly, Hoa: ");
	scanf("%f%f%f",&T, &L, &H);
	
	float TB = (float) (T + L + H)/3;
	
	printf("Diem trung binh Toan, Ly, Hoa: %.2f\n", TB);
	
	return 0;
}
