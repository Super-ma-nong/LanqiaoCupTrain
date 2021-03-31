///*
//  正确理解：这些数字都是加最后四个数字
//  对这题理解，一不小心就错了(或许是题目描述本身就有残缺)。
//*/
//#include<iostream>
//using namespace std;

//int main() {
//	int a1=1, a2=1, a3=1;
//	int b;
//	for (int i = 4; i <= 20190324; i++) {
//		b = (a1 + a2 + a3)%10000;
//		a1 = a2;
//		a2 = a3;
//		a3 = b;
//	}
//	printf("%d", b);
//	return 0;
//}