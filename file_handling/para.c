#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("text.txt","r");
	if(fp==NULL){
		printf("Error opening file!");
		return 1;
	}
	int ch_count=0;
	int wd_count=0;
	int lines=0;
	int inword=0;
	int last_ch=0;
	int ch;
	while((ch = fgetc(fp)) != EOF)
	{
		ch_count++;
		last_ch=ch;
		if(ch=='\n'){
			lines++;
		}
		if(ch==' '||ch=='\n'||ch=='\t'||ch=='\r'||ch=='\f'||ch=='\v'){
			inword=0;
		}
		else{
		       	if(inword==0){
			inword=1;
			wd_count++;
			}
		}
	}
	fclose(fp);
	if(ch_count > 0 && last_ch != '\n'){
		lines++;
	}
	printf("character count:%d\n",ch_count);
	printf("words count:%d\n",wd_count);
	printf("Lines: %d\n",lines);
	return 0;
}


