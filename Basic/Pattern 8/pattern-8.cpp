//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    for(int row = 0;row<n;row++)
	    {
	        for(int col = 0;col<row;col++)
	        {
	            cout << " ";
	        }
	        for(int col = 0;col<2*(n-row)-1;col++)
	        {
	            cout<<"*";
	        }
	        cout << endl ;
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends