#include<stdio.h>
int main()
{
	int a,b,sum,i,j,t,arr[12];
	scanf("%d%d",&a,&b);
	sum=a+b;
	if(sum<0)
	{
		printf("-");
		sum=-sum;
	}
	for(i=1;sum>=10;i++)
	{
		arr[i]=sum%10;
		sum=sum/10;
		t=i;
	}
	arr[t+1]=sum;
	//将sum逆序存入数组arr中
	for(i=1,j=t+1;i<=t+1;i++,j--)
	{
		printf("%d",arr[j]);
		if((t+1-i)%3==0&&(t+1-i)!=0)
			printf(",");
	}
	return 0;
}
