#include <stdio.h>
int main()
{
	FILE *fp;
	int num;
	int max, min;
	int flag=1;
	fp=fopen("num.txt","r");
	if(fp==NULL){
		printf("Error Opening file");
		return 1;
	}
	while(fscanf(fp, "%d", &num)==1){
		if(flag){
			max = min = num;
			flag=0;
		}else{
			if(num>max){
				max=num;
			}
			if(num<min){
				min=num;
			}
		}
	}
	fclose(fp);
	if(flag){
		printf("No integers found\n");
	}
	else{
		printf("max:%d\n",max);
		printf("min:%d\n",min);
	}
	return 0;
}
