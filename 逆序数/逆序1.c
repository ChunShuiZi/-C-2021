#include<stdio.h>
#include<math.h>
main()
{
	int number1,number2;
	scanf("%d",&number1);
	number2=fabs(number1);
	int i,j,k;
	i=(number2%100-number2%10)/10;//ʮλ 
	j=number2%10;//��λ 
	k=(number2-10*i-j)/100;//��λ 
	int nixu; 
	nixu=j*100+i*10+k; 
	printf("��λ��������������%d",nixu); 
	return 0; 
 } 
