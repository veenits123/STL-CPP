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

	priority_queue <int> q;

	q.push(10);
	q.push(90);
	q.push(20);
	q.push(70);
	q.push(100);
	q.push(30);

	cout<<"top : "<<q.top()<<endl;
	//priority_queue arrange elements in decreasing order and 
	//first element is greatest of all
	q.pop();//remove 100
	cout<<"top : "<<q.top()<<endl;

	cout<<"size : "<<q.size()<<endl;

	while (!q.empty()){
		cout<<q.top()<<endl;
		q.pop();
	}

	
	return 0;
}