#include<iostream>

using namespace std;

int sum(int);
int sum1(int);// ��ƭ쫬�ŧi 
int main()
{	
	int n;
	
	cout<<"�Ĥ@���I�s"<<endl; 
 	cout<<"�@���ܼƨ��:"<<sum(5)<<endl;
  	cout<<"�R�A�ܼƨ��:"<<sum1(5)<<endl;
	cout<<"�ĤG���I�s"<<endl; 
    cout<<"�@���ܼƨ��:"<<sum(10)<<endl;
  	cout<<"�R�A�ܼƨ��:"<<sum1(10)<<endl;
  	cout<<"�ĤT���I�s"<<endl; 
 	cout<<"�@���ܼƨ��:"<<sum(15)<<endl;
  	cout<<"�R�A�ܼƨ��:"<<sum1(15)<<endl;
    
    
    return 0;	
}
//�@�몺�ܼƨ��
int sum(int n)
{ 
	int sum=0;//��l�ȳ]�w��0
	sum+=n;
	return sum;
}
//�R�A�ܼƪ����
int sum1(int n)
{
	//�ŧi�R�A�ܼ�sum
	static int sum;
	
	sum+=n;
 	return sum;
}
