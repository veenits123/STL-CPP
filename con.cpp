#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define PI 3.1415926535897932384626
#define IOS
const int mod = 1000000007;
const int N=100005;

void the_fcuker(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
    #endif
}

int32_t main(){
    
    the_fcuker();
    
    //int t;cin>>t;while(t--){
    //int i,j,k,n,m,ans=0,cnt=0,sum=0;
    ld n;
    cin>>n;
    if (n<90){
        cout<<2*n;
    }
    else{
        cout<<360-2*n;
    }

    
    return 0;
}