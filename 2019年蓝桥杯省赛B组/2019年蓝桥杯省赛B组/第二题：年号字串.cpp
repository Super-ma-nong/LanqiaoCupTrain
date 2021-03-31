//// 这题的算法还能进行优化（不过现在不太需用，为了省赛）
//#include<iostream>

//using namespace std;

//int main() {
//	int n = 2019;
//	int arr[100] = { 0 };
//	int i = 0;
//	while (n) {
//		arr[i] = n % 26;
//		i++;
//		n /= 26;
//	}
//	for(int j=i-1;j>=0;j--)
//		printf("%c", arr[j] + 'A'-1);// 这里减一很重要
//	return 0;
//}