#include <iostream>                               // �t�A���Y�� <iostream>
 
using namespace std;

class Student
{
    friend int operator+(Student&, Student&); // �ŧi�B�� operator+() �B��l���
private:
    int Score;
public:
      
    Student(int S_Score)  // Student ���O���غc���
    {
        Score=S_Score;
    }     
};

int operator+(Student& a, Student& b) // �[�k�B��l���
{
    return (a.Score+b.Score);
}

int main()
{
    Student x(90);  // �w�q Student ������ x
    Student y(75);  // �w�q Student ������ y
    cout << "x+y=" << x+y << endl;
       
    return 0;
}
