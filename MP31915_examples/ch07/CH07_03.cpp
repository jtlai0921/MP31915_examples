#include<iostream>
using namespace std;
void fun(int, int);/*��ƭ쫬�ŧi*/
 

int main()
{		
    int a,b; 	
    a=10;    
    b=15;    
    //��X�D�{������a,b��
    cout<<"�D��Ƥ�:a="<<a<<" b="<<b<<endl;	
    cout<<"a����}:"<<&a<<" b����}:"<<&b<<endl;	
    //�I�s���   
    fun(a,b);    
    cout<<"-----------------------------------------"<<endl; 
    //��X�I�s��ƫ᪺a,b��
    cout<<"�I�s��ƫ�:a="<<a<<" b="<<b<<endl;  
    cout<<"a����}:"<<&a<<" b����}:"<<&b<<endl;		
      
    return 0;	
}
   
void fun(int a, int b)
{ 	
    cout<<"-----------------------------------------"<<endl; 
    cout<<"fun��Ƥ�:a="<<a<<" b="<<b<<endl;  
    cout<<"a����}:"<<&a<<" b����}:"<<&b<<endl;   	
    a=20;	
    b=30;//���]��Ƥ���a,b��	
    cout<<"��Ƥ��ܧ�ƭȫ�:a="<<a<<" b="<<b<<endl; 
}
