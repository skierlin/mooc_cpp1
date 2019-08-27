#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
	
public:
	void result(vector<int>& in){
		sort(in.begin(),in.end());
	}

};


int main(){
	vector<int> in = {4,5,3,1,2};
	Solution res;
	res.result(in);
	for(vector<int>::iterator it = in.begin(); it != in.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}