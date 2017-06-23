// Lap trinh C tren Ubuntu su dung Geany

/* Kiem tra so nguyen nhap vao la so chan hay so le
 */

#include <stdio.h>

int main(){
	int n;
	
	printf("Nhap vao so nguyen n: ");
	scanf("%d",&n);
	
	int r = n%2;
	
	switch (r){
		case 0:
			printf("%d la so chan", n);
			break;
		
		case 1:
			printf("%d la so le", n);
			break;
	}
	
	return 0;
}
