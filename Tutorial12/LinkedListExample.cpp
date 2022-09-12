
#include <iostream> 
using namespace std;

class Node
{
    public:
        int value;
        Node *next;
};

class LinkedList
{
    private:
        Node *header;

    public:

    LinkedList()
    {
        header = nullptr;
    }

    void Add(int value)
    {
        if (header == nullptr)
        {
            header = new Node();
            header->value = value;
            header->next = nullptr;
        }
        else
        {
            Node * p = header;

            while (p->next != nullptr)
                p = p->next;

            p->next = new Node();

            p = p->next;
            p->value = value;
            p->next = nullptr;
            
        }
    }

    int ReadAt(int index)
    {
        Node * p = header;
        int counter = 0;

        while (p != nullptr)
        {
            if (counter == index)
                return p->value;

            p = p->next;
            counter++;
        }

        return NULL;
    }


    void ModifyAt(int index, int value)
    {
        Node * p = header;
        int counter = 0;
        bool modified = false;

        while (p != nullptr)
        {
            if (counter == index)
            {
                p->value = value;
                modified = true;
            }
            
            p = p->next;
            counter++;
            
        }

        if (modified)
            cout << "value at index " << index << " has been changed to " << value << endl;
        else
            cout << "Could not modify value at index " << index << ", index out of range" << endl;


    }

    void RemoveAt(int index)
    {
        if (header == nullptr)
            cout << "list is empty, cannot remove" << endl;
        else
        {

            Node * nodeToDelete = header;
            
            int counter = 0;
            bool removed = false;

            while (nodeToDelete != nullptr)
            {
                if (counter == index)
                {
                    Node *p = header;

                    while (p->next != nodeToDelete)
                        p = p->next;

                    p->next = nodeToDelete->next;

                    delete nodeToDelete;
                    
                    removed = true;

                    break;
                }
                
                nodeToDelete = nodeToDelete->next;
                counter++;
                
            }

            if (removed)
                cout << "node at index " << index << " has been removed " << endl;
            else
                cout << "Could not remove node at index " << index << ", index out of range" << endl;

        }
    }

    void Print()
    {
        Node * p = header;

        while (p != nullptr)
        {
            cout << p->value << " ";
            p = p->next;
        }

        cout << endl;
    }

    bool IsEmpty()
    {
        if (header == nullptr)
            return true;
        else
            return false;
    }

    int Size()
    {
        if(IsEmpty())
            return 0;
        else
        {
            Node * p = header;
            int counter = 0;

            while (p != nullptr)
            {
                p = p->next;
                counter++;
            }

            return counter;
        }
    }

};

int main () 
{
	
    LinkedList ll;

    ll.Add(1);
    ll.Add(4);
    ll.Add(6);
    ll.Add(7);
    ll.Add(5);

    ll.Print();

    cout << "Element at index 0: " << ll.ReadAt(0) << endl;
    cout << "Element at index 2: " << ll.ReadAt(2) << endl;
    cout << "Element at index 4: " << ll.ReadAt(4) << endl;

    ll.ModifyAt(1, 9);
    ll.ModifyAt(7, 6);

    ll.RemoveAt(2);

    ll.Print();

    if (ll.IsEmpty())
        cout << "List is empty" << endl;
    else
        cout << "List is not empty" << endl;

    cout << "The size of the linked list is: " << ll.Size() << endl;

    cout << endl << endl << "After adding three new elements: " << endl;
    ll.Add(10);
    ll.Add(72);
    ll.Add(15);

    ll.Print();
    cout << "The size of the linked list is: " << ll.Size() << endl;

	return 0; 
}