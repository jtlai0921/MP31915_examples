#include<iostream>

using namespace std;

int main()
{ 
    int n,sum=1,i=1; //�ŧi�ܼƻP�]�w�_�l��
    cout<<"�п�J��ĴX���h:";
    cin>>n; //��Jn�� 
    
    while(i<=n)
    {
        sum=i*sum;//����j�骺����
        cout<<endl<<i<<"!="<<sum;
        i++; // ����j��@���h�[�@ 
    }
    
    cout<<endl;
    
    
    return 0; 
} 
