#include<stdio.h>
#include<math.h>
#define PI 3.141592 
main()
{
	float r;
	printf("键入半径r\n"); 
	scanf("%f",&r);
	float s,v;
	s=4*PI*pow(r,2);
	v=(4/3)*PI*pow(r,3);
	printf("表面积\n%f \n体积\n%f",s,v);
	return 0;
}
