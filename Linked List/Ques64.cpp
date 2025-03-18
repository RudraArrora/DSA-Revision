#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int d){
      data=d;
      next=NULL;
    }
};
int length(node*&head){
    int cnt=0;
    node*temp=head;
    while (temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
void insertAthead(node*&head,int data){
    node*n=new node(data);
    n->next=head;
    head=n;
}
void insertAttail(node*&head,int data){
    if (head==NULL){
        head=new node(data);
        return;
    }
    node*tail=head;
    while (tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new node(data);
    return;
}

   void insertStmiddle(node*&head,int data,int p){
       if (head==NULL||p==0){
           insertAthead(head,data);
           return;
       }
       else if (p>length(head)){
           insertAttail(head,data);
       }
       else{
      int jump=1;
      node *temp=head;
      while(jump<=p-1){
          temp=temp->next;
          jump++;
       }
       node *n=new node(data);
       n->next=temp->next;
       temp->next=n;
     }
   }
void reverse (node*&head){
    node*prev=NULL;
    node*c=head;
    node*n;
    while (c!=NULL){
        n=c->next;
        c->next=prev;
        prev=c;
        c=n;
    }
    head=prev;
}
void mid(node*&head){
    if (head==NULL || head->next==NULL){
        cout<<head->data;
    }
    // if even 
    if (length(head)%2==0){
    node*slow=head;
    node*fast=head->next;
    while (fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<slow->data<<"and";
    slow=slow->next;
    cout<<slow->data;
    }
    else{
    node*slow=head;
    node*fast=head;
        while (fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
     cout<<slow->data;
    }
}
void KTHelemnt(node*&head,int k){
    node*slow=head;
    node*fast=head;
    for (int i=0;i<k;i++){
        fast=fast->next;
    }
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    cout<<slow->data;
}
void appendKthelement(node*&head,int k){
    node*slow=head;
    node*fast=head;
    for (int i=0;i<k;i++){
        fast=fast->next;
    }
    while (fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=head;
    head=slow->next;
    slow->next=NULL;
}
/////////////The Linked List should be sorted //////////////////////////////////////////
node*merge(node*a,node*b){
    if (a==NULL){
        return b;
    }
   if (b==NULL){
        return a;
    }
    node*c;
    if (a->data<b->data){
        c=a;
         c->next =merge(a->next,b);
    }
        if(a->data>b->data) {
        c=b;
       c->next = merge(a,b->next);
    }
    return c;
}
void print (node*&head){
    node*temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"->";
         temp=temp->next;
    }
}

int main() {
    node*head=NULL;
    node*head1=NULL;
    insertAthead(head1,6);
     insertAthead(head1,5);
    insertAthead(head,4);
     insertAthead(head,3);
      insertAthead(head,2);
       insertAthead(head,1);
        print (head);
       cout<<endl;
    print(head1);
   node*ans = merge(head,head1);
 cout<<endl;  
 print(ans);
// mid(head);
// cout<<endl;
// KTHelemnt(head,2);
return 0;
}
