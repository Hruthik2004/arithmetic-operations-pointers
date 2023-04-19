#include<stdio.h>
void main()
{
	int a,b,*p,*q,sum,sub,mul,div,mod;
	p=&a;
	q=&b;
	printf("enter values of a and b:\n");
	scanf("%d %d",&a,&b);
	sum=*p+*q;
	sub=*p-*q;
	mul=*p**q;
	div=*p/ *q;
	mod=*p%*q;
	printf("sum=%d\n sub=%d\n mul=%d\n div=%d\n mod=%d\n",sum,sub,mul,div,mod);
}
