#include<iostream>

using namespace std;

int main()
{
    int number;
    //�P�_�Ʀr�����ƻP�_�� 
    cout<<"�п�J�Ʀr: ";
    cin>>number;//��J�Ʀr
  
    //����B��l���ϥ� 
    (number%2==0)? cout<<"��J�Ʀr������"<<endl
                  :cout<<"��J�Ʀr���_��"<<endl;
   
    return 0;
}
