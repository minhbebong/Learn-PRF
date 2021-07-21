#include <stdio.h>
void del(int a[],int *n,int k)
{
	int i;
	for(i=k ; i < *n-k+1; i++)
	{
		a[i]=a[i+1];
	}
	*n-=1;
}
int main()
{
	int size,a[100],i;
	printf("Enter size =");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			del(a,&size,i--);
		}
	}
	printf("Day so in ra sau khi xoa ptu chan la :");
	for(i=0;i<size;i++)
	{
		printf(" %d",a[i]);
	}
}
