#include<stdio.h>
#include<math.h>
#define PI 3.141592 
main()
{
	float r;
	printf("����뾶r\n"); 
	scanf("%f",&r);
	float s,v;
	s=4*PI*pow(r,2);
	v=(4/3)*PI*pow(r,3);
	printf("�����\n%f \n���\n%f",s,v);
	return 0;
}
