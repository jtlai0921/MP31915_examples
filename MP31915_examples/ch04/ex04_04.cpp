#include <iostream>                                  

using namespace std;

int main()
{
	 char letter;                                      // �w�q�r���ܼ� letter
	 
     cout << "�п�J�^��r��(�p�g):";
     cin >> letter;                                    // �r���ܼ� letter �x�s��J���ƭ�

	 switch (letter)
	 {
	     case 'a':                                     // (letter == 'a')
		 case 'e':                                     // (letter == 'e')
		 case 'i':                                     // (letter == 'i')
		 case 'o':                                     // (letter == 'o')
		 case 'u':                                     // (letter == 'u')
			 cout << "��J���O�����r���C";             // �@�Ϊ��ԭz�϶��C
			 break;
		 default:                                      // ��J���r�����b�W�C�ﶵ���C
			 cout << "��J���O�l���r���C";             // default �ԭz�϶��C
			 break;
	 }
     
     cout << endl;                                     // ����
     
     
     return 0;
}

