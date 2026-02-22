#include<stdio.h>
//without using string functions
int pallindrome(char str[])
{
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	for(int i=0;i<len/2;i++)
	{
	  if(str[i]!=str[len-1-i])
	  {
	    return 0;
	  }
	}
	return 1;
}
void main()
{
char str[100];
 printf("\n Enter a string to check:");
 scanf("%s",str);
 if(pallindrome)
 {
  printf("\n given string is pallindrome");
 }
 else
 {
  printf("\n given string is not a pallindrome");
 }
}


