#include <iostream>

using namespace std;

class MyClass //�w�q�@��Class�A�W�٬�MyClass
{
public:       //�s���h�Ŭ�public(���})
    MyClass()
    {
        cout<<"�L����ѼƶǤJ���غc�l"<<endl;    
    }
    
    MyClass(int a)
    {
        cout<<"�ǤJ�@�ӰѼƭȪ��غc�l"<<endl;
        cout<<"a="<<a<<endl;   
    }
    
    MyClass(int a,int b)
    {
        cout<<"�ǤJ�G�ӰѼƭȪ��غc�l\n"; 
        cout<<"a="<<a<<" b="<<b<<endl;   
    }    

private:
    // MyClass(){} �Y���Ʃw�q�A�sĶ�ɱN���Ϳ��~
};

int main()
{
    int a,b;
    //�H���Ы��A�����O���� 
    a=100,b=88;
    MyClass myClass1;
    cout<<"-------------------------------------"<<endl;
    MyClass MyClass2(a);
    cout<<"-------------------------------------"<<endl;
    MyClass MyClass3(a,b);
    cout<<"-------------------------------------"<<endl;
    
    return 0; 
}
