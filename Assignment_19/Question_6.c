#include<stdio.h>
#include<string.h>
int palindrom(char str[])
{
	int i,j;
	i=0,j=strlen(str)-2;
	while(i<j)
	{
		if(str[i]!=str[j])
		  return 0;
		i++;
		j--;
	}
   return 1;
}
int main()
{
	int i,j,n;
	printf("How many strings you want to store\n");
	scanf("%d",&n);
	char str[n][30];
	for(i=0;i<n;i++)
	 {
	 	fflush(stdin);
	 	printf("Enter %d string\n",i+1);
	 	fgets(str[i],30,stdin);
	 }
	printf("Palindrom Strings...\n");
	for(i=0;i<n;i++)
	 	if(palindrom(str[i]))
	 	 printf("%s",str[i]);
	return 0;
}
