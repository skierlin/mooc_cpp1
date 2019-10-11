#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int m,n,x;
	cin >> m >> n >> x;
	while(m <= n*x && m >= n && x > 0){	
		x-=ceil(double(m)/n); 
		n+=(m/n);
	}
	cout << n << endl;
	return 0;
}