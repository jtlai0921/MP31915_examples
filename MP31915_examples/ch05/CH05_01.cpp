#include <iostream>

using namespace std;

int main()
{
	int score[8]={ 7,22,36 }; // �ŧi���׬�8����ư}�C
	int Temp[]={1, 2, 3, 4, 5};
	int i;

	// �Q�ΰj��C�L�}�C��������
	for (i=0;i<8;i++)
	{
		cout <<"score["<<i<<"]="<<score[i]<<endl;
	}

	cout<<"Temp�}�C�j�p="<<sizeof(Temp)/sizeof(Temp[0])<<endl;//�p�⤸���}�C�Ӽ� 
	
    
	return 0;
	
}
