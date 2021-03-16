#include <iostream>
using namespace std;
struct Node
{
    float value;
    Node *next;
};
class SLL
{
    private :
    Node *head;
    public :
    static int size;
    SLL()
    {
        head = NULL;
        }
    ~SLL(){};
    void appendNode(float);
    void displayList();
    void printReverse();
    int length();
};
int SLL::size=0;
void SLL::appendNode(float num)
{
    Node *newNode;
    Node *nodePtr;
    newNode = new Node;
    newNode->value = num;
    newNode->next = NULL;
    if(head==NULL)
    head = newNode;
    else
    {
        nodePtr = head;
        while(nodePtr->next)
        nodePtr = nodePtr->next;
        nodePtr->next = newNode;
    }
}
void SLL::displayList()
{
    Node *nodePtr;
    nodePtr =head;
    while(nodePtr!=NULL)
    {
        cout<<nodePtr->value<<endl;
        nodePtr = nodePtr->next;
    }
}
void SLL::printReverse()
{
    Node *nodePtr;
    nodePtr = head;
    if(nodePtr!=NULL)
    {
        nodePtr= nodePtr->next;
        printReverse();
        cout<<nodePtr->value<<" ";
    }
    
}
int SLL::length()
{
    Node *current = head;
    while(current!=NULL)
    {
        size++;
        current = current->next;
    }
    return size;  
}
int main()
{
    SLL list;
    list.appendNode(2.2);
    list.appendNode(3.3);
    list.appendNode(4.4);
    cout<<"Display of value stored in each node"<<endl;
    list.displayList();
    list.appendNode(5.5);
    list.appendNode(6.6);
    cout<<"hjfgh"<<endl;
    list.displayList();
    cout<<"printing in reverse order : "<<endl;
    list.printReverse();
    cout<<"length of the list is : "<<list.length();
}