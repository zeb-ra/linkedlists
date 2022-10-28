#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

node *insert(int val, node *head)
{
    node *nn = new node(val);
    nn->next = head;
    head = nn;

    return head;
}

int main()
{

    int v1, choice, proceed = 1;
    node *head = new node(10);
    node* temp = head;









    while (proceed == 1)
    {

    cout << "What do you want to do?" << endl;
    cout << "1. Add Node" << endl;
    cout << "2. Search Node" << endl;
    cout << "3. Display Nodes" << endl;
    cin >> choice;



        if (choice == 1)
    {
        cout << "Enter element to insert to node" << endl;
        cin >> v1;

        head = insert(v1, head);
        temp = head;

                                                                                
    }




//////////////////////////////SEARCHING


    else if (choice == 2)
    {

        int src, z=0;
        cout << "Enter element to search: " << endl;
        cin >> src;

        int flag = 0;
        while (z==0)
        {
            if (temp->data == src)
            {
                flag = 1;
                z = 1;
            }

            // else{
            //     flag = 0;
            //     z = 0;
            //     }

            temp = temp->next;
            

          
        }

        temp = head;

        if (flag == 1)
        {
            cout << "DATA FOUND!!!!!!!!!!" << endl;
            flag = 0;
            continue;
        }

        else if(flag == 0)
        {
            cout << "NO DATA FOUND IN LINKED LIST" << endl;
            
        }
    }
    
    
    
    
    else if (choice == 3)
    {

        while (temp != NULL)
        {

            cout << "Contents are" << endl;
            cout << temp->data << endl;
            cout << "++++++++++++++++++" << endl;
            temp = temp->next;
        }

        temp = head;
    }

    // else
    // {
    //     cout << "Sorry invalid response" << endl;
    // }

    cout << "*******************DO YOU WANT TO PROCEED WITH EXECUTION*******************" << endl;
    cout << "1. YES" << endl;
    cout << "2. NO" << endl;
    cin >> proceed;
    
    }

    

    return 0;
}

   
