#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int is_digit(char st[])
{
	int i=0;
	while(st[i]!=NULL)
    {
    	if(st[i]>='0'&&st[i]<='9')
    	  i++;
    	else 
    	  return 0;
	}
  if(st[i]=='\0')
    return 1;
  else
    return 0;
}
int valid_ip(char ch[])
{
	char *p;
	int n,dots=-1;
	ch[strlen(ch)-1]='\0';
	p=strtok(ch,".");
   while(p!=NULL)
    {
    	if(!is_digit(p))
    	   return 0;
    	 n=atoi(p);
    	if(n>=0&&n<=255)
    	  dots++;
    	p=strtok(NULL,".");
	}
	if(dots==3)
	  return 1;
	return 0;
}
int main()
{
	int n,i;
	printf("How many ip adresses you want to enter\n");
	scanf("%d",&n);
	char ch[n][20];
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter %d address\n",i+1);
		fgets(ch[i],20,stdin);
	}
	for(i=0;i<n;i++)
	{
		if(valid_ip(ch[i]))
		  printf("%d is valid ip address\n",i+1);
		else
		  printf("%d is not valid ip address\n",i+1);
	}
  return 0;
}
