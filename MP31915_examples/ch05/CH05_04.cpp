#include <iostream>

using namespace std;

int main()
{
	char str[30];                 // �ŧi���׬�30���r���ܼ�
	cout << "�}�C���סG30�A�i������J���סG10" << endl;
	cout << "�п�J���N�r��G";
	cin.getline(str, 10, '\n');    // �ϥ�getline()��ƿ�J�r��A�̦h����10�Ӧr��
	cout << "str�r���ܼƬ��G" << str << endl;
	
	
	return 0;
}
