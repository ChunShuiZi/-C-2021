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
	int all;
	all=i+j+k;
	printf("��λ��%d��ʮλ��%d����λ��%d����λ��������λ�ϵĺ���%d",j,i,k,all); 
	return 0; 
 } 
