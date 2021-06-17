#include<bits/stdc++.h>
using namespace std;

// comparison : 2*(n-2)+1
void firstMethod(vector<int> &arr,int n){
	int mx, mn;
	if(n==1){
		mx = arr[0];
		mn = arr[0];
	}
	else{
		if(arr[0]>arr[1]){
			mx = arr[0];
			mn = arr[1];
		}
		else{
			mx = arr[1];
			mn = arr[0];
		}
		for(int i=2;i<n;i++){
			if(arr[i]>mx)
				mx = arr[i];
			if(arr[i]<mn)
				mn = arr[i];
		}
	}
	cout<<"mn : "<<mn<<"\n";
	cout<<"mx : "<<mx<<"\n";
}

// n is odd : 3*(n-1)/2
// n is even : 1+3*(n-2)/2
void secondMethod(vector<int> &arr,int n){
	int i, mx, mn;
	if(n%2==0){
		if(arr[0]>arr[1]){
			mx = arr[0];
			mn = arr[1];
		}
		else{
			mx = arr[1];
			mn = arr[0];
		}
		i = 2;
	}
	else{
		mx = arr[0];
		mn = arr[0];
		i = 1;
	}
	while(i<n-1){
		if(arr[i]>arr[i+1]){
			if(arr[i]>mx)
				mx = arr[i];
			if(arr[i+1]<mn)
				mn = arr[i+1];
		}
		else{
			if(arr[i+1]>mx)
				mx = arr[i+1];
			if(arr[i]<mn)
				mn = arr[i];
		}
		i = i+2;
	}
	cout<<"mn : "<<mn<<"\n";
	cout<<"mx : "<<mx<<"\n";
}

int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	firstMethod(arr,n);
	secondMethod(arr,n);

	return 0;
}