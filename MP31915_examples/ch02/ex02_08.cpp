#include <iostream>

using namespace std;

int main()
{
  char ch,c1='B',c2='+';
  
  cout<<"c1="<<c1<<endl;//B�r����ASCII�X�O66 
  cout<<"c2="<<c2<<endl;//+�r����ASCII�X�O43
  ch=c1+c2;//�[�k�B��᪺ASCII�X�O109 
  cout<<"c1+c2="<<ch<<endl;//�C�XASCII�X109���r���O m�r�� 
  
  ch=c1*3+c2*4;//�[�k�B��᪺ASCII�X�O370
  cout<<"c1*3+c2*4="<<ch<<endl; //�C�L�X�r�� r �r��
  
  return 0;
}
		 
		 
