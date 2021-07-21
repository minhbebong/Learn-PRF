#include <stdio.h>

int main(){
	//Nhap du lieu
	int n;
	//Cac buoc thao tac 
	printf("Nhap nam can kiem tra : \n");
	scanf(" %d" , &n);
	if (n % 400 == 0) // Nam chia het cho 400
    	printf(" Nam nhuan co 366 ngay.\n");
    else if (n % 100 == 0) // Nam chia het 100 nhung khong chia het cho 400
    	printf(" Nam khong nhuan co 365 ngay.\n");
    else if (n % 4 == 0) // Nam chia het cho 4 nhung khong chia het cho 100
    	printf(" Nam nhuan co 366 ngay.\n");
    else // Khong chia het cho 4, 100 , 400
    	printf("Nam khong nhuan co 365 ngay.\n"); 
    return 0;
}
