#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main()
{
	
	vector<int> v;
	v.push_back(3);
	v.push_back(2);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<'\n';
	}
	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();it++){
		cout<<*it<<'\n';
	}
	for(int x:v){
		cout<<x<<'\n';
	}
	for(auto x:v){
		cout<<x<<'\n';
	}
}
