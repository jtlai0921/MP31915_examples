#include <iostream>                                  // �t�A���Y�� <iostream.h>

using namespace std;

void Int_swap(int *, int *);                           // Int_swap() ��ƫŧi 

int main()                                        // �{���Ѧ��}�l
{
     int Num_1=10, Num_2=20;                           // �w�q����ܼ� Num_1�BNum_2

     cout << "�I�s Int_swap ��ƫe: "                  // ��ܰT��
		  << "Num_1= " << Num_1 << " Num_2= " << Num_2;
	 cout << endl;
     
	 Int_swap(&Num_1, &Num_2);                         // �ǧ}�I�s��� Int_swap()

     cout << "�I�s Int_swap ��ƫ�: "                  // ��ܰT��
		  << "Num_1= " << Num_1 << " Num_2= " << Num_2;
	 cout << endl;
	 
	 
	 return 0;
}

void Int_swap(int *pN_1, int *pN_2)                    // �w�q Int_swap ���
{
	int N_tmp;                                         // �w�q����ܼ� N_tmp

	N_tmp=*pN_2;
	*pN_2=*pN_1;
	*pN_1=N_tmp;

    cout << "   Int_swap() ��Ƥ�: "                   // ��ܰT��
		 << "*pN_1= " << *pN_1 << " *pN_2= " << *pN_2;
	cout << endl;
}
