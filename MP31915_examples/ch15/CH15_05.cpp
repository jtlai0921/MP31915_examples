#include <iostream>  //�ޤJ<iostream>���Y��
#include <fstream>   //�ޤJ<fstream>���Y��

using namespace std; //���w�ϥ�C++ Standard Library

int main()
{   
    ifstream fileInput; //�s�ذ�Ū�ɮת���
    char str[8];        //�s��str�r���}�C
    int num;            //�s��int���
    fileInput.open("text2.txt", ios::binary | ios::in); //�H��Ū�G�i��Ҧ��}��fileOutput.txt
    if(!fileInput.is_open())   //�ˬd�ɮ׬O�_�}��
    {
        cout<<"�ɮ׶}�ҿ��~�I"<<endl; //�}�ɦ��~�A��X���~�T��
        return 1;  //�����`�����{��
    }
    else
    {
        cout<<"�m�W    �q��"<<endl;
        cout<<"==================="<<endl;
        fileInput.read(str, sizeof(str));     //Ū���Ĥ@�ժ��m�W
        fileInput.read((char*) &num, sizeof(int)); //Ū���Ĥ@�ժ��q��
        while(!fileInput.eof())           //�ˬd�O�_Ū���ɧ�
        {
            cout<<str<<"    "<<num<<endl;    //��X��Ʀܿù��W
            fileInput.read(str, sizeof(str));  //Ū���U�@�ժ��m�W
            fileInput.read((char*) &num, sizeof(int)); //Ū���U�@�ժ��q��
        }
    }
    fileInput.close(); //�����ɮ�
    
    
    return 0;          //���`�����{��
}
