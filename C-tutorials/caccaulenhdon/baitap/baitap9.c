// Lap trinh C tren Ubuntu su dung Geany

/* Nhap vao ngay, thang, nam va in theo dinh dang dd/mm/yy
 */

#include <stdio.h>

int main(){
	int dd, mm, yy;
	
	printf("Nhap vao ngay thang nam: ");
	scanf("%d%d%d",&dd, &mm, &yy);
	
	yy = yy - (yy/100)*100; // Lay 2 so cuoi cua nam
	
	printf("Dinh dang dd/mm/yy: %02d/%02d/%02d\n", dd, mm, yy);
	
	return 0;
}
