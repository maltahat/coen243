// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
};

class LinkedList
{
private:
    Node* head;

public:
    LinkedList()
    {
        head = nullptr;  //list is empty
    }

    void InsertFirst(int value)
    {
        if (head == nullptr)
        {
            head = new Node;
            head->value = value;
            head->next = nullptr;
        }
        else
        {
            Node* new_node = new Node;
            new_node->value = value;
            new_node->next = head;
            head = new_node;
        }
    }

    void Print()
    {
        Node* temp = head;

        while (temp != nullptr)
        {
            cout << temp->value << ", ";
            temp = temp->next;
        }
    }

    int Count()
    {
        int count = 0;

        Node* temp = head;

        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }

        return count;
    }

    void DeleteFirst()
    {
        if (head == nullptr)
            cout << "There is nothing to delete" << endl;
        else
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void InsertLast(int value)
    {
        if (head == nullptr)
        {
            head = new Node;
            head->value = value;
            head->next = nullptr;
        }
        else
        {
            Node* temp = head;

            while (temp->next != nullptr)
                temp = temp->next;

            Node* new_node = new Node;
            new_node->value = value;
            new_node->next = nullptr;
            temp->next = new_node;
        }
    }


    void DeleteLast()
    {
        if (head == nullptr)
        {
            cout << "There is nothing to delete" << endl;
        }
        else if (head->next == nullptr)
        {
            Node* temp = head;
            head = nullptr;
            delete temp;
        }
        else
        {
            Node* node_to_delete = head;
            Node* new_last_node = head;

            node_to_delete = node_to_delete->next;

            while (node_to_delete->next != nullptr)
            {
                node_to_delete = node_to_delete->next;
                new_last_node = new_last_node->next;
            }

            new_last_node->next = nullptr;
            delete node_to_delete;
        }
    }

    void InsertAt(int index, int value)
    {
        if (index > Count())
            cout << "You cannot insert at this location." << endl;
        else
        {
            if (index == 0)
            {
                Node* new_node = new Node;
                new_node->value = value;
                new_node->next = head;
                head = new_node;
            }
            else
            {
                Node* temp = head;

                for (int i = 0; i < index - 1; i++)
                    temp = temp->next;

                Node* new_node = new Node;
                new_node->value = value;
                new_node->next = temp->next;
                temp->next = new_node;
            }
        }
    }

    void DeleteAt(int index)
    {
        if (index >= Count())
        {
            cout << "You cannot delete this index" << endl;
        }
        else if (index == 0)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node* node_to_delete = head;
            Node* new_last_node = head;

            node_to_delete = node_to_delete->next;

            for (int i = 0; i < index-1; i++)
            {
                node_to_delete = node_to_delete->next;
                new_last_node = new_last_node->next;
            }

            new_last_node->next = node_to_delete->next;
            delete node_to_delete;
        }
    }

};


int main()
{
    LinkedList ll;

    ll.InsertFirst(10);
    ll.InsertFirst(8);
    ll.InsertFirst(6);
    ll.InsertFirst(4);

    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;

    ll.DeleteFirst();
    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;

    ll.InsertLast(15);
    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;

    ll.DeleteLast();
    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;

    ll.InsertAt(2, 20);
    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;

    ll.InsertAt(4, 30);
    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;

    ll.InsertAt(0, 1);
    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;

    ll.DeleteAt(2);
    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;

    ll.DeleteAt(0);
    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;

    ll.DeleteAt(3);
    ll.Print();
    cout << endl << "Count = " << ll.Count() << endl;
}