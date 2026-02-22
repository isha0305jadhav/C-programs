#include<stdio.h>
int main()
{
	FILE *fs,*fd;
	int ch;
	fs=fopen("src.txt","r");
	if(fs==NULL)
	{
		printf("error opening file");
		return 1;
	}
	fd=fopen("dst.txt","w");
	if(fd==NULL)
	{
		printf("Error handing the file");
		return 1;
	}
	while((ch=fgetc(fs)) != EOF){
		fputc(ch,fd);
	}
	fclose(fs);
	fclose(fd);
	printf("Copy complete: src.txt ->dst.txt\n");
       return 0;
}       


