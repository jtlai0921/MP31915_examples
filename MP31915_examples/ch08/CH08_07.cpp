#include <iostream>

using namespace std;

int Factorial( int );  //�����B����
static int fact_no;//�ŧi�R�A�~���ܼ� 

int main()
{
    int number, answer;

    cout<<"�п�J�ƭȨD�����G";
    cin>>number;//��J�����ƥ� 
    answer = Factorial(number);//�I�s Factorial()��� 
    cout<<number<<"!="<<answer<<endl;
    cout<<"fact_no ="<<fact_no<<endl;//�C�L�ثe��count�� 
    
    
    return 0;
}

//�޼ơGnumber���w�ƭȶi�涥���B�� 
// �Ǧ^�ȡG�����B�⵲�G 
int Factorial( int number )
{
int i;
    fact_no=1;
    for(i=1;i<=number;i++)
    fact_no=fact_no*i;
    
    return fact_no;
}
