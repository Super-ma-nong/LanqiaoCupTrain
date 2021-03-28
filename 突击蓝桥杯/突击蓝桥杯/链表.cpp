//https://www.acwing.com/problem/content/828/
// --------------   �����˫����ʵ��    -------------

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
//    head = idx++;// ���ﲻ̫��⣬��ô��������ǰ���кι�ϵ�����͵ò��Ǻ�˳����
//}
//void remove(int k) {
//    ne[k - 1] = ne[ne[k - 1]];// �����ܻ�������ǰ���ϵ�����ǻ�������ʾ���д����
//}
//void insert(int k, int x) {
//    e[idx] = x;
//    ne[idx] = ne[k - 1];// ����Ҳ���ܻ�������ǰ���ϵ������k-1�Ͳ��Ǻ�����
//    ne[k - 1] = idx++;// �����head=idx++һ�����������ǰ���ϵ
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
	r[idx] = r[0];// �ȸı����Ľ�������ָ��
	r[0] = idx;
	l[idx] = 0;//l[idx] = l[r[idx]];�����ܱ���Ķ�r[0]������Ϊ����д���㣬Ҳ��û��Ҫ��
	l[r[idx]] = idx;
	idx++;// ������add_r�п��Կ�����l[1]һֱ�����������޸ģ�����ֻ����Ϊָ������⣨add_lӦ���Ƚ���ָ����ߵ��޸ģ�
	/*�ȴ����ҵķ��������������
	l[idx]=l[r[0]];// ��Ȼ����l[r[0]]=0��
	l[r[0]]=idx;
	r[idx]=r[0];
	r[0]=idx;
	*/
}
void add_r(int x) {
	e[idx] = x;
	r[idx] = 1;// ����Ҳ����д��r[idx]=r[l[1]]; ����β���Ǵ����������ܹ������޸��Ѿ�ȷ����β��(l[1])��ֵ
	r[l[1]] = idx;
	l[idx] = l[1];
	l[1] = idx;
	idx++;
}
void remove(int k) {
// ��k����ߵ��Ǹ�������ָ��     ��k���ұ�ָ��
  	r[l[k + 1]]             =      r[k + 1];
// ��k���ұ��Ǹ�������ָ��   =   ��k����ָ��
	l[r[k + 1]]              =    l[k + 1];
	// �������ߵ���Ҫ��l[k+1]��r[l+1]����
}
void add_k_l(int k, int x) {
	k++;
	e[idx] = x;
	r[idx] = r[l[k]];// �����ұ߾����޸���ߣ���������෴
	r[l[k]] = idx;
	l[idx] = l[k];
	l[k] = idx;
	idx++;
}
void add_k_r(int k, int x) {
	k++;
	e[idx] = x;
	l[idx] = l[r[k]];// ָ��ȥ��ָ����
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
	for (int i = r[0]; i != 1; i = r[i])// ����������β��㶼û�д����ݣ����ԣ���r[i]��i=1ʱ�Ͳ������������ˣ�ͬ�������������������i!=0
		cout << e[i] << "  ";

	return 0;
}