//https://www.acwing.com/problem/content/828/
// --------------   链表的双数组实现    -------------

//#include<iostream>
//using namespace std;
//const int N = 1e5 + 10;
//int e[N], ne[N], idx, head;
//void init() {
//    head = -1;
//    idx = 0;
//}
//void add_head(int x) {
//    e[idx] = x;
//    ne[idx] = head;
//    head = idx++;// 这里不太理解，这么做到底与前后有何关系（解释得不是很顺畅）
//}
//void remove(int k) {
//    ne[k - 1] = ne[ne[k - 1]];// 这里能画出它的前后关系，但是还不是提笔就能写下来
//}
//void insert(int k, int x) {
//    e[idx] = x;
//    ne[idx] = ne[k - 1];// 这里也是能画出它的前后关系，但是k-1就不是很熟练
//    ne[k - 1] = idx++;// 这里和head=idx++一样，不能理解前后关系
//}
//int main() {
//    int m, k, x;
//    init();
//    cin >> m;
//    while (m--) {
//        char ch = '0';
//        cin >> ch;
//        if (ch == 'H') {
//            cin >> x;
//            add_head(x);
//        }
//        else if (ch == 'D') {
//            cin >> k;
//            if (k == 0) head = ne[head];
//            else remove(k);
//        }
//        else {
//            cin >> k >> x;
//            insert(k, x);
//        }
//    }
//    for (int i = head; i != -1; i = ne[i]) {
//        cout << e[i] << " ";
//    }
//    return 0;
//}


#include<iostream>
using namespace std;
const int N = 10e5 + 10;
int l[N], r[N], e[N],idx;

void init(){
	l[1] = 0;
	r[0] = 1;
	idx = 2;
}

void add_l(int x) {
	e[idx] = x;
	r[idx] = r[0];// 先改变插入的结点的左右指针
	r[0] = idx;
	l[idx] = 0;//l[idx] = l[r[idx]];这里能避免改动r[0]，但是为了书写方便，也就没必要了
	l[r[idx]] = idx;
	idx++;// 从下面add_r中可以看到，l[1]一直保留到最后才修改，所以只是因为指向的问题（add_l应该先进行指向左边的修改）
	/*先从左到右的方向进行重新链接
	l[idx]=l[r[0]];// 当然这里l[r[0]]=0；
	l[r[0]]=idx;
	r[idx]=r[0];
	r[0]=idx;
	*/
}
void add_r(int x) {
	e[idx] = x;
	r[idx] = 1;// 这里也可以写成r[idx]=r[l[1]]; 插入尾部是从先右向左，能够避免修改已经确定的尾部(l[1])的值
	r[l[1]] = idx;
	l[idx] = l[1];
	l[1] = idx;
	idx++;
}
void remove(int k) {
// 第k个左边的那个数的右指针     第k个右边指针
  	r[l[k + 1]]             =      r[k + 1];
// 第k个右边那个数的左指针   =   第k个左指针
	l[r[k + 1]]              =    l[k + 1];
	// 左右两边的数要靠l[k+1]和r[l+1]来找
}
void add_k_l(int k, int x) {
	k++;
	e[idx] = x;
	r[idx] = r[l[k]];// 插入右边就先修改左边，插入左边相反
	r[l[k]] = idx;
	l[idx] = l[k];
	l[k] = idx;
	idx++;
}
void add_k_r(int k, int x) {
	k++;
	e[idx] = x;
	l[idx] = l[r[k]];// 指过去又指回来
	l[r[k]] = idx;
	r[idx] = r[k];
	r[k] = idx;
	idx++;
}
int main(){
	int m=0, k=0, x=0;
	string s;
	init();
	cin >> m;
	while (m--) {
		cin >> s;
		if (s == "L") {
			cin >> x;
			add_l(x);
		}
		else if (s == "R") {
				cin >> x;
				add_r(x);
			}
			else if (s == "D") {
					cin >> k;
					remove(k);
				}
			else if (s == "IL") {
			cin >> k >> x;
			add_k_l(k, x);
		}
			else {
			cin >> k >> x;
			add_k_r(k, x);
		}
	}
	for (int i = r[0]; i != 1; i = r[i])// 这里由于首尾结点都没有存数据，所以，当r[i]中i=1时就不用再往下走了；同样从右向左输出可以设i!=0
		cout << e[i] << "  ";

	return 0;
}