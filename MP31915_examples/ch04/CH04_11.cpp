#include <iostream>

using namespace std;

int main()
{
	int score;
	
	cout<<"�п�J�ƾǦ��Z?";
	cin>>score;

	if ( score>60 ) 
		goto pass;   // �����ҦW�٬�"pass"���{���ԭz�~�����{��.
	else
		goto nopass; // �����ҦW�٬�"nopass"���{���ԭz�~�����{��.	

	pass:        //pass����
	cout<<"�ƾǤή�!"<<endl;       
	goto TheEnd; // �����ҦW�٬�"TheEnd"���{���ԭz�~�����{��.

	nopass:      //nopass����
	cout<<"�ƾǦ��Z���ή�!"<<endl;

	TheEnd:  
    cout<<"---------------------------------"<<endl;
    cout<<"�έp����!"<<endl;  //TheEnd����
	
	
    return 0;
}
