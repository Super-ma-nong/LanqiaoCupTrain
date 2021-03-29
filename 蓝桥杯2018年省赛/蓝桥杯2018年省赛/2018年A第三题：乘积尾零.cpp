/*
  这题难度不大，只是解决的关键需要技巧：1`9中能构成10的只有2和5
  单从每个数的最后一位来计算也不够准确。2和5相乘得到10--唯一正解
*/

/*
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int a2 = 0;
	int a5 = 0;
	int num = 0;
	for (int i = 100; i >0; i--) {
		cin >> num;
		while (!(num % 2)) {
			a2++;
			num /= 2;
		}
		while (!(num % 5)) {
			a5++;
			num /= 5;
		}
	}
	cout << min(a2, a5);// 求两个数中较小的，在cmath文件中
	return 0;
}
*/