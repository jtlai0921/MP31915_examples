#include<iostream>

using namespace std;

int my_pow(int,int);
void show_output(int);
//�ŧi��ƭ쫬
int main()
{
 
    int x,r;
    cout<<"�п�J��ӼƦr:"<<endl;
    //��J�Ʀr
    cout<<"x=";
    cin>>x;
    cout<<"r=";
    cin>>r;
    //�b�{���ԭz���I�s���
    cout<<x<<"��"<<r<<"����="<<my_pow(x,r)<<endl;//�I�smy_pow()��� 
  
    return 0;
}
//��Ʃw�q����*
int my_pow(int x,int r)
{   
    int i;
	int sum=1;
	for(i=0;i<r;i++)
 	{
 		sum=sum*x;
    } //�p��x^r���� 
    return sum; 
}
