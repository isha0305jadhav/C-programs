#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("data.txt","w");
	if(fp == NULL){
		printf("Error opening filr!\n");
		return 1;
	}
	fprintf(fp,"hello ubuntu! This is file handling in c\n");
	fclose(fp);
	fp=fopen("data.txt","r");
	if (fp == NULL){
		printf("Error opening file!\n");
		return 1;
	}
	char buffer[100];
	while(fgets(buffer,sizeof(buffer),fp)){
		printf("%s",buffer);
	}
	fclose(fp);
	return 0;
}

