#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[100],i,j,t,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n-1;i++)
	{
		for(j=1;j<n-i;j++)  //想一想为什么是n-1
		{
			if(a[j] > a[j+1])
			{
				t =a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	return 0;
}
