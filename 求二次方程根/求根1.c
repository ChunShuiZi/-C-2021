#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	float d;
	d=pow(b,2)-4*a*c;
	float e;
	e=sqrt(d);
	float x1,x2;
	x1=(-b+e)/2*a;
	x2=(-b-e)/2*a;
	printf("两根分别为%f %f",x1,x2);
 } 
