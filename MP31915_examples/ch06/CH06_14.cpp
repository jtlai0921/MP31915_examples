 #include <iostream>  
 
 using namespace std;
 
 int main()  
 {  
    int Arr1[5] = {9,8,7,6,5};  
    int Arr2[5] = {0,1,2,3,4};  
 	
	int* Ptr1 = Arr1;  //Ptr1���V�}�CArr1���_�l��} 
    int* Ptr2 = Arr2;  //Ptr2���V�}�CArr2���_�l��} 
    
	int i = 0;  
    int* &refArr1 = Ptr1; //�ŧi���аѦ�refArr1���VPtr1   
   	int* &refArr2 = Ptr2;  //�ŧi���аѦ�refArr2���VPtr2 
            
	for(i=0;i<5;i++)  
        cout<<"Arr1["<<i<<"]="<<*(refArr1 + i)<<'\t'<<"Arr2["<<i<<"]="<<*(refArr2+i)<<endl;  
    //�H���аѦҦC�L�}�CArr1�PArr2������
    
    refArr1=refArr2;//�Q�Ϋ��аѦ�refArr1���V�t�@���аѦ�refArr2
    
	cout<<"refArr1=refArr2�B���....................."<<endl;
    for(i=0;i<5;i++)
        cout<<"*(refArr1+"<<i<<")="<<*(refArr1 + i)<<endl;
    
  
   return 0;
}
