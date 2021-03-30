/*
  这题从样例数据中找到的规律
  （一般题目可以从题目和样例输入输出两个方面突破）
  1.这题解题方法很容易找到，不过细节注意太多了！！！
  2.相关细节：cin>>T后需要处理后面的回车；单纯挨个计算小时分钟秒需要进行
  多次进位和借1，所以遇到这种类似时间的加减，直接转换为最低进制位进行计算
  ，之后再转换回来；
*/
/*
3
17:48:19 21:57:24
11:05:18 15:14:23
17:21:07 00:31:46(+1)
23:02:41 16:13:20(+1)
10:19:19 20:41:24
22:19:04 16:41:09(+1)
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
int get_time() {
	int h1, m1, s1, h2, m2, s2, d;
	h1 = m1 = s1 = h2 = m2 = s2 = d = 0;
	char line[100] = { 0 };
	cin.getline(line, 100);
	if (strlen(line) == 17)// 这里我也能想到从字符串长度来判断是否输入天数，但是getline不会的
		sscanf(line, "%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
	else
		sscanf(line, "%d:%d:%d %d:%d:%d(+%d)", &h1, &m1, &s1, &h2, &m2, &s2, &d);
	int time = d * 24 * 3600 + h2 * 3600 + m2 * 60 + s2 - h1 * 3600 - m1 * 60 - s1;
	return time;
}
int main() {
	int T = 0;
	(cin >> T).get();// 处理T后面的回车
	for(int i=0;i<T;i++){
		int time1 = get_time();
		int time2 = get_time();
		int t = (time2 + time1)/2;// 这就是从样例数据中找到的规律（一般题目可以从题目和样例输入输出两个方面突破）
		printf("%02d:%02d:%02d\n",t/3600,t/60%60,t%60 );// 从秒得到时间
	}
	return 0;
}
*/