#include<stdio.h>
void profit_loss(int a[],int n)
{
	int day=0, profit=0;
        int max_profit=a[1]-a[0];
        int min_profit=a[1]-a[0];
        for (int i=0;i<n-1;i++)
        {
                profit=a[i+1]-a[i];
                if(profit>max_profit){
                        max_profit=profit;
                        day=i;
                }
                if(profit<min_profit){
                        min_profit=profit;
                }
        }
        printf("\n max profit:%d on %d day", max_profit,day+1);
        printf("\n min profit:%d",min_profit);

}
void main()
{
	int a[]={100,50,200,120,300};
	int n= sizeof(a)/sizeof(a[0]);
	profit_loss(a,n);


}
