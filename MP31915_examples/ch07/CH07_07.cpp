#include<iostream>

using namespace std;

//�U�}�C��ƭ쫬���ŧi
void print_arr(int arr[][5],int,int);

int main()
{	
    //�ŧi�ê�l�ƤG�����Z�}�C
    int score_arr[][5]={{78,69,83,90,75},{11,22,33,44,55}};
    print_arr(score_arr,2,5);
    
    
 	return 0;	
}

//��X�G���}�C�U���������
void print_arr(int arr[][5],int r,int c)
{	//�Ĥ@���i�ٲ�,�䥦���ƪ����г������M���w�q���� 
	int i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c;j++)
	   		printf("%d  ",arr[i][j]);
       	printf("\n");
	}
}
