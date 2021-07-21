#include <stdio.h>
#include <conio.h>
int  main()
{
	//khai bao bien
   int n, a, b;
   // cac buoc thuc hien
   printf("Nhap so nguyen co ba chu so : ");
   scanf("%d",&n);
   //Tach so hang tram , chuc, don vi
   a = n/100;
   n -= 100*a;
   b = n/10;
   n -= 10*b; 
   
   printf("Loai hang tram : %d \n",a);
   printf("Loai chuc : %d \n",b);
   printf("Loai don vi : %d \n",n);
   printf("Tong 3 chu so la : %d\n",  n + a + b);
   return 0;
}
