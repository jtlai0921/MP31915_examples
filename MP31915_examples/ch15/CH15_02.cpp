#include <iostream>  //�ޤJ<iotream>���Y��
#include <fstream>   //�ޤJ<fstream>���Y��
using namespace std; //���w�ϥ�C++ Standard Library

int main()
{
    ofstream fileOutput;  //�s�ذ�Ū�ɮת���
	fileOutput.open("fileOutput.txt",ios::out);  //�H��Ū�Ҧ��}��fileOutput.txt
    
	if(!fileOutput.is_open())                    //�ˬd�ɮ׬O�_�}��
    {
        cout<<"�ɮ׶}�ҿ��~�I"<<endl;            //�}�ɦ��~�A��X���~�T��
        return 1;                                //�����`�����{��
    }
    else
    {
        fileOutput<<"����Ƥ��鲦"<<endl;
        fileOutput<<"�d�o�C�s�b���ȨS��N"<<endl;//��X�r����ɮ�
    }
    
    fileOutput.close();                          //�����ɮ�
    
    
    return 0;                                    //���`�����{��
}
