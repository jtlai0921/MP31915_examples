#include<iostream>
	
using namespace std;
	
int main()
{
    int num;  // �ŧi����ܼ�num
    cout<<"��Jnum���ȡG";
    cin>>num; // ��J�ܼ�num����
    try
    {
        // ���p�ܼ�num�Ȥj��10�Ӥp��20�ɡA�N��X�@�Ӿ�ƫ��O���ҥ~
        if ((num > 10) && (num < 20))  
        {
            throw 1;
        }
        // ���p�ܼ�num�Ȥp��10�ɡA�N��X�@�Ӧr�����O���ҥ~
        if (num < 10)
        {
            throw '*';
        }
    }

    catch(...) // �����Ҧ����ҥ~
    {
        cout<<"�ثe�O��catch(...)������ҥ~"<<endl;
    }
		
		
    return 0;
}
