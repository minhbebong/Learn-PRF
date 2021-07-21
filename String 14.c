#include <stdio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    char c;
    printf("Nhap chuoi: ");
    int n,dem=0,i;
	gets(a);
    n=strlen(a);
//    printf("Nhap ki tu: ");
//    scanf("%c",&c);
    for (i=0; i<n; i++){
        if (a[i]==c)
            dem++;
    printf("Ki tu %c xuat hien %d lan",c,dem);
	}
}
