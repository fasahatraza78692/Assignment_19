#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	printf("How many strings you want to store\n");
	scanf("%d",&n);
	char str[n][20];
	for(i=0;i<n;i++)
	 {
	 	fflush(stdin);
	 	printf("Enter the %d string\n",i+1);
	 	fgets(str[i],20,stdin);
	 }
	 printf("Printing Strigs\n");
	for(i=0;i<n;i++)
	 printf("%s",str[i]);
  return 0;
}
