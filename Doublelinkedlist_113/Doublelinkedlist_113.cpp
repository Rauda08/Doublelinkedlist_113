#include <iostream>
#include <string>

class Node {
public:
    int noMhs;
    string name;
    Node* next;
    Node* prev;
};


class DoubleLinkedList {
private:
    Node* START;
public:
    DoubleLinkList();
    void addNode();
    bool search(int rollNo, Node** previous, Node** current);
    bool deleteNode(int rollNo);
    bool listEmpty();
    void revtraverse();
    void trasverse();
    void hapus();
    void searchData();
};

DoubleLinkedList::DoubleLinkList() {
    START = NULL; 
}

void DoubleLinkedList::addNode() {
    int nim;
    string nim;
    cout << "\nEnter the roll number of the student: ";
    cin >> nim;
    cout << "\nEnter the name of the student: ";
    cin >> nm;
    Node* newNode = new Node(); //step 1
    newNode->noMhs = nim; //step 2
    newNode->name = nm; //step 3

    /*insert a node in the beginning of a doubly - linked list*/
    if (START == NULL || nim <= START->noMhs) {
        if (START != NULL && nim == START->noMhs) {
            cout << "\nDuplicate number not allowed" << endl;
            return;
        }
    }

}


int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
