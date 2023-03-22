//#include<iostream>
//using namespace std;
///*
//1.数据类型  数组名[数组长度]
//2.数据类型  数组名[数组长度] = {值1，值2，...}
//3.数据类型  数组名[] = {值1，值2，...}
//*/
//int main()
//{
//	int arr[5] = { 10,20,30,40,50 };
//	cout << "整个数组的内存大小：" << sizeof(arr) << endl;
//	cout << "每个元素的内存大小：" << sizeof(arr[0]) << endl;
//	cout << "数组中元素的个数：：" << sizeof(arr)/ sizeof(arr[0]) << endl;
//	cout << "数组的首地址：" << int(arr) << endl;
//	cout << "数组的第一个元素的地址：" << int(&(arr[0])) << endl;
//	cout << "数组的第二个元素的地址：" << int(&(arr[1])) << endl;
//	//数组名是一个常量，他已经指向了一个地址，不能对他进行赋值
//
//
//	system("pause");
//	return 0;
//}