#include <stdio.h>
int main(){
	int p,min,i,j,n,a[n]={};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=0;j<n;j++)
		{
			if(a[i]<a[min])
			{
				min=j;
			}
			if(min!=i)
			{
				p=a[min];
				a[min]=a[i];
				a[i]=p;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a=[i]);
	
	
	
	return 0;
	
} 
