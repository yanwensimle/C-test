#include<iostream>
using namespace std;
/*
数组元素逆置输出
*/
int main()
{
	
	int arr[5] = { 80,20,100,45,55 };
	int temp = 0;

	for (int i = 0; i < 5/2; i++)//遍历数组里的所有值
	{
		temp = arr[i];
		arr[i] = arr[4 - i];
		arr[4 - i] = temp;
		
	}
	for (int i = 0; i < 5; i++)//遍历数组里的所有值
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}