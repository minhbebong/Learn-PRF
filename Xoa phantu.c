int main(){
	int a[100],b[100],c[100];
	int n, i,m,j;
	printf("Nhap so phan tu cua mang: "); scanf("%d",&n);
	printf("Nhap so phan tu cua mang: "); scanf("%d",&m);
	for(i=0 ; i <= n-1; i++){
		printf("Nhap gia tri a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(j=0 ; j <= m-1; j++){
		printf("Nhap gia tri b[%d]: ",j);
		scanf("%d",&b[j]);
	}
	i=0;j=0;
	while(1){
		if(i==n||j==m) break;
		if(a[i]<b[j])
		{
			c[i+j]=a[i];
			i++;
		}
		else
		{
			c[i+j] = b[j];
			j++;
		}
	}
	if(i==n)
		for(;j<m;j++)
			c[i+j] = b[j];
	else if(j==m)
		for(;i+j;i++)
			c[i+j] = a[i];
	printf("%d ",c[i+j]);
}
