/*
[�ܽd]:�N��ӳ̰�����۵����h�����ۥ[���X���G
*/
#include <iostream>
using namespace std; 

const int ITEMS = 6;
void PrintPoly(int Poly[],int items);
void PolySum(int Poly1[ITEMS],int Poly2[ITEMS]);
int main()
{  
	int PolyA[ITEMS]={4,3,7,0,6,2};	//�ŧi�h����A
	int PolyB[ITEMS]={4,1,5,2,0,9};	//�ŧi�h����B
	cout<<"�h����A=>";
	PrintPoly(PolyA,ITEMS);			//�L�X�h����A
	cout<<"�h����B=>";
	PrintPoly(PolyB,ITEMS);			//�L�X�h����B
	cout<<"A+B =>";
	PolySum(PolyA,PolyB);//�h����A+�h����B
	
	return 0;
}
void PrintPoly(int Poly[],int items)
{  
	int MaxExp;
	MaxExp=Poly[0];
	for(int i=1;i<=Poly[0]+1;i++)
	{  
		MaxExp--;
		if(Poly[i]!=0)	//�p�G�Ӷ���0�N���L
		{  
			if((MaxExp+1)!=0)
				cout<<" "<<Poly[i]<<"X^"<<MaxExp+1<<" ";
			else
				cout<<" "<<Poly[i];
			if(MaxExp>=0)
				cout<<"+";      
		}
	}
	cout<<endl;
}
void PolySum(int Poly1[ITEMS],int Poly2[ITEMS])
{  
	int result[ITEMS];
	result[0] = Poly1[0];
	for(int i=1;i<=Poly1[0]+1;i++)
		result[i]=Poly1[i]+Poly2[i];//��򻪺�Y�Ƭۥ[
	PrintPoly(result,ITEMS);
}
