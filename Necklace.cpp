#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here 
int t;
cin>>t;
while(t--)
{  
    int n,k;
    cin>>n>>k;
    vector<int> a(n); 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    k = k%n;
    vector<int> b;
    for(int i = k;i<n;i++)
    {
        b.push_back(a[i]);
    }
    for(int i=0;i<k;i++)
    {
        b.push_back(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}
	return 0;
}
