#include <iostream>

#include <cstring>
using namespace std;

class teacher           
{
	friend class Student;  //�ŧiStudent���O��teacher���B�����O
private:   
	char tName[10];
public:
	void teach(int ID)    
	{
		if (ID==1)
			strcpy(tName, "John");  //���wtName����
		else 	
			strcpy(tName, "Andy");  //���wtName����
	}
};
class Student                 
{
private:                       
	int StuID,Select_C;
public:               
	Student(int id,int C)         
	{		
		StuID=id;              
		Select_C=C;   
		cout << "�ǥ;Ǹ��G" << StuID << endl; 
		cout << "�ҵ{�s���G" << Select_C << endl;
		teacher t;               //�ŧiteacher���O����
		t.teach(Select_C);         //�I�steacher���O��teach���
		cout << "�½ұб¡G" << t.tName << endl;   //�I�steacher���O��tName��Ʀ���
	}	
};

int main()
{
	Student stud1(920101,2);   //����stud1������
	Student stud2(920102,1);   //����stud2������
	
	return 0;
}
