#include <iostream>

using namespace std;

class vehicle {    
    // �ŧi��¦���Ovehicle
    public:
        void start()
        {
            cout << "�B��u��Ұ�"<< endl;
        }
        void shutdown()
        { 
            cout << "�B��u�㺶��"<< endl;
        }
};
class aircraft: virtual public vehicle 
{      
    // �ŧi������¦���Oaircraft
    public:
        void fly()
        {
            cout << "���澹����"<< endl;
        }
       void land()
        {
            cout << "���澹�۳�"<< endl;
        }
};
class car: virtual public vehicle 
{        
    // �ŧi������¦���Ocar
    public:
        void go()
        {
            cout << "�T���Ұ�"<< endl;
        }
        void stop()
        {
            cout << "�T������"<< endl;
        }
};
class aircar: public aircraft, public car {};  // �ŧi�l�����Oaircar

int main()
{
    aircar ac;
    ac.start();     // �l�ͨ�ƩI�s�W��h��¦���Ovehicle���������start
    ac.go();
    ac.fly();
    ac.land();
    ac.stop();
    ac.shutdown();      // �l�ͨ�ƩI�s�W��h��¦���Ovehicle���������stop
         
    return 0;
}
