#include <iostream>

using namespace std;

int main()
{
	int score[5][4];            // �ŧi5*4���G���}�C�A�ΨӦs���Z
	int fail[5]={0};            // �Ũê�l�ƤG���}�C�A�ΨӰO�����ή檺��ؼ�
	int i,j,sum=0,count=0;
	bool flag;                  // �ΨӧP�_�O�_���W�H��
	for(i=0; i < 5; i++)
	{
		flag=false;             // ��l�ƻ��W�H�ƪ��P�_�}��
		cout << "�п�JNo." << i+1 << "����B�^�B�ơB�۵M���Z�G";
		for (j=0; j < 4; j++)
		{
			cin >> score[i][j];       // ��J�U�즨�Z
			sum += score[i][j];       // �p���`��
			if (score[i][j] < 60)     
			{
				fail[i] += 1;         // ���W���ή檺��ؼ�
				if (flag == false)
				{
					count++;          // ���W���ή�H��
					flag=true;        // �ܧ�P�_�}��
				}
			}
		}
	}
	cout << endl;
	cout << "���Z�`���Z�G" << sum 
		 << "�A���Z�������ơG" << (float)sum/(5*4) << endl;
	cout << "�@�� " << count << " �H�����ή檺���" << endl;
	// ��X�����ή��ت��ǥͮy���Τ��ή���
	for (i=0; i < 5; i++)
		if (fail[i] != 0)
			cout << "No." << i+1 << "�� " << fail[i] << " �줣�ή�" << endl;
	
	
	return 0;
}
