#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    
    char verselet[] = "�֦W:�M����\n"
                      "�@��:���� �@�@ ����:�C�����y\n\n";
    /*  �g�� */
    ofstream fout;
    fout.open("text1.txt");//�ϥΪ���fout���禡open�}��text1�ɮ׸�Ƭy
    for(int i=0; i<strlen(verselet); i++)
    {
        // �r����X
        fout.put(verselet[i]);//put()���r����X�禡�A�ҥH�����v�r��X�A�H�����@��r��
    }
    fout<<"���Q��n��Q�e�A�K�����e�S��@�C"<<endl;
    fout<<"�Y�D�s�ɤs�Y���A�|�V���O��U�{�C"<<endl;
    fout.close();
    
    
    return 0;
}

