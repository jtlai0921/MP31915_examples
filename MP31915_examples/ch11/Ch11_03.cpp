#include <iostream>

using namespace std;

class Student        //�ŧi���O	
{
    private:     //�p�θ�Ʀ���
        int StuID;          
        float English,Math,Total,Average;
	public:      //���Ψ�Ʀ���
  
    Student(); //�w�]�غc�l�A�]�i�H�ٲ�
    Student(int id, float E, float M)         //�ŧi�غc�l	
    {
        StuID=id;      //���wStuID=�Ѽ�id
        English=E;            //���wEnglish=�Ѽ�E
        Math=M;       //���wMath=�Ѽ�M
        Total = E + M;
        Average = (E + M)/2;
  
        cout << "-----------------------------------" << endl;
        cout << "�ǥ;Ǹ��G" << StuID << "" << endl; 
        cout<<"�^�妨�Z:"<<E<<endl;
        cout<<"�ƾǦ��Z:"<<M<<endl;
        cout << "�`���O" << Total << "��,�����O" << Average << "��" << endl;
    }
};
   
int main()
{   
    Student stud1(920101,80,90);    //����stud1������
    Student stud2(920102,60,70);    //����stud2������
    cout << "-----------------------------------" << endl;	
	          
    return 0;
}
