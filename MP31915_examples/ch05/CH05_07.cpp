#include<iostream>
#include<string>// �ޥΦr�����O
	
using namespace std;
	
int main()
	{
		// �ŧiString�r��
		string st1,st2,st3,st4,st5;
		st1="abcdef";
		st2="ABCDEF";
		st3="Happy ";
		st4="Birthday";
		
		// �i��r��s���B��
		st5=st3+st4;
		
		cout<<"st3="<<st3<<endl;
		cout<<"st4="<<st4<<endl;
		cout << "s3�Ps4�걵��r���ܼ�st5���Ȭ��G" << st5 << endl;
		cout<<"--------------------------------------"<<endl;
		// �i��r�ꤧ�������
		cout<<"st1="<<st1<<endl;
		cout<<"st2="<<st2<<endl;
		
		 if (st1 > st2)
			cout << "st1 �P st2���������Y���Gst1 > st2 " << endl;
		 else
			cout << "st1 �P st2���������Y���Gst1 > st2 " << endl;
			
		 
		 return 0;
	}
