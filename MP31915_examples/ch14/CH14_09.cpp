#include <iostream>

using namespace std;

class vehicle {              
    // �ŧi��¦���Ovehicle
    public:
        virtual void start()=0; // �µ������start
        virtual void stop()=0;     // �µ������stop
};
class aircraft: public vehicle {   
    // �ŧi�l�����Oaircraft
    public:
        virtual void start()        //�ŧi�P�W�������������start (��virtual����r�i�ٲ�)
        {
            cout  << "���澹�Ұ�"<< endl;
        }
        virtual void stop()       //�ŧi�P�W�������������stop (��virtual����r�i�ٲ�)
        {
            cout << "���澹����"<< endl;
        }	
};
class car: public vehicle {      
    // �ŧi�l�����Ocar
    public:   
        virtual void start()       //�ŧi�P�W�������������start (��virtual����r�i�ٲ�)
        {
            cout << "�T���Ұ�"<< endl;
        }
        virtual void stop()       //�ŧi�P�W�������������stop (��virtual����r�i�ٲ�)
        {
            cout << "�T������"<< endl;
        }
};
int main()
{
    vehicle* ve ;//�ŧi��¦���Ovehicle����,��H��¦���O���i�����
    aircraft af;
    car cr;
        
    ve = &af;   // �N��¦���O���Ы��V�l�����Oaircraft
    ve->start();  // �I�s�䦨�����start()
    ve->stop();  // �I�s�䦨�����stop()
    ve = &cr;   // �N��¦���O���Ы��V�l�����Ocar
    ve->start(); // �I�s�䦨�����start()
    ve->stop();  // �I�s�䦨�����stop()
      
    return 0;
}
