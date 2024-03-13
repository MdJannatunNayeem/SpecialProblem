//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
  void multiply(vector<int>&vec,int &multiplier)
  {
      int carry=0;

      for(int i=0;i<vec.size();i++)
      {
          int result=multiplier*vec[i]+carry;

          vec[i]=result%10;
          carry=result/10;

      }
      while(carry)
      {
          vec.push_back(carry%10);
          carry/=10;
      }
  }
    vector<int> factorial(int N){
        // code here
        vector<int>vec;
        vec.push_back(1);

        for(int i=2;i<=N;i++)
        multiply(vec,i);

        vector<int>result;
        for(int i=vec.size()-1;i>=0;i--)
        {
            result.push_back(vec[i]);
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
