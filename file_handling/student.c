#include<stdio.h>
struct student{
	char name[20];
	int roll;
	float marks;
}s[100];
int main()
{
	FILE *fp;
	int n;
	printf("Enter how many students you want to enter");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\n student %d\n",i+1);
		printf("Name: ");
		scanf("%s",s[i].name);
		printf("Roll: ");
		scanf("%d", &s[i].roll);
		printf("Marks: ");
		scanf("%f", &s[i].marks);
	}
	fp=fopen("student.txt","w");
	if(fp==NULL){
		printf("Error opening the file");
		return 1;
	}
	for(int i=0; i<n;i++){
		fprintf(fp,"%s %d %.2f\n",s[i].name,s[i].roll,s[i].marks);
	}
	fclose(fp);
	FILE *fr;
	fr=fopen("student.txt","r");
	if(fr==NULL){
		printf("Error opening file");
		return 1;
	}
	printf("\n Reading data from student.txt:\n");
	struct student temp;
	int cnt=1;
	while(fscanf(fr, "%s %d %f",temp.name, &temp.roll, &temp.marks)==3){
		printf("\n Student %d\n", cnt++);
		printf("Name: %s\n", temp.name);
		printf("Roll: %d\n", temp.roll);
		printf("Marks: %.2f\n", temp.marks);
	}
	fclose(fr);
	return 0;
}

