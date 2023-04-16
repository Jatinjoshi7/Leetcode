//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    Node* reverse(Node* head){
        Node* newhead=NULL;
        while(head!=NULL){
            Node* next=head->next;
            head->next=newhead;
            newhead=head;
            head=next;
        }
        return newhead;
    }
    
    bool isPalindrome(Node *head){
        if(head==NULL || head->next==NULL){
            return true;
        }
        Node* slow=head;
        Node* fast=head;
        Node* temp2=head;
        while(fast->next !=NULL && fast->next->next!=NULL){ 
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* temp=reverse(slow->next);
        while(temp!=NULL){
            if(temp2->data != temp->data){
                return false;
            }
            temp=temp->next;
            temp2=temp2->next;
        }
        return true;
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends