//�������
double factorial(int n)
{	
	if(n==1)
		return 1;	
  	else  	
  		return n*factorial(n-1);
}
//Cnk���
double Cnk(int n,int k)
{
	return factorial(n)/(factorial(k)*factorial(n-k));
}
