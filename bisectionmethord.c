#include<stdio.h>
#include<math.h>
float find(float x)
{
	float f;
	f=pow(x,3)-4*x+1;
	return f;
}
void main()
{
	float x0,x1,f0,f1,fx,x;
	int i;
	float eps=0.001f;
	printf("enter x0 and x1(range)");
	scanf("%f%f",&x0,&x1);
	f0=find(x0);
	f1=find(x1);
	if(f0*f1==0)
	{
		if(f0==0)
		printf("root=%d",x0);
		else
		printf("root=%d",x1);
	}
	else if(f0*f1>0)
	{
		printf("no root in given range");
		exit(0);
	}
	else
	{
		for(i=1;i<=30;i++)
		{
		
			x=(x0+x1)/2;
			
			if(find(x0)*find(x)<0)
			{
				x1=x;
			}
			if(find(x)*find(x1)<0)
			{
				x0=x;
			}
			if((fabs(x1-x0)<=eps))
			{
				printf(" root=%f\n",x);
				exit(0);
			}
		}
		
	}
}
