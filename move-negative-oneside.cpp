#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr){
	int n = arr.size();
	int left = 0;
	int right = n-1;

	while(left<=right){
		if(arr[left]<0)
			left++;
		else if(arr[left]>0){
			swap(arr[left],arr[right]);
			right--;
		}
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	solve(arr);
	for(int ele : arr)
		cout<<ele<<" ";

	return 0;
}