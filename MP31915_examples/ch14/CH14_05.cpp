#include<iostream>
	
using namespace std;
	
// �ŧi���Ostclass
class stclass
{
	public:
		stclass() // �غc�l
		{
			cout << "�I�s��¦���O���غc�l" << endl;
		}
		~stclass() // �Ѻc�l
		{
			cout << "�I�s��¦���O���Ѻc�l" << endl;
		}
};
	// �ŧi���Ostudent�A�åHpublic���O�����Ostclass�~��
class student :public stclass
{
	public:
		student()  // �غc�l
		{
			cout << "�I�s�l�����O���غc�l" << endl;
		}
		~student() // �Ѻc�l
		{
   		    cout << "�I�s�l�����O���Ѻc�l" << endl;
		}
};
void call()
{
    student st1;
}
// �D�禡
int main()
{
		
    call();//�I�s�ŧi����st1�����	
		
    return 0;
}
