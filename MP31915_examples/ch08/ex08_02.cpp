#include <iostream>

using namespace std;

void foo(void);  //�L�N�q���禡�A�Ψ���ܰϰ��ܼƭ� 

int x = 10;//�ŧi�����ܼ� x 

int main(void)
{
    cout<<"�����ܼ� x = "<<x<<endl;
    foo();
    cout<<"�����ܼ� x = "<<x<<endl;

    
    return 0;
}

void foo(void)
{
    int x = 20;//�ŧi�ϰ��ܼ� x 

    printf( "�ϰ��ܼ� x = %d\n", x );
}
