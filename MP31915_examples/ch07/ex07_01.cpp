#include<iostream>

using namespace std;
//��ƭ쫬�ŧi
int area(int,int);
void draw_rect(int,int);

int main()
{	
	int w, h,rect_area;
    //�禡�ƩI�s
	//�]�w��J�e�P�����Ʀr
	cout<<"�п�J�e:";
	cin>>w;
	cout<<"�п�J��:";
	cin>>h;
	rect_area=area(w,h);//�ݭn�Ǧ^�Ȫ���ƩI�s 
	//��ƩI�s
	cout<<"����Ϊ����Z="<<rect_area<<endl; 
    draw_rect(w,h);//���ݭn�Ǧ^�Ȫ���ƩI�s
    
    
	return 0;
}
int area(int a,int b)
{
 return a*b;
}//�p�����έ��Z�����  
void draw_rect(int x,int y)
{   
	int i,j;
	//�]�w�Ʀr���o���p�󵥩�s
	if(x<=0 || y<=0)
	{ 
		printf("�Ʀr���i�p�󵥩�s\n");
		return ;
	}
	//�]�w��X���榡
	for(i=0; i<y; i++)
	{
		for(j=0; j<x; j++)
		{
		printf("*");
		}
		printf("\n");
	}
} // �e�X����ιϧΪ���� 
