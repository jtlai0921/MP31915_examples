#include <iostream>                                 
#include <fstream>                                    //�ޤJ<fstream>���Y��
using namespace std;                                  //���w�ϥ�C++ Standard Library

int main()
{
    ofstream fileOutput;                              //�s�ذ�Ū�ɮת���
	
    fileOutput.open("fileOutput.txt", ios::app);      //�H���[�Ҧ��}��fileOutput.txt
    if(!fileOutput.is_open())                         //�ˬd�ɮ׬O�_�}��
    {
         cout<<"�ɮ׶}�ҿ��~�I"<<endl;                //�}�ɦ��~�A��X���~�T��
         return 1;                                    //�����`�����{��
    }
    else
    {
         fileOutput<<"�@�o�����@�o��,�o�����R�o����"<<endl;    //��X�r����ɮ�
    }
    fileOutput.close();                               //�����ɮ�
    
    
    return 0;                                         //���`�����{��
}
