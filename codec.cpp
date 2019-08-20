#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back



// Function that returns the number of pairs 
int count_pairs(int a[], int b[], int n, int m) 
{ 

    // Count of odd and even numbers 
    int odd1 = 0, even1 = 0; 
    int odd2 = 0, even2 = 0; 

    // Traverse in the first array 
    // and count the number of odd 
    // and evene numbers in them 
    for (int i = 0; i < n; i++) { 
        if (a[i] % 2) 
            odd1++; 
        else
            even1++; 
    } 

    // Traverse in the second array 
    // and count the number of odd 
    // and evene numbers in them 
    for (int i = 0; i < m; i++) { 
        if (b[i] % 2) 
            odd2++; 
        else
            even2++; 
    } 

    // Count the number of pairs 
    int pairs = min(odd1, even2) + min(odd2, even1); 

    // Return the number of pairs 
    return pairs; 
} 

int32_t main(){
	
	ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	//  code starts
	int t;cin>>t;while(t--){
        int n,ans=0;
        cin>>n;int a[n],b[n];
        for (int i=0;i<n;i++){
        	cin>>a[i];
        	
        }
        //cout<<endl;
        for (int i=0;i<n;i++){
        	cin>>b[i];
        	
        }
        cout<<count_pairs(a,b,n,n)<<endl;
        
    }
	return 0;
}