#include <iostream>

using namespace std;

template <class arrayType,int array_size>//�ŧi�D���A�Ѽƨ�Ƽ˪�
void showArray(arrayType (&array)[array_size])//���ݥ[��ƫ��A 
{
    int i;
    cout<<"template �D���A�Ѽ�:"<<endl;
    cout<<"array_size="<<array_size<<endl<<endl; 
    for(i=0;i<array_size;i++)
    {
        cout<<"array["<<i<<"]="<<array[i]<<endl;//�C�L�}�C�������e 
    }
    cout<<endl;
}
int main()
{   
    int a[]={20,23,56,77,88};//�ŧi��ư}�C 
    showArray(a);//�I�s�˪O����� 
    
    
    return 0;
}

