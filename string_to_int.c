
#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	printf("Enter a string:");
	scanf("%s",str);
	printf("output in number:");
	while(str[i]!='\0')
	{
		if(str[i]>='A'&&str[i]<='Z'){
			printf("%d",str[i]-'A'+1);
		}
		else if(str[i]>='a'&&str[i]<='z') {
			printf("%d",str[i]-'a'+1);
		}
		i++;
	}
	return 0;
}
