#include<iostream>
using namespace std;
/*
����Ԫ���������
*/
int main()
{
	
	int arr[5] = { 80,20,100,45,55 };
	int temp = 0;

	for (int i = 0; i < 5/2; i++)//���������������ֵ
	{
		temp = arr[i];
		arr[i] = arr[4 - i];
		arr[4 - i] = temp;
		
	}
	for (int i = 0; i < 5; i++)//���������������ֵ
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}