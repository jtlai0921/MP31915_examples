#include <iostream>

using namespace std;

int main()
{
    int sum=0,n,i=0;
    cout<<"�п�Jn�ȡG"; 
    cin>>n;
	
    //do while����
	
    do {
        sum+=i;          
        cout<<"i="<<i<<" sum="<<sum<<endl;    //�L�Xi�Msum����
		i++;
	}while(n<=10 && i<=n) ; //�P�_�j�鵲������ 
	
    
    return 0;             
}
