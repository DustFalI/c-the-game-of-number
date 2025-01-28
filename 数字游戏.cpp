#include <iostream>
using namespace std;
int main()
{
	long long n,k,t,result=0,p=1,previous=1,sum=1;//定义为long long格式防止溢出 
	cin>>n>>k>>t;
	for(int i=1;i<t;i++)
	{
		result = (previous + ((p+((p+n)-1))*n/2)) % k;//计算报数的数字
		previous = result;//保留先前数字
		p+=n;//轮数 
		sum = sum + result;//总和 
	}
	cout<<sum;
	return 0;
}
//以下为推断过程 
//1 2 4 7 11 3 9 3 11 7
//1 7 9 
//7=1+(1+2+3)%13
//9=7+(4+5+6)%13
//上一次的数字加本轮即将新增的数字对要求取余 
