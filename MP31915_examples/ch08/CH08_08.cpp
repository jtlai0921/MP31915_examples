#include<iostream>

using namespace std;

double rec_factorial(int );//���j��ƭ쫬�ŧi 
double factorial(int );//�@�몺�j���ƭ쫬�ŧi 

int main()
{	
    int n;
	cout<<"�п�J�n�p�⪺������:";
	cin>>n;
	cout<<"���j���:"<<n<<"!="<<rec_factorial(n)<<endl;
	cout<<"�@��j����:"<<n<<"!="<<factorial(n)<<endl;
    
    return 0;	
}
//���j��� 
double rec_factorial(int n)
{	
    if(n==1)
        return 1;//���X���а���L�{�����ʤf 	
    else  	
        return n*rec_factorial(n-1);// ���а��檺�L�{ 		
}
//�@�몺�j���� 
double factorial(int n)
{
    int i;
    double sum=1;
    for(i=1; i<=n; i++)
        sum*=i;//�Q�ΰj��ӭp�ⶥ����  
    return sum;	
}
