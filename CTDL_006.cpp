#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *CreateNode(int x){
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    return temp;
}

void pushBack(Node *&head, int x){
    Node *temp = head;
    if (temp->data == x)    return;
    while (temp->next != NULL){
        if (temp->data == x)    return;
        temp = temp->next;
    }
    if (temp->data == x)    return;
    Node *make = CreateNode(x);
    temp->next = make;
}


int main(){
    int n;
    cin >> n;
    int x;  cin >> x;
    Node *head = CreateNode(x);
    for (int i = 1; i < n; i++){
        cin >> x;
        pushBack(head, x);
    }
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}