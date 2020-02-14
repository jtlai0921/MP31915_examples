#include <iostream> // �t�A���Y�� <iostream>

#include <cstring>  // �t�A���Y�� <cstring>

using namespace std;

class Student  // �ŧi Student ���O
{
// �N��k�B��l��ƫŧi���B�ͨ��
    friend int operator-(int, Student);
    private:
        char Name[20]; // �w�q�r���}�C Name[]
        int Score;     // �w�q����ܼ� Score
    public:
        Student(const char *N, int s) // Student ���O���غc���
        {
            strcpy( Name, N );
            Score=s;
        }
        bool operator>(Student b) // �j��(>)�B��l��Ʀh��
        {
            if ( this->Score > b.Score )
                return true;
            else
                return false;
        }
    void ShowName(void) { cout << "�W�r=" << Name << endl; }  // ����ܼ� Name �����e
    void ShowScore(void) { cout << "���Z=" << Score << endl; }   // ����ܼ� Score �����e
};

//�ŧi��k�B��l�h��
int operator-(int p, Student q)
{
    return (p-q.Score);
}

int main()
{
    Student x("Tom", 70);   // �w�q Student ������ x
    Student y("Mary", 85);  // �w�q Student ������ y
    cout << "���� x �����:" << endl; // ��ܪ��� x �����
    x.ShowName();
    x.ShowScore();
    cout << "�t " <<(100-x) <<" ���~��100��" <<endl; //�I�s��k�B��l���
    cout << "���� y �����:" << endl; // ��ܪ��� y �����
    y.ShowName();
    y.ShowScore();
    cout << "�t " <<(100-y) <<" ���~��100��" <<endl; //�I�s��k�B��l���
    cout << "���@�쪺���Z����:" << endl;
    if ( x > y )  // �ϥ� �u>�v�B��l��� x �P y
        x.ShowName();
    else
        y.ShowName();
       
    return 0;
}
