#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str1="Years go by will I still be waiting";//�r��ŧi 
    string str2="For somebody else to understand";//�r��ŧi
    
    cout<<"str1="<<str1<<endl;
    cout<<"str2="<<str2<<endl;//�M��r�� 
    
    cout<<"--------------------------------------"<<endl;
    cout<<"�bstr1������"<<str1.find("will")<<"�Ӧ�m���will�r��"<<endl;
    cout<<"�bstr2������"<<str2.find("else")<<"�Ӧ�m���else�r��"<<endl; 
    cout<<"--------------------------------------"<<endl;
    
    
    return 0;

}
