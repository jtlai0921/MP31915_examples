#include <iostream>

using namespace std;

int main()
{
	int score[10];           // �ŧi���׬�10���}�C
	int i,sum=0,below=0;
	double avg=0.0;

	// �Q�ΰj��]�w�}�C�������ȡA�íp���`��
	for (i=0;i<10;i++)
	{
		cout << "�п�J��" << i+1 << "��ǥͪ����Z�G";
		cin >> score[i];    // �]�w�}�C��������
		sum += score[i];    // �p���`��
	}

	avg=(double)sum/(double)10;  // �p�⥭������

	// �p��C�󥭧����ƪ��H��
	for (i=0;i<10;i++)
	{
		if (score[i] < avg)
			below++;            // �N�H�ƥ[1
	}
	cout << "�`���Z�G" << sum << endl;
	cout << "�������ơG" << avg << endl;
	cout << "�� " << below << "�H���Z�C�󥭧�����" << endl;
	
	
	return 0;
	
}
