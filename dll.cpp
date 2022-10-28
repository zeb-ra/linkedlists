#include<iostream>

using namespace std;


class node{
    public:
    int data;
    node *prev;
    node *next;
    
    node(int a){
        data = a;
        next = NULL;
        prev = NULL;
        }

};




node* insertatbeg(int val1,node* head){
    node* n = new node(val1);
    n->next = head;
    n->prev = NULL;
    head->prev = n;
    head = n;
    return head;}

node* insertatend(int val2, node* tail){
    node* nn = new node(val2);
    nn->next = NULL;
    nn->prev = tail;
    tail->next = nn;
    tail = nn;
    return tail;}
                    //add this  //after this
void insertafterval(int val3,   int val4,    node* head){
    node* nnn = new node(val3);
    while(head!=NULL){
        if(head->data == val4){
            nnn->prev = head;
            nnn->next = head->next;
            head->next = nnn;
            head->next->prev = nnn;

        }
    head = head->next;
    }
}









int main(){
    int v1,v2,proceed = 1;

    node *head = new node(10);
    node *tail = new node(100);
    head->next = tail;
    tail->prev = head;

    node* headtemp = head;

    while(proceed == 1){
        int choice;
        cout << "What do you want to do??" << endl;
        cout << "1. Insert Node at Beginning" << endl;
        cout << "2. Insert Node at End" << endl;
        cout << "3. Insert after Node" << endl;
        cout << "4. Display all Nodes" << endl;
        cin >> choice; cout << endl;

        if(choice == 1){

            cout << "Enter element to add" << endl;
            cin  >> v1;
            cout << endl;
            head = insertatbeg(v1,head);

        }

        else if(choice == 2){
            cout << "Enter element to add at end" << endl;
            cin >> v2;
            cout << endl;
            tail = insertatend(v2,tail);}



        else if(choice == 3){
            int v3,after;
            cout << "Enter element to add" << endl;
            cin >> v3;
            cout << endl;
            cout << "Enter node after which to add" << endl;
            cin >> after;
            cout << endl;
            insertafterval(v3,after,head);
        }














        else if(choice == 4){

        while (headtemp != NULL){

            cout << "Contents are" << endl;
            cout << headtemp->data << endl;
            cout << "++++++++++++++++++" << endl;
            headtemp = headtemp->next;
        }

        headtemp = head;
        
        }










            cout << "*******************DO YOU WANT TO PROCEED WITH EXECUTION*******************" << endl;
            cout << "1. YES" << endl;
            cout << "2. NO" << endl;
            cin >> proceed;
    }

    return 0;
}
