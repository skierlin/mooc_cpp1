#include <iostream>
#include <cmath>
using namespace std;
int main(){
	char a;
	cin >> a;
	for(int i = 1;i <= 5; i++){
		for(int j = 1; j <= abs(3-i); j++)
			cout << " ";
		for(int k = 1; k <= (5-2*abs(3-i)); k++)
			cout << a;
		cout << endl;
	}
	return 0;
}