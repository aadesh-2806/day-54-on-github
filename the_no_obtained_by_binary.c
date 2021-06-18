#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,t,n;
	printf("hello\nenter value=");
	scanf("%d",&n);
 
	i=0;
	t=0;
	for(s=n;s!=0;i++)
	{	
		a[i]=s%10;
		a[i]=a[i]*(pow(2,i));
		t=t+a[i];
		s=s/10;
	}
	printf("%d",t);
	
	getch();
}	
