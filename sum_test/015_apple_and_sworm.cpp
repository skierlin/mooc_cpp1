#include <iostream>
using namespace std;

int main(){
	int n,x,y;
	cin >> n >> x >> y;
	if (n-(double(y)/x) >= 0)
		cout << int(n-(double(y)/x)) << endl;
	else
		cout << 0 << endl;
	return 0;
}