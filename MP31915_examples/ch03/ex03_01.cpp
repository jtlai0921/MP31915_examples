#include <iostream>


using namespace std;

int main()
{
	int A,B,C;
	A=5,B=8,C=10;         // �]�w�ܼƪ�l��
 	cout << "�p��e�G" << endl<<"A="
		 << A<<",B="<<B<<",C="
         <<C<<endl;
	cout << endl;

	A=B++*(C-A)/(B-A); // �̷Ө�w�]���u�����ǨӶi��p��

    cout <<"����A=B++*(C-A)/(B-A)��G"<<endl;
    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    cout<<"C="<<C<<endl;
    
    
    return 0;
}
