#include<iostream>

using namespace std;

int main()
{
	int a=13,b=57;
	
	//�Х�a�Pb���G�i���ܪk 
	cout<<"a=13,�G�i�쬰00001101"<<endl;
	cout<<"b=57,�G�i�쬰00111001"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"�줸�B��l�B��d��"<<endl; 
	cout<<"----------------------------------------"<<endl;
	//�줸�B��l�B�����Y
	cout<<"13 & 57 ="<<(a&b)<<endl;//&�줸�B��l
	cout<<"13 | 57 ="<<(a|b)<<endl;//|�줸�B��l
    cout<<"13 ^ 57 ="<<(a^b)<<endl;//^�줸�B��l
    cout<<"~57 ="<<(~b)<<endl;//~�줸�B��l
	cout<<"13>>2 ="<<(a>>2)<<endl;// >>�줸�B��l
	cout<<"13<<2 ="<<(a<<2)<<endl;//<<�줸�B��l
	
     
    return 0;
 }
