#include <iostream>                             // �t�A���Y�� <iostream.h>

using namespace std;

int main()
{
	 int Money;                                   // �w�q����ܼ� Money

     cout << "�п�J�~�ұo:";
     cin >> Money;                                // ����ܼ� Money �x�s�~�ұo���B

	 cout << "��ú�檺�|�B:";

	 //if...else if...�ԭz�A�P�_��ú�|�B 
	 if ( Money > 750000 )                        // �ұo�W�L 75 �U
		 cout << Money*0.08;
	 else if ( Money > 500000 )                   // �ұo�W�L 50 �U
		 cout << Money*0.05;
	 else if ( Money > 250000 )                   // �ұo�W�L 25 �U
		 cout << Money*0.025;
	 else                                         // �ұo���� 25 �U
		 cout << Money*0.01;                      

 	 cout << endl;                                // ����
 	 
 	 
 	 return 0;
}
