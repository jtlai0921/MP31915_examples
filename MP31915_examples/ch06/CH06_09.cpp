#include <iostream>

using namespace std;

int main()
{	    
    char name[4][10] = { "Justinian", "Momo", "Becky", "Bush" };
    int i, j;	    
    for ( i = 0; i < 4; i++ )
    {
        for ( j = 0; j < 10; j++ )      
        {
            if( name[i][j] == '\0')	                
                cout<<"0";//�O�Ŧr���h�L�X0 
            else
                cout<<name[i][j];	       
        } 
        cout<<endl;//���� 
    }
          
    return 0;
}
