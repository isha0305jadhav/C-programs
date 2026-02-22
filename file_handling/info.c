#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("output.txt","w");
	if(fp==NULL){
		printf("Error opening file!");
		return 1;
	}
	char name[10]="Isha";
	int age=27;
	char city[20]="san jose";
	fprintf(fp,"Name:%s\nAge:%d\nCity:%s\n",name,age,city);
	fclose(fp);
	FILE *fi;
	fi=fopen("output.txt","r");
	if(fi==NULL){
		printf("Error Reading file");
		return 1;
	}
	char buffer[100];
	while(fgets(buffer, sizeof(buffer),fi)!= NULL){
		printf("%s",buffer);
	}
	fclose(fi);
	return 0;
}

