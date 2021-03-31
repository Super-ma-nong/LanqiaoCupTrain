///*
//  或许又要重新拿出我人生中某位重要的数学老师给的
//  必杀技之“审题超三遍”。
//  1.坑（1）：三个数不相等
//  2.优化的问题：还可以再优化-顺序从小到大
//*/

//#include<cstdio>
//using namespace std;


//int Judge_2_4(int x) {// 从这里来看for循环对于数字的进制分解有很强的整体性
//	for (; x; x /= 10) {  // 易错点：复合赋值操作符少=
//		if ((x % 10) == 2 || (x % 10) == 4)
//		//if ((x %= 10) == 2 || (x %= 10) == 4) 这里x一次性被计算了两次,首先这里本身算法就错了，不应该有赋值号
//			return 0;
//	}
//	return 1;
//}
//int main() {
//	int count = 0;
//	for(int i=1;i<2019;i++)
//		for(int j=1;j<2019;j++)
//			for (int k = 1; k < 2019; k++) {
//				if (i + j + k == 2019) {
//					if (Judge_2_4(i) && Judge_2_4(j) && Judge_2_4(k)&&(i!=k&&i!=j&&j!=k))
//						count++;
//				}
//			}
//	printf("%d", count/6);
//	return 0;
//}