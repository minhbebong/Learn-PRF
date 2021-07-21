#include <stdio.h>

int main(){
	// Nhap du lieu
	int x,y;
	printf("Enter x = ");
	scanf("%d",&x);
	//Cac buoc thuc hien
	if( x >= 1)
		y = x - 1;
	else 
		y = 1 - x;
		
	printf(" %d", y);
		 
	return 0;
}
