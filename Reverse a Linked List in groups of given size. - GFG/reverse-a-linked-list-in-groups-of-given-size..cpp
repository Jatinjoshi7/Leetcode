//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    void reversestoe(node *start, node *end){
        node *newhead = NULL, *curr=start, *next=start->next;
        while(newhead!=end){
            curr->next = newhead;
            newhead = curr;
            curr = next;
            if(next!=NULL) next=next->next;
        }
    }
    
    struct node *reverse (struct node *head, int k)
    { 
        if(head==NULL || head->next==NULL || k==1) return head;
        node* start=head, *end=head;
        int inc = k-1;
        while(inc--){
            end=end->next;
            if(end->next==NULL) {
                break;
            }
        }
        node *nexthead=reverse(end->next, k);
        reversestoe(start, end);
        start->next = nexthead;
        return end;
    }
};

//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends