#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,sum;
	scanf("%d%d",&a,&b);
	sum=a+b;
	c=sum/1000000;
	d=sum/1000;
	if(c==0&&d==0)
		printf("%d",sum);
	if(c==0&&d!=0)
	{
		e=sum/1000;
		f=sum%1000;
		if(sum<0)
			printf("%d,%03d",e,-f);
		else
			printf("%d,%03d",e,f);
	}
	if(c!=0)
	{
		e=(sum-c*1000000)/1000;
		f=(sum-c*1000000)%1000;
		if(sum<0)
			printf("%d,%03d,%03d",c£¬-e,-f);
		else
			printf("%d,%03d,%03d",c,e,f);
	}
	return 0;
}
