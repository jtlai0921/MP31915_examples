#include<iostream>
	
using namespace std;
	
int main()
{
    int num;  // �ŧi�@�Ӿ���ܼ�num
    try  // �̥~�h��try...catch �϶�
    {
        try  //�̤��h��try...catch�϶�
        {
            cout<<"��J�@�ӭ�:";
            cin>>num;
            // �P�_�ܼƭ�num�O�_�j��0�B�p��8
            if ((num > 0) && (num < 8))
            {
                throw 1; // ���ܼ�num�Ȥj��0�B�p��8�ɡA�h��X�@�ӫ��O����ƪ��ҥ~
            }
                // �P�_�ܼƭ�num������M�O�_�j��100
			if (num*num>100)
            {
                throw "����M�j��100"; // ���ܼ�num������X�j��100�ɡA��X�@�ӫ��O���r�ꪺ�ҥ~
            }
        }
        catch(int ex1)  // �������O����ƪ��ҥ~
		{
            cout<<"����̤��h��catch�϶�"<<endl;
		}
	}
	catch(const char *str)  // �������O���r�ꪺ�ҥ~
	{
        cout<<"����̥~�h��catch�϶��B"<<str<<endl;
	}
    cout<<"�{���N�n��������"<<endl;
		
		
    return 0;
}
