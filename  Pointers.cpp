//Create A New Node
//Fill the data fields of the new node
//Attach Node to List
//Reposition Pointers


//Each element stores the value of the element and a pointer to the next. The last element will point to null.





#include <iostream>
using namespace std;




class Node {
public:
    int Value;
    Node* Next;



};


void printlist(Node*n) {
    while(n!=NULL){

        cout << n->Value << endl;
        n= n->Next;
    }




}

int main()
{
    cout << "\nWelcome to my simple Linked List Program!\n" << endl;


    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();



    head->Value = 1;
    head->Next = second;

    second->Value = 2;
    second->Next = third;

    third->Value = 3;
    third->Next = NULL;

    printlist(head);


    //Use a loop to create a linked list of ten nodes.

    //Remember
    // 1) Create a new node
    // 2) Fill the new node's data fields
    // 3) Attach the new node to the end of the linked list
    // 4) Reposition  list pointers


    // Set up the linked List, Head Pointer, current and next pointer

    Node* pHead;
    Node* pCurrent;
    Node* pNext;

    //Create Node(s)

    pHead = new Node();
    pHead->Value = 1;

    //Create a second node
     pCurrent = new Node();
     pCurrent->Value = 2;


     pHead->Next = pCurrent;
     pCurrent->Next = NULL;

     //Print the List

     printlist(pHead);







    for(int i =0; i < 10; i ++)   {







    }












    return 0;
}
