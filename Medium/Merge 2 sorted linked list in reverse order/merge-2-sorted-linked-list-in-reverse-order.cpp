//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    Node *Rev(Node *node){
        Node *a=node,*p=nullptr,*temp=nullptr;
        while(a){
            p=a->next;
            a->next = temp;
            temp = a;
            a=p;

        }
        return temp;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        if(!node1)return Rev(node2);
        if(!node2)return Rev(node1);
        Node *l1=node1,*l2=node2,*res=nullptr,*tail=nullptr;
        if(l1->data<l2->data){
            res=l1;
            l1=l1->next;
        }
        else{
            res=l2;
            l2=l2->next;
        }
        tail=res;
        while(l1&&l2){
            if(l1->data<l2->data){
                tail->next=l1;
                l1=l1->next;
            }
            else{
                tail->next=l2;
                l2=l2->next;
            }
            tail=tail->next;
        }
        if(l1){
            tail->next=l1;
        }
        if(l2){
            tail->next=l2;
        }
        return Rev(res);
    }  
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends