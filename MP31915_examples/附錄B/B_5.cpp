#include <iostream>  // �B�z��X�J�����Y��
 
using namespace std;

int main()
{
    char	ch = 'a';
    char	str_e[] = "peace";
    char	str_c[] = "�z�n";
    cout.put(ch);			// ��X�r��
    cout << endl;
    cout.write( str_e, 5 );	// ��X5�Ӧr���^��r��
    cout << endl;
    cout.write( str_c, 2 );	// ��X2�Ӧr������r��
    cout << endl << endl;
    
    
    return 0;
}
