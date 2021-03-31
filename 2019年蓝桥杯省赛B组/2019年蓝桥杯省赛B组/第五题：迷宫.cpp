//#define _CRT_SECURE_NO_WARNINGS
//#include<cstdio>
//#include<queue>
//using namespace std;
//int dir[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };//R L U D  
//char maze[30][50];
//int vis[30][50];
//char mp[30][50];
//char di[5] = "RLUD";
//
//struct node {
//	int x,y;
//};
//node pre[30][50];
//
//void BFS() {
//	queue<node>que;
//	node head;
//	head.x = 0, head. y = 0;
//	que.push(head);
//	vis[head.x][head.y] = 1;
//	while (!que.empty()) {
//		node now = que.front();// 这里错两次了
//		que.pop();
//		if (now.x == 29 && now.y == 49)
//			return;
//		for (int i = 0; i < 4;i++) {
//			node next;
//			next.x = now.x + dir[i][0];
//			next.y = now.y + dir[i][1];
//			if (next.x >= 0 && next.x < 30 && next.y >= 0 && next.y < 50 && !vis[next.x][next.y] && maze[next.x][next.y]!='0')
//			{
//				vis[next.x][next.y] = 1;
//				que.push(next);
//				pre[next.x][next.y] = now;
//				mp[next.x][next.y] = di[i];
//			}
//		}
//	}
//}
////void print2(node cur) {
////	if (pre[cur.x][cur.y].x-cur.x == 0 && pre[cur.x][cur.y].y - cur.y == 1)
////		printf("R");
////	if (pre[cur.x][cur.y].x - cur.x == 0 && pre[cur.x][cur.y].y - cur.y == -1)
////		printf("L");
////	if (pre[cur.x][cur.y].x - cur.x == -1 && pre[cur.x][cur.y].y - cur.y == 0)
////		printf("D");
////	if (pre[cur.x][cur.y].x - cur.x == 1 && pre[cur.x][cur.y].y - cur.y == 0)
////		printf("U");
////}
//void print(node cur) {
//	if (cur.x == 0 && cur.y == 0)
//		return;
//	print(pre[cur.x][cur.y]);
//	//print2(cur);
//	printf("%c", mp[cur.x][cur.y]);
//}
//
//int main() {
//	for (int i = 0; i < 30; i++)
//	{
//		for (int j = 0; j < 50; j++)
//			scanf("%c", &maze[i][j]);
//		getchar();
//	}
//
//	BFS();
//
//	node ed;
//	ed.x = 29, ed. y = 49;
//	print(ed);
//}

