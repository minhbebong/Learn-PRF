#include <stdio.h>
int main(){
	int a,b,n;
	printf("Enter a = ");
	scanf("%d",&a);
	printf("Enter b = ");
	scanf("%d",&b);
//	n = a + b;
//    n = ++a + b;
//    n = a++ + b;
//    n = --a + b;
//    n = a-- + b;
//    n = a + b;
    
    printf(" Enter n = a + b = %d\n", a+b);
    printf(" Enter n = ++a + b = %d\n", ++a + b);
    printf(" Enter n = a++ + b = %d\n",a++ + b);
    printf(" Enter n = --a + b = %d\n", --a + b);
    printf(" Enter n = a-- + b = %d\n", a-- + b);
    printf(" Enter n = a + b = %d\n", a+b);
    
    
    return 0;
    }

