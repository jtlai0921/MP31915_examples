#include <iostream>

using namespace std;

int main()
{
    struct grade
   {
        struct
        {
            const char *name;
            int height;
            int weight;
        } std[3];// �ٲ��F���h���c���W�٩w�q�A�Ӫ����ϥ�grade���c�өw�q
        const char *teacher;
   }g1={"John",174,65,"Justin",168,56,"Bush",177,80,"Mary"};
    //�]�w���c�ܼ�g1����l�� 

    int i;
  
    cout<<"�Ѯv:"<<g1.teacher<<endl; 
    cout<<"-----------------------------------------------"<<endl;
    cout<<"�ǥͩm�W,����,�魫�p�U:"<<endl; 
   
    for (i=0;i<3;i++)
        cout<<g1.std[i].name<<" "<<g1.std[i].height<<" "<<g1.std[i].weight<<endl;
    //�_�����c�s���P�@�뵲�c�@�ˡA�h�@�h���c�N�n�h�@�Ӥp���I.
    
    return 0;
 }
