#include <iostream>   
                          
using namespace std;

int main()
{
    int *ptr_1=new int; // �w�q *ptr_1 ���СA�å� new �t�m�O����
    int *ptr_2=new int; // �w�q *ptr_2 ���СA�å� new �t�m�O����

    cout << "��J�Q�[��:";
    cin >> *ptr_1;   // *ptr_1 �x�s�Q�[��
    cout << "��J�[��  :";
    cin >> *ptr_2;   // *ptr_2 �x�s�[��

    cout<<"---------------------------------------"<<endl;
    cout << *ptr_1 << " + " << *ptr_2 << " = ";
    cout << *ptr_1+*ptr_2;  // �p���`�M
	 
    cout << endl;           // ����

    delete ptr_1;           // ����t�m�� ptr_1 ���O����Ŷ�
    delete ptr_2;           // ����t�m�� ptr_2 ���O����Ŷ�
	 
	 
    return 0;
}
