#include<iostream>
#include<string>
using namespace std;
int main()
{
	string names[3] = { "����","����","����" };
	int arr[3][3] =
	{
		{100,100,100},
		{95,85,89},
		{85,86,89}
	
	};
	
	for (int i = 0; i < 3; i++)//
	{
		int sum = 0;
		//����ȡ��ÿ���е�Ԫ�أ���������������
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
		cout <<names[i] <<"���ܷ���Ϊ��" << sum << endl;
	}
	
	system("pause");
	return 0;
}