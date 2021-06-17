#include<stdio.h>
#include<conio.h>
int main()
{
	int i,m,n,j,s,a[20][20],b[20][20],c;
	
	printf("hello\nenter number of values=");
	scanf("%d%d",&n,&m);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter value %d,%d=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	getch();
}
