#include <iostream>
#include <vector>

using namespace std;

class Solution{
	
public:
	void result(vector<int>& in){
		for(int i = 0; i < in.size(); i++){
			for(int j = 1; j < in.size() - i; j++){
				if(in[j-1] > in[j]){
					swap(in[j-1],in[j]);
				}
			}
		}
	}

};


int main(){
	vector<int> in = {4,5,3,1,2};
	Solution res;
	res.result(in);
	for(int i = 0; i < in.size(); i++){
		cout << in[i] << " ";
	}
	cout << endl;
	return 0;
}