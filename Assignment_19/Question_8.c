#include<stdio.h>
#include<string.h>
int check(char st[][10],char w1[],char w2[],int n)
{
	int i,flag1=0,flag2=0;
    for(i=0;i<n;i++)
      {
    	if(!strcmp(w1,st[i]))
    	   flag1=1;
    	if(!strcmp(w2,st[i]))
    	   flag2=1;
	  }
	if(flag1&&flag2)
	   return 1;
	else{
		printf("Any word not exist");
		return 0;
	}
}
int indexw1(char st[][10],char word1[],int n)
{
	int i;
	for(i=0;i<n;i++)
	   	if(!strcmp(st[i],word1))
	   	  	return i;
}
int indexw2(char st[][10],char word2[],int n)
{
	int i;
	for(i=0;i<n;i++)
	   	if(!strcmp(st[i],word2))
	   	    return i;
}
int distance(char st[][10],char w1[],char w2[],int n)
{
	int i,count=0;
	if(check(st,w1,w2,n))
	   {
	   	 for(i=indexw1(st,w1,n)+1;i<indexw2(st,w2,n);i++)
	   	  {
	   	  	if(strcmp(st[i],w2))
	   	  	   count++;
		  }
		  return count;
	   } 
}
int main()
{
	int n,i;
	printf("How many words you want to enter\n");
	scanf("%d",&n);
	char st[n][10];
	char w1[10],w2[10];
	for(i=0;i<n;i++)
	 {
	 	fflush(stdin);
	 	printf("Enter the %d word\n",i+1);
	 	gets(st[i]);
	 }
	printf("Enter the 1st word to find distance\n");
	gets(w1);
	printf("Enter the 2nd word\n");
	gets(w2);
	printf("Minimum distance between %s and %s = %d",w1,w2,distance(st,w1,w2,n));
	return 0;
}
