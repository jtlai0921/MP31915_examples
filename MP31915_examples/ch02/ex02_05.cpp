#include<iostream>

using namespace std;

int main()
{	
	int a,b;
    a=b=5;//�ŧia,b����
 	//�Q�βV�X���w�B��l,�p��U�C�⦡
     cout<<"a="<<a<<" b="<<b<<endl;
     
     a+=5; 
 	 b*=6;
 	 cout<<"a+=5,b*=6 "<<endl;
 	 cout<<"a="<<a<<" b="<<b<<endl;
     
  	 //�V�X���w�B��l���h�h�B�� 
  	 a+=a+=b+=b%=4;
     cout<<"a+=a+=b+=b%%=4 "<<endl;
     cout<<"a="<<a<<" b="<<b<<endl;
     
     
     return 0;
} 
