#include <iostream>

using namespace std;

int main()
{
    int arr[4][3] = { {1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9},
                    {10, 11, 12} };//�ŧi�G���}�C arr 
    int i, j;

    for (i = 0; i < 4; i++ )
        for ( j = 0; j < 3; j++ )
        {
            cout<<"arr["<<i<<"]["<<j<<"] ="<<arr[i][j]<<'\t';//�C�Larr[i][j]���e 
            cout<<"*(arr+"<<i<<"+"<<j<<")= "<<*(arr+i)+j<<'\t';//�C�Larr[i][j]����} 
            cout<<"*(*(arr+"<<i<<")+"<<j<<") ="<<*(*(arr+i)+j)<<endl;//�C�Larr[i][j]���C�Ӥ����� 
        }

    
    return 0;
}
