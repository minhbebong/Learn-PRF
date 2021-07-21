#include <stdio.h>
#include <conio.h>
int main(){
    int i, n;
    int s = 0,dem = 0;
    printf("Nhap n =");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
    	if (i % 3 == 1) 
			dem++;
        else if (i % 3 == 0)
            s += i;          
    }
    printf("So luong cac so chia 3 du 1 la : %d.", dem);
	printf("\nTong cac so chia het cho 3 la:%d",s);    
    return 0;
}	
