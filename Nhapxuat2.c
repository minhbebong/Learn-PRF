#include <stdio.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159
int main() {
	int r;
	float cv,s;
	printf("Nhap ban kinh r:");
	scanf("%d",&r);
	cv = 2*PI*r;
	s=PI*r*r;
	printf("Chu vi la : %6.2f \n",cv);
	printf("Dien tich la : %6.2f \n",s);
	return 0;
	}
	
