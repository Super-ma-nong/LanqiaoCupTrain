/* 
  ����˼·���ȱ����С����۷�Ҳ�У����ս�����Լ�Ϊ��2-1/2^19 ��Ϊ
  Ҫ���ʣ�������Ҫ����������Ӻͷ�ĸ���������ǵ����Լ��
*/
#include<iostream>
using namespace std;
/*

// ����������  �� x ���������
long pow_2(int b) {
	int x = 4;
	long res = 1;
	while (b > 0) {
		if (b & 1)// &����Ӧλ�ö���1������1��
			res *= x;
		b >>= 1;// ���b��1000��ҲֻҪ�ƶ�10�Σ������forѭ����ʱ�临�Ӷȵ�
		x = x * x;
	}
	return res;
}


// ���Լ��
int gcd(long a, long b) {
	return b == 0?a:gcd(b, a % b);
}


int main() {
	//int a = pow_2(20) - 1;
	//int b = pow_2(19);
	//cout << a/gcd(a,b) <<"/"<< b/gcd(a,b);
	//cout << gcd(5,3) << "  " << gcd(4,2);
	cout << pow_2(2);
	return 0;
}
*/