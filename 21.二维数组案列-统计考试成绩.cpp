#include<iostream>
#include<string>
using namespace std;
int main()
{
	string names[3] = { "张三","李四","王五" };
	int arr[3][3] =
	{
		{100,100,100},
		{95,85,89},
		{85,86,89}
	
	};
	
	for (int i = 0; i < 3; i++)//
	{
		int sum = 0;
		//依次取出每行中的元素，并将他们相加求和
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
		cout <<names[i] <<"的总分数为：" << sum << endl;
	}
	
	system("pause");
	return 0;
}