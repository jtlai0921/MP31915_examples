#include <iostream>

using namespace std;

int Add_Fun(int a, int b )// �ѼƬ�a,b,�^�ǭȬ���� 
{
return a+b; //�Ǧ^���ƩM 
} //��Ʃw�q�P�ŧi 

int main()
{
    int x;
    int y;

    cout<<"�п�J��� x=:";
    cin>>x;
    cout<<"�п�J��� y=:";
    cin>>y;
    cout<<"�ۥ[�B�⵲�G�G"<<Add_Fun(x,y)<<endl;
	//�C�LAdd_Fun��ƪ��^�ǭ�

    
    return 0;
}
