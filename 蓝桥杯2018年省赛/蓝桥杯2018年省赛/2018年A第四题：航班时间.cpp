#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
int h3, m3, s3, h4, m4, s4;
int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < 2*n; i++) {
		char ch1[100] = { 0 };
		cin.getline(ch1, 100);
		int h1, m1, s1,h2, m2, s2,d2;
		h1 = m1 = s1 = h2 = m2 =s2 =d2= 0;
		if(strlen(ch1)==17)
			sscanf(ch1,"%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
		else
			sscanf(ch1, "%d:%d:%d %d:%d:%d(+%d)", &h1, &m1, &s1, &h2, &m2, &s2,&d2);
		if (i % 2 == 0){
			s3 = 60 + s2 - s1;
			m3 = 60 + m2 + (s3 / 60 - 1) - m1;
			h3 = (24 + h2 + (-1 + m3 / 60) + d2 * 24) % 24;
		}
		else {
			s4 = 60 + s2 - s1;
			m4 = 60 + m2 + (s4 / 60 - 1) - m1;
			h4 = (24 + h2 + (-1 + m4 / 60) + d2 * 24) % 24;
			int h, m, s;
			cout << (h3 + h4) / 2 << endl;
			cout << (m3 + m4) / 2 << endl;
			cout << (s3 + s4) / 2 << endl;
		}
	}
	return 0;
}