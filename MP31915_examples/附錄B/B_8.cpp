#include <iostream>  // ��X�J�����Y��

using namespace std;

const int MAX_STR = 80;		// �]�w�r����׳̪���80�Ӧr��

int main()
{
    char	name[MAX_STR];
    int		age = 0;
    int		index = 0;
    cout << "�п�J�z���m�W : ";
    cin.getline( name, MAX_STR, '\n' );	// �ϥ�getline(str, size, delimiter)���
    while(1)
    {
        cout << "�п�J�z���~�� : ";
        cin.unsetf(ios::skipws);// �����L�ťզr��,�N�������J���r��,
				                // �]�������O�Ʀr�ҥH�|�y�����~
        cin >> age;			    // �N��J�s�J���A����ƪ��ܼƤ�
        if( age < 0 )
        {
            cout << "�z��J���~�֤p��0" << endl;
            cin.clear( ios::failbit );	// �]�wfailbit���~���A�줸
        }
        if( cin.good() )		// �Y�O��J���T
        {
            cin.ignore( MAX_STR, '\n' );	// �M���Ȧs��
            break;						// ���X�j��
        }// ��J���~
        cin.clear();						// ���M�����~�줸,
        cout << "��J���~!" << endl;		// ��X���~�T��
        cin.ignore( MAX_STR, '\n');			// �M���Ȧs�Ϥ����r��
    }
    cout << endl;
    cout << "�z���m�W�O : " << name << endl;
    cout << "�z���~�֬O : " << age << endl;
    cout << endl;
           
           
    return 0;
}
