#include <iostream>

using namespace std;

int main()
{
    struct student
    {
        char name[10];
        int score;
    };
    struct student s1[5] = { {"Justin", 90},
                             {"Momor",  95},
                             {"Becky",  98},
                             {"Bush",   75},
                             {"Snoopy", 80} };// �]�w5�Ӧ�������ϭ� 
    struct student *s2[5];// �ŧi�����c���а}�C 
    int i;
    
    for(i = 0; i < 5; i++)
        s2[i] = &s1[i];//�ƻs���c���� 
     
    for(i = 0; i < 5; i++)
    {
        cout<<"�m�W�G"<<s2[i]->name<<'\t';
        cout<<"���Z�G"<<s2[i]->score<<endl;
    }//��ܵ��c���� 

    
    return 0;
}
