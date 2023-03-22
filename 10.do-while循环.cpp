//#include<iostream>
//using namespace std;
///*
//找出三位数中的水仙花数，水仙花数是指，该三位数的百位数的三次方+十位数的三次方+个位数的三次方=该数
//*/
//int main()
//{
//	int num = 100;
//	do
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = num / 100;//取三位数的百位数
//		b = num / 10 % 10;//取三位数的十位数
//		c = num % 10;//取三位数的个位数
//		if((a*a*a+b*b*b+c*c*c)==num)
//		{
//			cout << num << endl;;
//		}
//		num++;
//	}
//	while ( num< 1000);
//	system("pause");
//	return 0;
//}