#include <bits/stdc++.h>
#include <math.h>
using namespace std;
 
int main()
{
	long long a,b,c;
	long long n,m,k;
	cin >> a >> b >> c;
	cin >> n >> m >> k;
	if(a + b - c == 0 || a + c - b == 0 || c + b - a == 0 ){
		cout << "yes\n";
	}else{
		cout << "no\n";
	}
	if(n + m - k == 0 || k + m - n == 0 || n + k - m == 0 ){
		cout << "yes\n";
	}else{
		cout << "no\n";
	}
	return 0;
}
