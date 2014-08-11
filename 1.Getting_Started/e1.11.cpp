#include <iostream>
using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

int main(int argc, char* argv[])
{
	int a, b, m, n;
	cout << "Enter two integers:" << endl;
	cin >> a >> b;
	m = max(a, b);
	n = min(a, b);
	for (int i = n; i <= m; ++i){
		cout << i << endl;
	}
	return 0;
}