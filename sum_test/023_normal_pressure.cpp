#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a ,b;
	int count = 0;
	int m = 0;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		if(a >= 90 && a <= 140 && b >= 60 && b <= 90)
			count ++;
		else{
			m = m >= count? m : count;
			count = 0;
		}
	}
	m = m >= count? m : count;
	cout << m << endl;
	return 0;
}