#include <iostream>

using namespace std;

class vehicle {              
    // �ŧi��¦���Ovehicle
    public:
        virtual void start() // �������start
        {
            cout << "�B��u��Ұ�"<< endl;
        }
        virtual void stop()     // �������stop
        {
            cout << "�B��u�㰱��"<< endl ;
        }
};
class aircraft: public vehicle {   
      // �ŧi�l�����Oaircraft
    public:
        virtual void start()  // �㦳�M��¦���O�ۦP�W�٪��������start
        {
            cout  << "���澹�Ұ�"<< endl;
        }
       virtual void stop()    // �㦳�M��¦���O�ۦP�W�٪��������stop
       {
            cout << "���澹����"<< endl;
       }	
};
class car: public vehicle {      
    // �ŧi�l�����Ocar
    public:   
        virtual void start()  // �㦳�M��¦���O�ۦP�W�٪��������start
        {
            cout << "�T���Ұ�"<< endl;
        }
        virtual void stop()   // �㦳�M��¦���O�ۦP�W�٪��������stop
        {
            cout << "�T������"<< endl;
        }
};
int main()
{
    vehicle* ve = new vehicle();  // ��¦���O������
    aircraft af;
    car cr;
    ve->start();  // �I�s�䦨�����start()
    ve->stop();  // �I�s�䦨�����stop()
    delete ve;
    ve = &af;   // �N��¦���O���Ы��V�l�����Oaircraft
    ve->start();  // �I�s�䦨�����start()
    ve->stop();  // �I�s�䦨�����stop()
    ve = &cr;   // �N��¦���O���Ы��V�l�����Ocar
    ve->start(); // �I�s�䦨�����start()
    ve->stop();  // �I�s�䦨�����stop()
      
    return 0;
}
