#include<iostream>
#include<string>//�ޤJ�r����Y��

using namespace std;

int main()
{
    char ch[]=", "; 
    string firstname;//�ŧi�r�����O 
    string lastname;//�ŧi�r�����O 
    string input1("�п�J�m��:");
    string input2="�п�J�W�r:";
    
    cout<<input1;
    cin>>lastname;//��J�r�� 
    cout<<input2;
    cin>>firstname;//��J�r�� 
    
    string fullname=firstname+ch+lastname;//�H�B��l�@�r�ꪺ�걵 
	cout<<"�z�����W��:"<<fullname<<endl;
    
    
    return 0;	
 
 }
