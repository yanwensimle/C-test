//#include<iostream>
//using namespace std;
///*
//随机生成一个1-100的数字，直到猜中为止
//*/
//int main()
//{
//	int num = rand() % 100 + 1;
//	int flag = 1;
//
//	while (flag)//flag是判断循环的条件，如果猜对了，就对其赋值0，结束循环
//	{
//		int num1 = 0;
//		cout << "请输入您猜的数字：" << endl;
//		cin >> num1;
//		if (num1 == num)
//		{
//			cout << "恭喜您猜对了，游戏结束" << endl;
//			flag = 0;
//		}
//		else if (num1 < num)
//		{
//			cout << "很遗憾您猜的数字小了，再猜一次" << endl;
//		}
//		else
//		{
//			cout << "很遗憾您猜的数字大了,再猜一次" << endl;
//		}
//		
//	}
//
//
//	system("pause");
//	return 0;
//}