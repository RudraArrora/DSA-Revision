#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};
int length(node*head){
    node *temp=head;
    int cnt =0;
    while (temp!=NULL){
         temp=temp->next;
         cnt ++;
    }
    return cnt;
}
void insert_at_head(node *&head,int data){
    node *n=new node(data);
    n->next=head;
    head=n;
}
void insert_at_tail(node*&head,int data){
    node*temp=head;
    while (temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=new node (data);
    return;
}
void insert_at_middle (node*&head,int data,int p){
    node *temp=head;
    if (head==NULL){
        return insert_at_head(head,data);
    }
    else if (p>length(head)){
        return insert_at_tail(head,data);
    }
    else{
        int jump=1;
        while (jump<=p-1){
           temp=temp->next;
           jump++;
        }
        node *n=new node(data);
        n->next=temp->next;
        temp->next=n;
    }
}
bool recurssive_search(node *&head,int key){
    if (head==NULL){
        return false;
    }
    if (head->data ==key){
        return true;
    }
    return recurssive_search(head->next,key);
}


node *take_inpiut(){
    int data;
    cin>>data;
    node*head=NULL;
    while (data!=-1){
        insert_at_head(head,data);
        cin>>data;
    }
    return head;
}
void reverse(node*&head){
    node*c=head;
    node*n;
    node*prev=NULL;
    while(c!=NULL){
        n=c->next;
        c->next=prev;
        prev=c;
        c=n;
    }
    head=prev;
}
//istream &operator>>(istream&is,node*&head){
//takeInput(head);
//return is;
//}
node *mid(node *&head){
    if (head==NULL || head->next==NULL){
        return head;
    }
    node *slow=head;
    node*fast=head->next;
    while (fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
void last_node(node*&head,int k){
    node *fast=head;
    node*slow =head;
    while (k>0){
      fast=fast->next;
      k--;
    }
    while (fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    cout<<slow->data;
}
void print(node*&head){
    node*temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"<-";
        temp=temp->next;
    }
}
ostream&operator<<(ostream&os,node*&head){
    print (head);
    return os;
}
istream&operator>>(istream &is,node*&head){
   head= take_inpiut();
    return is;
}
int main() {
node*head;
cin>>head;
reverse(head);
int key;
cin>>key;
last_node(head,key);
    return 0;
}