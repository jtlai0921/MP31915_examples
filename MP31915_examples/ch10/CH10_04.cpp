#include <iostream>

using namespace std;

int main()
{
    struct student
    {
        char name[10];
        int  score[3];
    }; //�ŧistudent ���c 
    struct student class1[5] = { {"Justin", 90,76,54},
                                 {"momor",  95,88,54},
                                 {"Becky",  98,66,90},
                                 {"Bush",   75,54,100},
                                 {"Snoopy", 80,88,97} };//�]�w5�Ӧ�������ϭ� 
    int i;
    
    for(i = 0; i < 5; i++)
    {
        cout<<"�m�W:"<<class1[i].name<<'\t'<<"���Z�G"<<class1[i].score[0]<<'\t'
            <<class1[i].score[1]<<'\t'<<class1[i].score[2]<<endl;
        //�C�L�P�s��student���c�}�C���������� 
        cout<<"-----------------------------------------------"<<endl;
    }
           
    return 0;
}
