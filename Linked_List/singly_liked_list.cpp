#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head; // node pointer / node reference
    LinkedList()
    {
        head = nullptr;
    }
    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    void insertAtPosition(int value, int position);
    void deleteNode(int value);
    void search(int target);
    void print();
};

int main()
{
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtBeginning(5);
    list.insertAtEnd(20);
    list.insertAtBeginning(50);
    list.insertAtPosition(52, 3);
    list.insertAtBeginning(15);
    list.print();

    list.deleteNode(20);
    cout << endl;
    list.print();
    return 0;
}

void LinkedList::deleteNode(int target)
{
    Node *temp = head; // 10
    if (head->value == target)
    {
        if (head->next == nullptr)
        {
            head = nullptr;
        }
        else
        {
            head = head->next;
        }
        cout << "DELETED!" << endl;
        return;
    }

    while (temp->next != nullptr) // node20
    {
        if (temp->next->value == target) // 20 == 20
        {
            temp->next = temp->next->next;
            return;
        }
        temp = temp->next;
    }
    cout << "value not found" << endl;
}
void LinkedList::print()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->value << endl;
        temp = temp->next;
    }
}
void LinkedList::search(int target) // 52
{
    Node *temp = head;
    bool not_found = 1;
    while (temp != nullptr)
    {
        if (temp->value == target)
        {
            cout << "value found!" << endl;
            not_found = 0;
            break;
        }
        temp = temp->next;
    }
    if (not_found)
    {
        cout << "value not found" << endl;
    }
}
void LinkedList::insertAtBeginning(int value)
{
    Node *newNode = new Node(value); // 5
    newNode->next = head;            // 10
    head = newNode;
}
void LinkedList::insertAtEnd(int value)
{

    Node *newNode = new Node(value);

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void LinkedList::insertAtPosition(int value, int position)
{
    if (position == 1)
    {
        insertAtBeginning(value);
        return;
    }

    Node *newNode = new Node(value);
    Node *temp = head;

    for (int i = 1; temp != nullptr && i < position - 1; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Position out of range\n";
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

