#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int c = min(a,b);
	int d = max(a,b);
	while(d%c != 0){
		int e = d%c;
		d = c;
		c = e;  
	}
	cout << c << endl; 
	return 0;
}