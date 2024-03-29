//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:

    bool ispar(string s)
    {
        if(s.length()<2){
                return false;
        }
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    char ch = st.top();
                    if((ch == '{' && s[i] == '}') || (ch == '(' && s[i] == ')') || (ch == '[' && s[i] == ']')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends