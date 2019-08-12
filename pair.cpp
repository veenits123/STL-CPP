#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back

int32_t main(){
	
	ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//code starts

	//We can access elements of a pair by using .first and .second

	//method 1
	pair <int,char> p;

	p.first=100;
	p.second='A';
	cout<<p.first<<" "<<p.second<<endl;

	//method 2
	pair <int,int> p2(100,300);

	cout<<p2.first<<" "<<p2.second<<endl;

	//method 3
	pair <string,bool> p3;

	p3=make_pair("abcde",true);
	cout<<p3.first<<" "<<p3.second<<endl;

	//we can swap pair also
	pair <int,int> a(10,20);
	cout<<a.first<<" "<<a.second<<endl;

	pair <int,int> b(9,27);
	swap(a,b);
	cout<<a.first<<" "<<a.second<<endl;

	//we can also use operators with pair
	cout<<a==b<<endl;//it check whether both values are equal
	cout<<a!=b<<endl;
	cout<<a>=b<<endl;
	cout<<a<=b<<endl;
	cout<<a>b<<endl;
	cout<<a<b<<endl;
	//NOTE:- it only compares first value
	
	return 0;
}