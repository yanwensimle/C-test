//#include<iostream>
//using namespace std;
///*
//从1数到100，如果该数是7的倍数或者个位有7或者十位有7，则输出“敲桌子”，其余输出该数
//*/
//int main()
//{
//	for(int num = 1;num<101;num++)
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num / 10;//取十位数
//		b = num % 10;//取个位数
//		c = num % 7;//取除以7的余数
//		if (a==7||b==7||c==0)
//		{
//			cout << num << "(敲桌子)" << endl;//如果该数是7的倍数或者个位有7或者十位有7
//		}
//		else
//		{
//			cout << num << endl;
//		}
//	} 
//	system("pause");
//	return 0;
//}