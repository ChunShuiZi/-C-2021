#include<stdio.h>
#include<math.h>
float dep(float a)
{
	float m;
	m=a*0.0225+a;
	return m;
}
main()
{
	float n,cap;
	printf("存款年数是"); 
	scanf("%f",&n);
	printf("本金是") ; 
	scanf("%f",&cap); 
	int i;(int)n;
	for(i=0;i<n;i++)
	{
		cap=dep(cap);
	}
	printf("本息和是%f",cap);
	return 0;
}
