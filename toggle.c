#include<stdio.h>

void main()
{
	char a[100];
	int i,n;
	
	printf("hello\nenter string=");
	gets(a);
	
	i=0;
	while(a[i]!=0)
	{
		i++;
	}
	n=i;
		
	i=0;
	while(i<n)
	{
			
		if(a[i]>='a'&&a[i]<='z')													
		{
			a[i] = a[i]-32;
		}
		else
		{
			if(a[i]>='A'&&a[i]<='Z')
			{
				a[i] = a[i]+32;
			}
	
		}
		i++;
			
	}

	puts(a);
	
	getch();
	
}	
