#include <iostream>  // �B�z��X�J�����Y��
#include <iomanip>  // ���a�l�����Y��

using namespace std;

int main()
{
    int i, n; // �ϥκX�� ios::right
    cout << "�ϥή榡�X��\"ios::right\"�N��X�a�k���,�����w�]��" << endl;
    for( i = 1, n = 0; i < 6; i++)
    {
        n *= 10;
        n += i;
        cout << setiosflags( ios::right ) << setw(5) << n << endl;
	}
    cout << resetiosflags( ios::right ) << endl; // �Ѱ��]�w
    // �ϥκX�� ios::left
    cout << "�ϥή榡�X��\"ios::left\"�N��X�a�k���" << endl;
    for( i = 1, n = 0; i < 6; i++)
    {
        n *= 10;
        n += i;		
        cout << setiosflags( ios::left ) << setw(5) << n << endl;
    }
    cout << endl;
      
      
    return 0;
}
