#include<iostream>

using namespace std;

#define RESULT(r1,r2,h) (r1+r2)*h/2.0 //�w�q�������
int main()
{	
    int r1,r2,h;
    cout<<"-----------------------------------"<<endl;
    //��J��Ϊ��U�ƭ�
    cout<<"�W��=";
    cin>>r1;
    cout<<"�U��=";
    cin>>r2;
    cout<<"��=";
    cin>>h;
    //�Q�Υ������
    cout<<"��έ��n="<<RESULT(r1,r2,h)<<endl;
    cout<<"�C�ӰѼ�+2�᪺";
    cout<<"��έ��n="<<RESULT(r1+2,r2+2,h+2)<<endl;
    
    
    return 0;	
}
