
#include<stdio.h>
int main()
{
	char a=5;
	char b=9;
	//Bitwise and operation
	printf("\n Bitwise and(&):%d",a&b);
	//bitwise or operation
	printf("\n Bitwise OR(|): %d",a|b);
	//bitwise not operation
	printf("\n Bitwise Nor(~): %d %d",~a,~b);
	//bitwise xor operation
        printf("\n Bitwise XOR(^): %d",a^b);
	//leftshift
	printf("\n Leftshift Operation(<<):%d %d",a<<1, b<<1);
       //rightshift
       printf("\n Rightshift Operation(>>): %d %d", a>>1, b>>1);
       return 0;
}       
