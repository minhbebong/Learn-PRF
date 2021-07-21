#include <stdio.h>
//dinh nghia ham giaithua
int giaithua(int a)// header cua ham 
{//than ham : cau lenh de tu input-> tinh duoc output
	int gt=1 , i;
	for(i=2 ; i <= a; i++)
		gt=gt*i;
	return gt;
}
int  tonggiaithua(int x)// tinh tong giaithua cua x
{
	int digit,sum=0;
	while(x>0)
	{
		digit=x%10;
		x=x/10;
		sum += giaithua(digit);
	}
	return sum;
}
main()
{
	int n,s,digit,sum;
	for(n=1;n<=1000;n++)
	{
		//tach cac chu so cua n
		if(n == tonggiaithua(n))
			printf("%5d", n);			
	}
}
