#include <iostream>	

using namespace std;	

int main()
{
	char select;
	 
	cout<<"(A) �q�j�Q"<<endl;
	cout<<"(B) �ھ�"<<endl;
	cout<<"(C) �饻"<<endl;
	cout<<"�п�J�z�n�ȹC���a�I�G";
	cin>>select;	                       //��J�r���æs�J�ܼ�
    
	switch(select)
	{
	case 'a':  
	case 'A':                              //�p�Gselect����'A'��'a'
		cout<<"���q�j�Q5��C $35000"<<endl;  //�h��ܤ�r
		break;                             //���Xswitch
	case 'b': 
	case 'B':                              //�p�Gselect����'B'��'b'
		cout<<"���ھ�7��C $40000"<<endl;  //�h��ܤ�r*/
		break;                             //���Xswitch
	case 'c':  
	case 'C':                              //�p�Gselect����'C'��'c'
		cout<<"���饻5��C $25000"<<endl;  //�h��ܤ�r
		break;                             //���Xswitch
	default:                               //�p�Gselect������ABC��abc����@�Ӧr�� 
		cout<<"�ﶵ���~"<<endl;                        
	}
	
    
    return 0;	
}
