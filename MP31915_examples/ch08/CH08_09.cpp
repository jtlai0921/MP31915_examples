#include<iostream>

using namespace std;

//�椺��Ʃw�q 
inline int fun1(int a, int b,int c)
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cout<<"�п�J�T�ӼƦr:";
	cin>>a>>b>>c;

 
 	if(fun1(a,b,c)%2==0)	//�I�s�椺��� 
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"������"<<endl; 
 	else
  		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"���_��"<<endl; 
    
    
    return 0;
}
