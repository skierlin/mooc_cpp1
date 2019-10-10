#include <iostream>
using namespace std;

int main(){
	int m,n,x;
	cin >> m >> n >> x;
	if(x >= m)
		cout << n+2*(m/n) << endl;
	else
		cout << n+(m/n) << endl;
	return 0;
}