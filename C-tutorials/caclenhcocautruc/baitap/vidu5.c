// Lap trinh C tren Ubuntu su dung Geany

/* Nhap vao thang va cho biet so ngay trong thang
 */

#include <stdio.h>

int main(){
	int m;
	
	printf("Nhap vao thang trong nam: ");
	scanf("%d",&m);
	
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
		printf("Thang %d co 31 ngay", m);
	}
	else{
		if (m == 4 || m == 6 || m == 9 || m == 11){
			printf("Thang %d co 30 ngay", m);
		}
		else{
			if (m == 2){
				printf("Thang %d co 28 hoac 29 ngay", m);
			}
		}
	}
	
	return 0;
}
