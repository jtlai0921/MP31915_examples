#include <iostream>

using namespace std;

void setX20(void);  //�]�w�����ܼƪ��Ȭ� 20 
void setX30(void);  //�]�w�����ܼƪ��Ȭ� 30 
int x=10;//�ŧi x �������ܼ� 

int main()
{
    
    cout<<"x = "<<x<<endl;
    setX20();
    cout<<"x = "<<x<<endl;
    setX30();
    cout<<"x = "<<x<<endl;
    
    
    return 0;
}
void setX20(void)
{
    x = 20;
}

void setX30(void)
{
    x = 30;
}
