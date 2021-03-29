/*
  做难题重要的是联想法：由 圆 -> 椭圆 -> 解题
  而联想法的基础就是多做题、多见识
  这题和素数有些像：但是素数有两种方法(试除法、筛选法)
  这题和丑数几乎一摸一样(算法一不一样就不知道了)
  此外，我第一眼看到这题时找到的规律和这题的正确解法的起始思路相同
  只是苦于每次乘积过后得到的元素不能待在应该在的序号位置(从这一步过后就再想不下去了)
  另外这题用到了--STL--从许多蓝桥杯过来人的建议来看，只要掌握些用得到的知识就好了
 */

/*
#include<iostream>
#include<set>
using namespace std;
typedef long long LL;
const LL MAX = 59084709587505;

int main() {
	set<LL>q;
	int a[3] = { 3,5,7 };
	LL tou = 1;
	// 这里相乘插入进去的数字，需要进行排序和去重( set能完美解决)
	while (true) {
		for (int i = 0; i <3; i++) {
			LL tt = tou * a[i];// 用于暂存乘积得到的数字，留待判断是否存入 s 中
			if (tt <= MAX)
				q.insert(tt);
		}
		tou = *(q.upper_bound(tou));// 从set中算则比tou大的最小的数
		if (tou >= MAX)break; //  这里必须要以tou作为标准来判断，因为有可能 s.inser(tt) 进去的数字后面还有比较小的数字需要插入
	}
	cout << q.size();
	return 0;
}
*/

