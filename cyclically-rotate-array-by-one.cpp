#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr,int left,int right){
	while(left<right){
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;

		left++;
		right--;
	}
}

void rotate(vector<int> &arr){
	int n = arr.size();
	reverse(arr,0,n-2);
	reverse(arr,n-1,n-1);
	reverse(arr,0,n-1);
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	rotate(arr);
	for(int ele : arr)
		cout<<ele<<" ";

	return 0;
}