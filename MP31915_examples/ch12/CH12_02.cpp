#include <iostream>

using namespace std;

class Student                 
{
    friend float add_score(Student); //�ŧiadd_score��Ƭ��٦���
private:                       
    int StuID;          
    float Score_E, Score_M, Score_T;
public:                        
    Student(int id,float E,float M) //�ŧi�غc�l
    {		
        StuID=id;              
        Score_E=E;             
        Score_M=M;             
        Score_T = Score_E + Score_M;
        cout << "�ǥ;Ǹ��G" << StuID << "" << endl; 
        cout << "�`���O" << Score_T << "��" << endl;
    }	
};
float add_score(Student a)     //�w�qadd_score���
{
    a.Score_T+=30;
    return a.Score_T;
}
int main()
{
    Student stud1(920101,80,90);    //����stud1������
    cout << "�[30����A�`�����G" << add_score(stud1) << "��" << endl; //�I�sadd_score���
  
    return 0;
}
