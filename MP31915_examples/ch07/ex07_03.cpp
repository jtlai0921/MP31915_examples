#include<iostream>

using namespace std;
//�U�}�C��ƭ쫬���ŧi
void print_arr(int arr[],int);//�H�}�C�W�ٶǻ� 
void swap(int *i, int *j);
void BubbleSort(int *arr, int length);//�H���б`�ƶǻ� 

int main()
{	
	//�ŧi�ê�l�Ʀ��Z�}�C
	int score_arr[]={78,69,83,90,75,54,71,45,67};
	cout<<"���Z�}�C������:"<<endl;
 	//�I�s���*
    print_arr(score_arr,9);
    cout<<"--------------------------------------"<<endl;
    BubbleSort(score_arr,9);
    cout<<"�Ƨǫᦨ�Z�}�C������:"<<endl;
	print_arr(score_arr, 9);
	
    
 	return 0;	
}
//��X�}�C�U���������
void print_arr(int arr[],int size)//�H�}�C�W�ٶǻ� 
{	
	int i;
	for(i=0; i<size; i++)
	 	cout<<arr[i]<<"  ";
	cout<<endl;
}


void swap(int *i, int *j) //�洫��ƪ��� 
{
    int temp;

    temp = *i;
    *i = *j;
    *j = temp;
}
void BubbleSort(int *arr, int length)//�H���б`�ƶǻ�,��w�ƧǪk 
{
    int i, j;
    for ( i = 1; i < length; i++ )
    {
        for ( j = 0; j < length-1 ; j++ )
        {
            if ( arr[j] > arr[j+1] )
                swap(&arr[j], &arr[j+1]);
        }
    }
}


