#include<fstream> //�B�z�ɮ׿�X�J�����Y��
#include<iostream>
using namespace std;

int main()
{
    ifstream fin;//�إ߰�Ū�ɮת��� 
    fin.open("testFile.txt",ios::in);//�}�Ұ�Ū�ɮת���ö}��testFile.txt�� 
    if(!fin.is_open())
        cout<<"�ɮ׵L�k�}��!!"<<endl;
    else
    {
        cout<<"�ɮ׶}��..."<<endl;
        cout<<"������Ƭy..."<<endl; 
        fin.close();///�I�s���close()�H�����ɮ�
    }
    
    
    return 0;
}
