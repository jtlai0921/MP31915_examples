#include <iostream>

using namespace std;

int add(int,int);
int sub(int,int);
int Math(int,int,int (*pfunc)(int,int));//�㦳�Ѽƨ�ƫ��Ъ���ƭ쫬�ŧi 

int main()
{
    int x,y;
    
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    
    cout<<"-----------------------------------"<<endl; 
    cout<<x<<"+"<<y<<"="<<Math(x,y,add)<<endl;//�I�s add(),�æL�X��� 
    cout<<x<<"-"<<y<<"="<<Math(x,y,sub)<<endl;//�I�s sub(),�æL�X���                                                         
        
    
    return 0;
}
//�㦳�Ѽƨ�ƫ��Ъ���Ʃw�q 
int Math(int a,int b,int (*pfunc)(int,int))
{
    return (*pfunc)(a,b);
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}

