#include <iostream>

using namespace std;

int main()
{
	char Str_1[]={ 'W', 'o', 'r', 'l', 'd','!' }; //�w�q�r���}�C Str_1[] 
	char Str_2[]="World!";                        //�w�q�r���}�C Str_2[] 
	
    cout<<"Str_1 ���Ϊ��O����Ŷ�:"<<sizeof(Str_1)<<endl;  //��� Str_1 ���Ϊ��O����Ŷ� 
	cout<<"�r���}�C Str_1 �����e:"<<Str_1<<endl;  // ��� Str_1 �����e                                          
	cout<<"Str_2 ���Ϊ��O����Ŷ�:"<<sizeof(Str_2)<<endl;  //��� Str_2 ���Ϊ��O����Ŷ� 
	cout<<"�r���}�C Str_2 �����e:"<<Str_2<<endl;  //��� Str_2 �����e 
	                                         
    
    return 0;
}
