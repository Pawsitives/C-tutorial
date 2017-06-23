// Lap trinh C tren Ubuntu su dung Geany

/* Dao nguoc mot so nguyen duong co dung 3 chu so
 */

#include <stdio.h>

int main(){
	int a, b, c;
	
	printf("Nhap vao so nguyen duong n: ");
	scanf("%01d%01d%01d",&a, &b, &c);	
	
	printf("So dao nguoc cua %d%d%d: %d%d%d\n", a, b, c, c, b, a);
	
	return 0;
}
