#include<iostream>
	
using namespace std;
	
// �ŧi���Ostclass
class stclass
{
	public:
		stclass() // �غc�l
		{
			cout << "�I�sstclass���O���غc�l" << endl;
		}
		~stclass() // �Ѻc�l
		{
			cout << "�I�sstclass���O���Ѻc�l" << endl;
		}
};
	// �ŧi���Oscore
class score
{
	public:
		score() // �غc�l
		{
			cout << "�I�sscore���O���غc�l" << endl;
		}
		~score() // �Ѻc�l
		{
			cout << "�I�sscore���O���Ѻc�l" << endl;
		}
};
	// �ŧi���Ostudent�A�åHpublic���O���O�����Ostclass��score�~��
class student :public stclass,public score
{
	public:
		student()  // �غc�l
		{
			cout << "�I�s���Ostudent���غc�l" << endl;
		}
		~student() // �Ѻc�l
		{
			cout << "�I�s���Ostudent���Ѻc�l" << endl;
		}
};
// �D�禡
void call()
{
    student st1; // �ŧi����st1
}  
int  main()
{
    call();	
	
    return 0;	
}
