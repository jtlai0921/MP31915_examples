#include <iostream>

using namespace std;

class testN       //�ŧi���O
{	
    int no[20];                  
    int i;
public:  
    testN()       //�غc�l�ŧi 
    {
        int i;
        for(i=0;i<10;i++)
            no[i]=i;
        cout << "�غc�l���槹��." << endl;
    }
    ~testN()          //�Ѻc�l�ŧi 
    {
        cout << "�Ѻc�l�Q�I�s.\n��ܰ}�C���e�G";
        for(i=0;i<10;i++)
            cout << no[i] << " ";
        cout <<"�Ѻc�l�w���槹��." << endl;
    }
};
             
int show_result()
{
    testN test1;// �������}�{���϶��e,�|�۰ʩI�s�Ѻc�l 
    return 0;    
}
               
int main()
{
    show_result(); //�I�s��testN���O���󪺨��

    return 0;
}
