#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr){
	int n = arr.size();
	int left = 0;
	int mid = 0;
	int right = n-1;

	while(mid<=right){
		if(arr[mid]==0){
			swap(arr[left],arr[mid]);
			left++;
			mid++;
		}
		else if(arr[mid]==1)
			mid++;
		else if(arr[mid]==2){
			swap(arr[mid],arr[right]);
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