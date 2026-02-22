#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	FILE *fh_output;
	fh_output=fopen("io.txt", "w");
/*	fputs("abc\n",fh_output);
	fputs("123\n",fh_output);
	fputs("A string \n",fh_output);
	char ch='L';
	fputc(ch,fh_output);
	int data=5;
	fprintf(fh_output,"data:%d\n",data);*/
	int input;
	while(true){
	printf("enter a number(-1 to exit)");
	scanf("%d", &input);
	if(input == -1)break;
	else fprintf(fh_output,"%d\n",input);
	}
	fclose(fh_output);
	/*fh_output=fopen("io.txt","a");
	fputs("\n new content is added\n",fh_output);
	fclose(fh_output);*/
	
	FILE *fh_input;
	fh_input=fopen("io.txt","r");
	int finput=0;
	int lines=0;
	int numbers[100];
	while(fscanf(fh_input, "%d", &finput)!= EOF)
	{
		numbers[lines]=finput;
		printf("file line %d: %d\n",lines+1,finput);
		lines++;
	}
	//fscanf(fh_input, "%d",&finput);
	//printf("Number: %d\n",finput);
	fclose(fh_input);
	return 0;
}
