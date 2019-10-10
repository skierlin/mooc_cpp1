#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long int n;
	cin >> n;
	long int a = n; 
	int count = 0;
	while(a != 0){
		a = a/10;
		count++;
	}
	int res = 0;
	long int b = n; 
	for(int i = count-1; i >= 0; i--){
		res += b%10*pow(10,i);
		b = b/10;
	}
	cout << res << endl;
	return 0;

}