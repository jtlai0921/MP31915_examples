#include<iostream>

//�ޥήɶ���ƪ����Y��
#include<ctime>
int mul(int,int);
int main()
{	
	register int i,j;//�ŧi�Ȧs���ܼ�  
	float sum;
	time_t start_time, end_time;//����Ʈɶ���ƫ��A 

    //���հj��}�l�P�����ɶ�
  	printf("�j��}�l\n");
    start_time=time(NULL); 
    //�O���}�l�ɶ� 
    for(i=1; i<=10000;i++)
    for(j=1;j<100000;j++)
	sum=sum+mul(i,j);//�j��p��L�{ 
	
    end_time=time(NULL);//time��Ʒ|�^���e�ثe���ɶ����� 
 	printf("�j�鵲��\n");
	printf("�j�骺����ɶ���%f\n\n",difftime(end_time,start_time));
     //difftime ���ɶ��t���,�i�^�Ǭ�� 
     
     return 0;
}
int mul(int a,int b)
{
    return a*b;
}
