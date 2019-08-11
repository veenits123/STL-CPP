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

	stack <int> S,temp;//LIFO-last in first out

	//other datatypes declaration
	// stack <string> str;
	// stack <pair<int,int>> pr;


	S.push(10);
	S.push(20);
	S.push(30);
	S.push(40);
	S.push(50);

	cout<<S.size()<<endl;
	cout<<"top elem = "<<S.top()<<endl;
	//print all the elemnts of stack
	temp=S;
	while (!temp.empty()){
		cout<<temp.top()<<endl;
		temp.pop();
	}
	
	
	return 0;
}