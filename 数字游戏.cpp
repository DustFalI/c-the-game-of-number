#include <iostream>
using namespace std;
int main()
{
	long long n,k,t,result=0,p=1,previous=1,sum=1;//����Ϊlong long��ʽ��ֹ��� 
	cin>>n>>k>>t;
	for(int i=1;i<t;i++)
	{
		result = (previous + ((p+((p+n)-1))*n/2)) % k;//���㱨��������
		previous = result;//������ǰ����
		p+=n;//���� 
		sum = sum + result;//�ܺ� 
	}
	cout<<sum;
	return 0;
}
//����Ϊ�ƶϹ��� 
//1 2 4 7 11 3 9 3 11 7
//1 7 9 
//7=1+(1+2+3)%13
//9=7+(4+5+6)%13
//��һ�ε����ּӱ��ּ������������ֶ�Ҫ��ȡ�� 
