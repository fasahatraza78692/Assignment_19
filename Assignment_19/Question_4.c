#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,flag=0;
	printf("How many strings you want to store\n");
	scanf("%d",&n);
	char str[n][20],temp[20];
	for(i=0;i<n;i++)
	 {
	 	fflush(stdin);
	 	printf("Enter the %d string\n",i+1);
	 	fgets(str[i],20,stdin);
	 }
	printf("Enter a string to search in the entered strings\n");
	 fgets(temp,20,stdin);
	for(i=0;i<n;i++)
	 	if(strcmp(str[i],temp)==0)
	 	  {
	 	  	flag=1;
	 	  	break;
		  }
	if(flag)
	 printf("String is present");
	else
	 printf("String is not present");
  return 0;
}
