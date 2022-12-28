#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],psswrd[10],ch;
	int i;
	printf("Enter username:\n");
	gets(name);
	printf("Enter the password <8 character\n");
	for(i=0;i<8;i++)
	 {
	 	ch=getchar();
	 	psswrd[i]=ch;
	 	ch='*';
	 	printf("%c",ch);
	 }
	psswrd[i]='\0';
	printf("\nYour password: %s",psswrd);
	return 0;
}
