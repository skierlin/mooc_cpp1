#include <iostream>
using namespace std;

int main(){
	int l,m;
	cin >> l >> m;
	int a[l+1] = {0};
	int ll,rr;
	for(int i = 0; i < m; i++){
		cin >> ll >> rr;
		for(int j = ll; j <= rr; j++){
			a[j] = 1;
		} 
	}
	int sum = 0;
	for(int i = 0; i <= l; i++)
		if(a[i] == 0)
			sum ++;

	cout << sum << endl;
	return 0;

}