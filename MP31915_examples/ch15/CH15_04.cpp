#include <iostream>  //�ޤJ<iostream>���Y��
#include <fstream>   //�ޤJ<fstream>���Y��

using namespace std; //���w�ϥ�C++ Standard Library

int main()
{   
    ofstream fileOutput;   //�s�ذ߼g�ɮת���
    char str1[8]="�J�L��"; //�s��str1�r��
	char str2[8]="�d���"; //�s��str2�r��
	char str3[8]="�j����"; //�s��str3�r��
    
    int num1=9134325;      //�s��num1���
    int num2=9876543;      //�s��num2���
    int num3=7357900;      //�s��num3���
    fileOutput.open("text2.txt", ios::binary | ios::out); //�H�߼g�G�i��Ҧ��}��fileOutput.txt
    
	if(!fileOutput.is_open())  //�ˬd�ɮ׬O�_�}��
    {
        cout<<"�ɮ׶}�ҿ��~�I"<<endl;  //�}�ɦ��~�A��X���~�T��
        return 1;                      //�����`�����{��
    }
    else
    {
        fileOutput.write(str1, sizeof(str1)); //�g�Jstr1
        fileOutput.write((char*) &num1, sizeof(int));  //�g�Jnum1
        fileOutput.write(str2, sizeof(str2));  //�g�Jstr2
        fileOutput.write((char*) &num2, sizeof(int));  //�g�Jnum2
        fileOutput.write(str3, sizeof(str3));      //�g�Jstr3
        fileOutput.write((char*) &num3, sizeof(int));  //�g�Jnum3
    }
    fileOutput.close();   //�����ɮ�
    
    
    return 0;  //���`�����{��
}
