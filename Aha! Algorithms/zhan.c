#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char a[101],s[101];
	int i,len,mid,next,top;

	fgets(a,101,stdin);
	len = strlen(a);
	mid = len/2 - 1;

	top = 0;
	for(i = 0;i <= mid;i++)
		s[++top] = a[i];

	if(len % 2 == 0)
		next = mid + 1;
	else
		next = mid + 2;

	for (i = next;i <= len -1;i++)
	{
		if(a[i] != s[top])
			break;
		top--;
	}

	if(top == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}