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
	int nixu; 
	nixu=j*100+i*10+k; 
	printf("三位整数的逆序数是%d",nixu); 
	return 0; 
 } 
