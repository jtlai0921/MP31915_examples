#include<iostream>
#include<string>

using namespace std;

int main()
{
	//�Nstr1�r��ŧi��5��S�r�� 
 	string str1(5,'S');
	cout<<"str1="<<str1<<endl;
	//�ŧistr2����l�Ȭ�str1���r��� 
	string str2(str1);
	cout<<"str2="<<str2<<endl;
	
	string str="this is a string";
	//�^��str�r�ꪺ��4�r�����15�r���@��str3����l�� 
	string str3(str,4,12);
	cout<<"str3="<<str3<<endl;
	
	
	return 0;
}
