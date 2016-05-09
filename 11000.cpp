#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	while (cin >> n, n>-1) {
		long long a=0, b=1;
		while (n--) {
			long long ta , tb ;
			ta = a+b;
			tb = a+1;
			a = ta;
			b = tb;
		}
		cout << a << ' ' << a + b<<endl;
	}

	//system("PAUSE");
	return 0;
}