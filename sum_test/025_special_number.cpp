#include <iostream>
using namespace std;

int main(){

	for(int n = 9*9; n <= 7*7*7; n++){
		if(n%7 == n/(9*9)%9 && n/7%7 == n/9%9 && n/7/7%7 == n%9){
			cout << n << endl;
			cout << n/7/7%7 << n/7%7 << n%7 << endl;
			cout << n/9/9%9 << n/9%9 << n%9 << endl;
		}
	}
	return 0;
}