#include <iostream>

using namespace std;

class Student                  //�ŧi���O
{
private:                       //�p�θ�Ʀ���
	int StuID;          
	float Score_E,Score_M,Score_T,Score_A;
public:                        //���θ�Ʀ���
    Student();                  //�ŧi�w�]�غc�l
	Student(int id,float E,float M);  //�ŧi�T�ӰѼƪ��غc�l
	void show_data();	          //�ŧi������ƪ��쫬
};
Student::Student()               //�غc�l �]�w��Ʀ�������l�ȩ�Student���O���~
{
	StuID = 920101;
	Score_E = 60;
    Score_M = 80;
}
Student::Student(int id,float E,float M)         //�ϥΰѼƳ]�w��l��
{
	StuID=id;              //���wStuID=�Ѽ�id
	Score_E=E;             //���wScore_E=�Ѽ�E
	Score_M=M;            //���wScore_M=�Ѽ�M
}
void Student::show_data()          //��@show_data���
{
	Score_T = Score_E + Score_M;
	Score_A = (Score_E + Score_M)/2;
	cout << "===================" << endl;
	cout << "�ǥ;Ǹ��G" << StuID << "" << endl; 
	cout << "�`���O" << Score_T << "��,�����O" << Score_A << "��" << endl;
}
int main()
{
	Student stud;               //�ŧiStudent���O������A���ɷ|�I�s�L�Ѽƪ��غc�l
	stud.show_data();           //�I�sshow_data�������
	Student stud1(920102,30,40);    //�ŧiStudent���O������A���ɷ|�I�s�T�ӰѼƪ��غc�l
	stud1.show_data();           //�I�sshow_data�������
	
	
	return 0;
}
