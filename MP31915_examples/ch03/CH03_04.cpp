#include<iostream>

using namespace std;

int main()
{
	int a,b;
	
    a=5;
    cout<<"a="<<a;
	b=++a;
	cout<<"�e�m�����W�B��l:b=++a �� a="<<a<<",b="<<b<<endl;
	//�e�m�����W�B��l
	cout<<"--------------------------------------------"<<endl;
    a=5;
    cout<<"a="<<a;
	b=a++;
	cout<<"��m�����W�B��l:b=a++ �� a="<<a<<",b="<<b<<endl;
    //��m�����W�B��l
    cout<<"--------------------------------------------"<<endl;
    a=5;
    cout<<"a="<<a;
	b=--a;
	cout<<"�e�m������B��l:b=--a �� a="<<a<<",b="<<b<<endl;
	//�e�m������B��l
    cout<<"--------------------------------------------"<<endl;
    a=5;
    cout<<"a="<<a;
	b=a--;
	cout<<"��m������B��l:b=a-- �� a="<<a<<",b="<<b<<endl;
	//��m������B��l
    cout<<"--------------------------------------------"<<endl;
    
    
    return 0;
 }
