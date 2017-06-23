// Lap trinh C tren Ubuntu su dung Geany

/* In ra ma ASCII cua ky tu va ky tu ke tiep cua ky tu nhap vao
 */

#include <stdio.h>

int main(){
	char kt;
	
	printf("Nhap vao 1 ky tu: ");
	scanf("%c",&kt);
	
	int giatri_ascii = kt;
	char kt_ketiep = kt + 1;
	
	printf("Ma ACSII cua ky tu %c: %d\n", kt, giatri_ascii);	
	printf("Ky tu ke tiep cua ky tu %c: %c\n", kt, kt_ketiep);
	
	return 0;
}
