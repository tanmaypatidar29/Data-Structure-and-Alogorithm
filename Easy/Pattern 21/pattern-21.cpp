//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int row = 0;row<n;row++)
        {
            if(row==0||row==n-1)
            {
                for(int col = 0;col<n;col++)
                {
                    cout << "*";
                }
            }
            else
            {
                for(int col = 0;col<n;col++)
                {
                    if(col==0||col==n-1)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
            cout << endl;
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends