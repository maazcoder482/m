#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i=0;
	printf("Enter Name :");
	scanf("%s",a);
	//printf("Length of String :%d",strlen(a));
	while(a[i]!='\0')
	{
		i++;
	}
	printf("%d",i);
	return 0;
}
