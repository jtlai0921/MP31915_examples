#include <iostream>

using namespace std;

class car {
    public:     // ��¦���O���������禡�ŧi��public 
        void go()               // car���O���������go()
        {
            cout <<"�T���ҰʤF!"<< endl;
        }
        void stop()    // car���O���������stop()
        {
            cout <<"�T�������F!"<<endl;
        }	
};
class freighter: public car
{};   // �l�����O�N��s���]�w�r���ŧi��public
       
int main()
{
    freighter ft;
           
    ft.stop();
    cout<<"-------------------------------"<<endl;
    ft.go();   
    cout<<"-------------------------------"<<endl;
    // ft�Ofreighter���O���@�Ӫ���,�]���~�����Y,�ҥH�i�H�ϥ�go()�Pstop()���
        
    
    return 0;
           
}
