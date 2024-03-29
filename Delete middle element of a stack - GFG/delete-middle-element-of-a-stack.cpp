//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    
    void deletemiddle(stack<int>&s, int count, int sizeOfStack){
        if(count == sizeOfStack/2){
             s.pop();
             return;
         }
         int num = s.top();
         s.pop();
         deletemiddle(s, count+1, sizeOfStack);
         s.push(num);
    }
    
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
         int count=0;
         deletemiddle(s, count, sizeOfStack);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends