#include <iostream>

using namespace std;

class car { 
      public:
       void go()   // car���O���������go
       {
            cout << "�T���o��!"<< endl;
       }
       void stop()   // car���O���������stop
       {
            cout << "�T������!"<< endl << endl;
       }
         };
       class freighter: public car
      	{
      public:
       void stop()   // �мg�������,����~�Ӧ�car���O��������ƫh�|�Q���N
         {
            cout << "freighter���O :�T������!"<< endl << endl;
          }
           };
        int main()
         {
          freighter ft;
          ft.go();      // �o�̰��檺���O�Ѱ�¦���Ocar���~�ӦӨӪ��������	   
          cout<<"--------------------------------------"<<endl;
          ft.stop();    // �o�̰��檺�O�мg�᪺�������,�Ӥ��O�Ѱ�¦���Ocar�~�ӦӨӪ��������
          
          
          return 0;
       	}
