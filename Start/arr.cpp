
#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,el;
        cin>>n;
        vector<int> v;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>el;
            arr[i] = el;
            v.push_back(el);
        }
        ///cout<<*min_element(arr,arr+n)<<endl;
        cout<< *min_element(v.begin(),v.end()) <<endl;
    }
    return 0;
}  
