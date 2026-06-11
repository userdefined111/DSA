# include <bits/stdc++.h>
using namespace std;

void removeCycle(Node* head){
    Node* slow = head;
    Node* fast = head;
    bool isCycle = false;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            isCycle = true;
            break;
        }
    }
    if(isCycle == false){
        return;
    }
    slow = head;

    if(slow == fast){
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else{
        Node* prev = NULL;
        while(slow!= fast){
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = NULL;
    }
}

int main(){
    
}