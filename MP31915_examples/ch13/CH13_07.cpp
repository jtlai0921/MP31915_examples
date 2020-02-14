#include <iostream> 

using namespace std;

class Matrix        // �p��x�}�ۥ[���ۭq���O  
{  
    int Matrix_Num[2][2];     // �]�w2x2���x�}  
public:  
    Matrix() 
    {  
        int i,j;  
        for (i=0; i<2; i++)  
            for(j=0; j<2; j++)  
                Matrix_Num[i][j]=0; // Matrix�x�}���غc�l 
                                    // ������l�Ƭ�0  
    }  
       
    Matrix(int Tmp_a1, int Tmp_a2, int Tmp_b1, int Tmp_b2) 
    {  
        Matrix_Num[0][0]=Tmp_a1;     // Matrix�x�}���غc�l  
        Matrix_Num[0][1]=Tmp_a2;     // ��l�Ʈ榡��  
        Matrix_Num[1][0]=Tmp_b1;         // |a1  a2|  
        Matrix_Num[1][1]=Tmp_b2;         // |b1  b2|  
    }  
    friend istream& operator >> (istream& in, Matrix& Tmp_Mat);  
    // >>�B��l���h����ƭ쫬�ŧi�Ain�O��istream���O�ͦ�����J����  
    friend ostream& operator << (ostream& out, Matrix& Tmp_Mat);  
    // <<�B��l���h����ƭ쫬�ŧi�Aout�O��ostream���O�ͦ�����X����  
    Matrix operator ++();     // ++�e�m�B��l���h����ƭ쫬�ŧi  
    Matrix operator ++(int);  // ++��m�B��l���h����ƭ쫬�ŧi  
};  
       
istream& operator >> (istream& in, Matrix& Tmp_Mat)  
{  
    int i,j;  
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            in >> Tmp_Mat.Matrix_Num[i][j];    // �z�L�j��]�w���O���������  
        return (in);          // �Ǧ^��J����  
}  
ostream& operator << (ostream& out, Matrix& Tmp_Mat) 
{  
    int i,j;  
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            cout << Tmp_Mat.Matrix_Num[i][j] << "\t";  // �z�L�j��]�w���O���������  
    cout << endl;  	
    return (out);     // �Ǧ^��X����  
}  
Matrix Matrix::operator ++ ()  
{ 
    int i,j;
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            ++Matrix_Num[i][j];  // �Q�ΰj������O������ƶi��++�e�m�B��  
    return (*this);  
}  
Matrix Matrix::operator ++ (int)  
{  
    Matrix Tmp;  
    int i,j;  
    for (i=0; i<2; i++)  
        for (j=0; j<2; j++)  
            Tmp.Matrix_Num[i][j] = Matrix_Num[i][j]++;  // �Q�ΰj������O������ƶi��++��m�B��  
    return (Tmp);  
}  
int main()  
{  
    Matrix M1,M2,Prefix,Postfix; 
    cout << "�п�JM1�x�}���ȡG";  
    cin >> M1;       // �I�s�h���B��l>>�]�w���󤺮e  
                
    cout << "�п�JM2�x�}���ȡG";  
    cin >> M2;         // �I�s�h���B��l>>�]�w���󤺮e  
    Prefix = ++M1;     // �I�s�h���B��l++�A����e�m�B��  
    Postfix = M2++;   // �I�s�h���B��l++�A�����m�B��  
    cout << endl;  
    cout << "����Prefix = ++M1��APrefix�x�}���Ȭ��G" << endl;  
    cout << Prefix << endl;       // �I�s�h���B��l<<��X���󤺮e  
    cout << "����Postfix = M2++��APostfix�x�}���Ȭ��G" << endl;  
    cout << Postfix << endl;       // �I�s�h���B��l<<��X���󤺮e  
                
                
    return 0;
}
