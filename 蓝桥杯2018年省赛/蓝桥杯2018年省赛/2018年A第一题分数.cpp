/* 
  解题思路：等比数列、结论法也行，最终结果可以简化为：2-1/2^19 因为
  要求互质，所以需要单独求出分子和分母，再求他们的最大公约数
*/
#include<iostream>
using namespace std;
/*

// 快速幂运算  （ x 代表底数）
long pow_2(int b) {
	int x = 4;
	long res = 1;
	while (b > 0) {
		if (b & 1)// &：相应位置都是1则结果是1；
			res *= x;
		b >>= 1;// 如果b是1000，也只要移动10次，相比于for循环，时间复杂度低
		x = x * x;
	}
	return res;
}


// 最大公约数
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