#include <iostream>  // �B�z��X�J�����Y��
#include <iomanip>

using namespace std;
 
int main()
{
    int i, n;// �ϥ�width()���
    cout << "�]�w��X�T�����̤p�e�׬� 3" << endl;
    for( i = 1, n = 0; i < 6; i++)
    {
        n *= 10;
        n += i;
        cout.width(3);
        cout << n << endl;
    }
    cout << endl;
    // �ϥ�fill()���
    cout << "�]�w�ťն�R�r����'@'" << endl;
    for( i = 1, n = 0; i < 6; i++)
    {
        n *= 10;
        n += i;
        cout.width(3);
        cout.fill('@');
        cout << n << endl;
    }
    cout << endl;
    // ���o�B�I�Ʀ줸���w�]��
    cout << "�B�I�ƪ���ƪ��w�]�Ȭ� : " << cout.precision() << endl;	
    cout << endl; // �ϥ�setf()���
    cout << "�ϥ�setf()��ƻP�X��\"scientific\"�]�w�B�I�ƥH��ǰO���榡���"
    << endl;
    cout.setf(ios::scientific);
    cout << 12.3456789 << endl << endl;// �ϥ�setf( flag, field) ���
    cout << "�ϥ�\" setf( ios::fixed, ios::floatfield );\" " << endl
    << "�M����ǰO���榡���,�í��]��fixed point�榡" << endl;	
    cout.setf( ios::fixed, ios::floatfield );
    cout << 12.3456789 << endl;
    cout << endl;
         
         
    return 0;
}
