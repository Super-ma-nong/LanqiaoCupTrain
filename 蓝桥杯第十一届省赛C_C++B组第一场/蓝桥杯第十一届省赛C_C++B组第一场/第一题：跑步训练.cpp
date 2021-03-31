#include<iostream>

using namespace std;

int main() {
	int n = 10000;
	int min = 0;
	while (n) {
		if (n -= 600)
			min++;
		else
			break;
		if (n += 300)
			min++;
		else
			break;
	}
	printf("%d", min);
}