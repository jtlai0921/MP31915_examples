#include<iostream>
using namespace std;
	
int main()
{
    cout<<"==²�檺�ҥ~�d��==\n";
    //�ϥ�try...catch�Ӯ����ҥ~
    try
    {
        int n1;
        cout<<"�п�J����:";
        cin>>n1; //��J���ƭ�
        if (n1==0) 
            throw 1;  //�Y���Ƭ�0�ɡA�h��X�@�Өҥ~
        cout<<"�S���ɮ���ҥ~"<<endl; //������ҥ~�ɡA����ä��|����		
    }
    catch(int i)  //���ŦX��catch�϶����O
    {
        cout<<"�����찣�Ƭ�0���ҥ~"<<endl;
    }
    cout<<"�����{��������"<<endl; //���ܤw�ܵ{���X������
		
		
    return 0;
}
