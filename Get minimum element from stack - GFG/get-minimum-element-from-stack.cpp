//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    stack<int> st,mini;
    
    public:
       /*returns min element from stack*/
       int getMin(){
           if(mini.empty()){
               return -1;
           }
           else{
               return mini.top();
           }
       }
       
       /*returns popped element from stack*/
       int pop(){
          
           if(st.empty()){
               return -1;
           }
           int curr = st.top();
           st.pop();
           
           if(curr == mini.top()){
                mini.pop();
           }
           return curr;
       }
       
       /*push element x into the stack*/
       void push(int x){
          st.push(x);
          if(mini.empty() || mini.top() >= x){
              mini.push(x);
          }
       }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends