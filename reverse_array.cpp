#include<stdio.h>
int main()
{
	int a[3]={1,2,3};
	int b[3];
	int i;
	
	for(i=2;i>=0;i--)
	{
		b[i]=a[i];
        printf("%d",b[i]);
}
}
	
