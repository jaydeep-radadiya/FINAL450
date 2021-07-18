#include<bits/stdc++.h>
using namespace std;

vector<int> uni; // store union
vector<int> inter; // store intersection
void solve(vector<int> &arr1,vector<int> &arr2){
	int n1 = arr1.size();
	int n2 = arr2.size();
	unordered_set<int> s;

	for(int i=0;i<n1;i++){
		int ps = s.size();
		s.insert(arr1[i]);
		int as = s.size();

		if(ps==as)
			inter.push_back(arr1[i]);
		else
			uni.push_back(arr1[i]);
	}

	for(int i=0;i<n2;i++){
		int ps = s.size();
		s.insert(arr2[i]);
		int as = s.size();

		if(ps==as)
			inter.push_back(arr2[i]);
		else
			uni.push_back(arr2[i]);
	}
}

int main(){
	int n1;
	cin>>n1;
	vector<int> arr1(n1);
	for(int i=0;i<n1;i++)
		cin>>arr1[i];

	int n2;
	cin>>n2;
	vector<int> arr2(n2);
	for(int i=0;i<n2;i++)
		cin>>arr2[i];

	solve(arr1,arr2);
	for(int ele : uni)
		cout<<ele<<" ";
	cout<<"\n";
	for(int ele : inter)
		cout<<ele<<" ";

	return 0;
}