#include<stdio.h>
#include<math.h>
main()
{
	int number1,number2;
	scanf("%d",&number1);
	number2=fabs(number1);
	int i,j,k;
	i=(number2%100-number2%10)/10;//十位 
	j=number2%10;//个位 
	k=(number2-10*i-j)/100;//百位 
	int all;
	all=i+j+k;
	printf("个位数%d，十位数%d，百位数%d，三位整数各个位上的和是%d",j,i,k,all); 
	return 0; 
 } 
