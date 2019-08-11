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

	queue <int> q;

	//queue <pair<int,int>> pr;
	//queue <string> str;

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	cout<<q.size()<<endl;
	cout<<q.front()<<endl;
	cout<<q.back()<<endl;
	cout<<(q.empty()?"YES":"NO")<<endl;

	//printing all elemnets of queue
	while(!q.empty()){
		cout<<q.front()<<endl;
		q.pop();
	}
	
	return 0;
}