#include <iostream>

using namespace std;

int main()
{
    char ch='A'; //�������w'A'�r�� 
    cout<<"ch= "<<ch<<endl;
    ch=65; //10��ƭȪ�� A�r�� 
    cout<<"ch= "<<ch<<endl;
    ch='\x41';   //16�i��ASCII�X��� A�r�� 
    cout<<"ch= "<<ch<<endl;
    ch=0x41;    //16�i��ƭȪ�� A�r�� 
    cout<<"ch= "<<ch<<endl;
    ch='\101';   //8�i��ASCII�X��� A�r�� 
    cout<<"ch= "<<ch<<endl;
    ch=0101;    //8�i��ƭȪ�� A�r�� 	  
    cout<<"ch= "<<ch<<endl;
    
    
    return 0;
}
		 
		 
