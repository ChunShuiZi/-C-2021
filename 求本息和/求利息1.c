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
	printf("���������"); 
	scanf("%f",&n);
	printf("������") ; 
	scanf("%f",&cap); 
	int i;(int)n;
	for(i=0;i<n;i++)
	{
		cap=dep(cap);
	}
	printf("��Ϣ����%f",cap);
	return 0;
}
