#include <iostream>                      // �t�A���Y�� <iostream.h>

using namespace std;
   
int main()
{
     int check, count;                            // �w�q����ܼ� check�Bcount

	 for (count=0; count < 3; count++)			  // count �ܼưO����J�����ơC
	 {
	     cout << "��J�ϥΪ̱K�X:";			 
	     cin >> check;                            // ����ܼ� check �x�s��J���K�X�C

		 if ( check == 4321 )
			 break;                               // �Y��J�K�X���T�A�h���� for �j��C
		 else 
			 cout << "��J���K�X���~�A�Э��s��J..." << endl;
	 }
	 
	 if ( count == 3)                             // �Y�K�X���~�F 3 ���A�h��ܵL�k�n�J�T���C
		 cout << "�s�� 3 ���K�X��J���~�A�Э��s�n�J�ÿ�J���T�K�X...";
	 else                                         // ��J�K�X���T�A�h����w�諸�T���C
         cout << "�w����{���t��...";

     cout << endl;                                // ����
     
     
     return 0;
}
