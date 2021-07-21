#include <stdio.h>
#include <math.h>

//Khai báo
int main()
{
    //Bien chinh
    int i, j, n, m;

    //take user input for rows and columns
    printf("Enter a number of rows : ");
    scanf("%d", &m);
    printf("\nEnter a number of columns :\n ");
    scanf("%d", &n);
    for(i = 1; i <= m; ++i)
    {
        for(j = 1; j <= n; ++j) 
        {
            if( i == 1 || i == m || j == 1 || j == n )
            {
                printf("*");
                if(j == n)
                printf( "\n" );
            }
            else
                printf(" "); 
        }
    }
    
    return 0;
}
    		

   
