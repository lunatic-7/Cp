#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

class Node {

public:
	int data;
	Node *next;

	// Constructor
	Node (int value)
	{
		data = value;
		next = nullptr;
	}
};


// Function to traverse the linked list
void linkedListTraversal(Node *ptr)
{
	while (ptr != nullptr)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << "\n";
}


Node *partByValue(Node *ptr, int value)
{
	Node *head = ptr;
	Node *tail = ptr;

	while (ptr != nullptr)
	{
		Node *next = ptr->next;
		if (ptr->data < value)
		{
			// Insert node at head
			ptr->next = head;
			head = ptr;
		}
		else
		{
			// Insert node at tail
			tail->next = ptr;
			tail = ptr;
		}
		ptr = next;
	}
	tail->next = nullptr;

	return head;
}

int main()
{
    wasif();
    
    // Creating nodes dynamically using new operator
    Node *head = new Node(3);
    Node *second = new Node(5);
    Node *third = new Node(8);
    Node *fourth = new Node(5);
    Node *fifth = new Node(10);
    Node *sixth = new Node(2);
    Node *seventh = new Node(1);

    // Linking the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = nullptr;


    linkedListTraversal(head);

    Node *newHead = partByValue(head, 5);

    linkedListTraversal(newHead);

    // Optional: Free memory (C++ way)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;
    delete sixth;
    delete seventh;
    return 0;
}