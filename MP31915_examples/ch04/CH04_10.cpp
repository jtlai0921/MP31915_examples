#include<iostream>

using namespace std;

int main()
{
    int number;
    int i,j;
  
    cout<<"�п�J�E�E���k���Ҥ��n�C�L���Ʀr����: ";
    cin>>number;
  
    //�E�E���k�������j��   
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=9; j++)
        {
            if(j==number)   
                continue;//�]�w�~�򪺪�����
            cout<<j<<'*'<<i<<'='<<i*j<<'\t';
        }
        cout<<endl;
    }
  
    return 0;
}
