#include<iostream>

using namespace std;
//�w�q�U�إ����W��
#define PI 3.14159
#define SHOW "�ꭱ�n=" 
#define  RESULT r*r*PI

int main()
{	
    int r;
	
    cout<<"�п�J��b�|:";
    cin>>r;
    cout<<SHOW<<RESULT<<endl;
    #undef PI //�Ѱ������w�q
     
    return 0;	
}
