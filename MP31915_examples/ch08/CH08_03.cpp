#include <iostream>

using namespace std;

int add(int,int);//��ƫŧi 
int sub(int,int);//��ƫŧi
int mul(int,int);//��ƫŧi
int (*pfunc[])(int,int)={add,sub,mul};// ��ƫ��а}�C�ŧi�ɤ]�i�P�ɫ������ 

int main()
{
    char c[]={'+','-','*'};
    int x,y,i;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    cout<<"--------------------------------------------"<<endl; 
    for(i=0;i<3;i++)
    {
        cout<<x<<c[i]<<y<<"="<<pfunc[i](x,y)<<endl;
        //�z�Lfor�j��覡�����ƫ��Щҫ��V����Ʀ�}
    }  
    cout<<endl;                   
    cout<<"--------------------------------------------"<<endl;                   
    
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
