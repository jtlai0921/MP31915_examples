#include <iostream>

using namespace std;

int main()
{
    struct student
    {
        char name[20];
        int score;
        struct student *next;
    }; //�w�q student �`�I 
    struct student s[3]; //�ŧi���c�}�C 
    int i;
    struct student *ptr;    // �]�wŪ���X�� 

    //�]�w���c�����P��C���U�@�Ӧ�} 
    for(i = 0; i < 3; i++)
    {
        cout<<"�m�W�G";
        cin>>s[i].name; //��J�ǥͩm�W 
        cout<<"���Z�G";
        cin>>s[i].score;//��J�ǥͦ��Z 
        if (i != 2)
            s[i].next = &s[i+1];//���V�U�@�Ӹ`�I 
        else
            s[i].next = NULL;//�̫�@�Ӹ`�I���V NULL 
    }
    ptr = &s[0];//ptr���V��C���Ĥ@�Ӹ`�I 
    cout<<"---------------------------------"<<endl;
    while(ptr != NULL)
    {
        cout<<"�m�W�G"<<ptr->name<<"���Z�G"<<ptr->score<<endl;
        ptr = ptr->next;//���X�U�@�Ӹ`�I 
    }//���X��C����ܤ��e 
    
    
    return 0;
}
