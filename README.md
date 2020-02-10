#include<stdio.h>
	void sum(int a,int b)
	{
		int s;
		s=a+b;
		printf("sum is:%d \n",s);
	}
	void difference(int a,int b)
	{
		int diff;
		diff=a-b;
		printf("difference is:%d \n",diff);
	}
	void product(int a,int b)
	{
		int pro;
		pro=a*b;
		printf("product is:%d \n",pro);
	}
	void quotient(int a,int b)
	{
		int quo;
		quo=a/b;
		printf("quotient is:%d \n",quo);
	}
	void reminder(int a,int b)
	{
		int rem;
		rem=a%b;
		printf("reminder is:%d \n",rem);
	}
	int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	sum(a,b);
	difference(a,b);
	product(a,b);
	quotient(a,b);
	reminder(a,b);
	return 0;
}
