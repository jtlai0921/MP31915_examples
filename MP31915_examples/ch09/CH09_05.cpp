#include <iostream>

using namespace std;
int main()
{
    cout << "�b��l�{������ " << __LINE__  << " ��}�l�ϥΫe�m�B�z����";
    //__LINE__�����i�L�X�������ҥX�{���渹 
    cout << endl;
    cout << "�sĶ���{���W�١G" << __FILE__;      // __FILE__ ����
    cout << endl;
    cout << "�{���sĶ����b " << __DATE__ << " �� " << __TIME__; // �����O���sĶ������ɶ��C     
    cout << endl; 
    
    
    return 0;
}
