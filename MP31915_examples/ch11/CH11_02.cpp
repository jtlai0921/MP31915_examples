#include <iostream>
#include <cstdlib>
using namespace std;
	 
class Student           //�ŧi���O
{
    private:                //�p�θ�Ʀ���
        int StuID;          
	public:
		void input_data();    //�ŧi������ƪ��쫬
		void show_data();	
};
void Student::input_data()  //��@input_data���
{
    cout << "�п�J�z�����Z�G" ;
    cin >> StuID;
}
void Student::show_data()   //��@show_data���
{
    cout << "���Z�O�G" << StuID << endl; 
}
int main()
{
    Student stu1;
    stu1.input_data();
    stu1.show_data();
	   
    return 0;
}
