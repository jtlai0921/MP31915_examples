#include <iostream>

using namespace std;

int main()
{
    struct student
    {
        char name[10];
        int score;
    };//�ŧistudent ���c 
    struct student class1[5] = { {"Justin", 90},
                                 {"momor",  95},
                                 {"Becky",  98},
                                 {"Bush",   75},
                                 {"Snoopy", 80} };//�]�w5�Ӧ�������ϭ� 
    int i;
    cout<<"----------�C�Lstudent���c�}�C������------------"<<endl;
    for(i = 0; i < 5; i++)
        cout<<"�m�W�G"<<class1[i].name<<"���Z�G"<<class1[i].score<<endl;
    //�C�Lstudent���c�}�C���������� 
    cout<<"---------�ϥΫ��б`�ƨӦs��student���c����---------"<<endl;
    for(i = 0; i < 5; i++)	   
        cout<<"�m�W�G"<<(class1+i)->name<<"���Z�G"<<(class1+i)->score<<endl;
    //�i�H�ϥΫ��Ъ��[���Ӧs��student���c����
    
    
    return 0;
}
