#include<stdio.h>
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=a+b;
	if(sum<0)
	{
		printf("-");
		sum=-sum;
	}
	if(sum<1000)
		printf("%d",sum);
	if(999<sum&&sum<1000000)
		printf("%d,%03d",sum/1000,sum%1000);
	if(999999<sum&&sum<100000000)
		printf("%d,%03d,%03d",sum/1000000,(sum%1000000)/1000,sum%1000);
	return 0;
}
