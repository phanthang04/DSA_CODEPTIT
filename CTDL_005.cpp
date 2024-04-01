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
    while (temp->next != NULL){
        temp = temp->next;
    }
    Node *make = CreateNode(x);
    temp->next = make;
}

void delet(Node *&head, int x){
    while (head->data == x){
        head = head->next;
    }
    Node *newNode = head;
    while(newNode->next != NULL){
        if (newNode->next->data == x)
            newNode->next = newNode->next->next;
        else
            newNode = newNode->next;
    }
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
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
    int k; cin >> k;
   delet(head, k);
}