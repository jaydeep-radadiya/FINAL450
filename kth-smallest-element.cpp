#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	// time compexity : O(nlogn)
	// sort(arr.begin(),arr.end());
	// cout<<arr[k-1]<<"\n";

	// time complexity : O(nlogk)
	priority_queue<int> maxh;
	for(int i=0;i<n;i++){
		maxh.push(arr[i]);
		if(maxh.size()>k)
			maxh.pop();
	}
	cout<<maxh.top();

	return 0;
}