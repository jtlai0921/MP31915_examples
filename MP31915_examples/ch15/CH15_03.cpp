#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    /*Ū��*/
    string str;
    char data[100];
    char oneChar;
    ifstream fin;
    fin.open("text1.txt");//�ϥΪ���fin���禡open()�}���ɮ׸�Ƭy�A�ɦW��text1.txt
    
	for(int i=0;i<12;i++)
    {
        //Ū���@�Ӧr��
        fin.get(oneChar);//�ϥ�get�禡Ū���r��
        cout<<oneChar; 
    }
    //Ū���@�����
    fin.getline(data,sizeof(data));//�ϥ�getline()�禡Ū����C���
    cout<<data<<endl<<endl;
    //�ϥ�">>"Ū�����
    fin>>str;
    while(!fin.eof())//�Q��eof()�ӧP�_�O�_Ū���ɧ�
    {
        cout<<str<<endl;
        fin>>str;
    } 
    fin.close();
    
    
    return 0;
}
