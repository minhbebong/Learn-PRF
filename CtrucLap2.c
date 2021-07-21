#include<stdio.h>
 
int main(){
    int m, n , i, j;
    scanf("%d %d", &m, &n);
    printf("\nOUTPUT:\n");     
    for(i = 0; i < m; i++){//Tao hang
        for(j = 0; j < n; j++){//Tao cot
            /* Kiem tra vi tri dat dau sao */
            if(i==0 || i==m-1 || j==0 || j==n-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }   
    return 0;
}
