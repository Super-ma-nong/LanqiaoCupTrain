//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<queue>
//#include<cstdio>
//using namespace std;
//int maze[5][5], vis[5][5];
//int dir[4][2] = { {-1.0},{1,0},{0,1},{0,-1} };// ������Ȼ��x��y  �������ҷֱ��Ӧ������
// struct node {// C++�в���typedefҲ����ֱ��ʡ��struct
//	int x, y;
//};
// node pre[5][5];
//void BFS() {
//	queue<node>que;
//	node str;
//	str.x = str.y = 0;
//	que.push(str);
//	vis[str.x][str.y] = 1;
//	while (!que.empty()) {
//		node now = que.front();
//		que.pop();
//		if (now.x == 4 && now.y == 4)
//			return;
//		for (int i = 0; i < 4; i++) {
//			node next;
//			next.x = now.x + dir[i][0];
//			next.y = now.y + dir[i][1];
//			if (next.x >= 0 && next.x < 5 && next.y >= 0 && next.y < 5 && !maze[next.x][next.y] && !vis[next.x][next.y])
//			{
//				vis[next.x][next.y] = vis[now.x][now.y] + 1;
//				que.push(next);
//				pre[next.x][next.y] = now;
//			}
//		}
//	}
//}
//void print(node prez)// ����������Ϊ���븸ĸ����е�����
//{
//	if (prez.x == 0 && prez.y == 0) {
//		printf("(0, 0)\n");
//		return;
//	}
//	print(pre[prez.x] [prez.y]);
//	printf("(%d, %d)\n",prez.x,prez.y);
//}
//int main() {
//	for (int i = 0; i < 5; i++)
//		for (int j = 0; j < 5; j++)
//			cin >> maze[i][j];
//	BFS();
//	node ed;
//	ed.x = ed.y = 4;
//	print(ed);
//	return 0;
//}