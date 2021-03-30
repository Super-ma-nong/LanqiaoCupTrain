
//// ±©Á¦·¨
//
//#define _CRT_SECURE_NO_WARNINGS 
//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//int a[100][100][100];
//int main() {
//	int A=0, B=0, C = 0,m=0;
//	int count = 0;
//
//	cin >> A >> B >>C>>m;
//	for (int i = 0; i < A; i++) {
//		for (int j = 0; j < B; j++) {
//			for (int k = 0; k < C; k++) {
//				scanf("%d", &a[i][j][k]);
//			}
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		int lat, rat, lbt, rbt, lct, rct, ht; 
//		count++;
//		scanf("%d%d%d%d%d%d%d", &lat, &rat, &lbt, &rbt, &lct, &rct, &ht);
//		for (int j = lat - 1; j < rat; j++) {
//			for (int k = lbt - 1; k < rbt; k++) {
//				for (int s = lct - 1; s < rct; s++) {
//					a[j][k][s] -= ht;
//					if (a[j][k][s] < 0)
//					{
//						printf("%d", count);
//						return 0;
//					}
//				}
//			}
//		}
//	}
//}