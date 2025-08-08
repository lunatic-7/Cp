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

// Definition of Node class
class Node {

public:
	int data;
	Node *next;

	// Constructor to initialize node
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

// TC = O(n); SC = O(n)
void deleteDups(Node *n)
{
	set<int> st;
	Node *previous = nullptr;
	while (n != nullptr)
	{
		if (st.find(n->data) != st.end())
		{
			previous->next = n->next;
		}
		else
		{
			st.insert(n->data);
			previous = n;
		}
		n = n->next;
	}
}

// TC = O(n^2); SC = O(1)
void deleteDupsTp(Node *head)
{
	Node *currentNode = head;
	while (currentNode != nullptr)
	{
		Node *runner = currentNode;
		while (runner->next != nullptr)
		{
			if (runner->next->data == currentNode->data)
			{
				runner->next = runner->next->next;
			}
			else
			{
				runner = runner->next;
			}
		}
		currentNode = currentNode->next;
	}
}

int main()
{
    wasif();
    
    // Creating nodes dynamically using new operator
    Node *head = new Node(7);
    Node *second = new Node(3);
    Node *third = new Node(9);
    Node *fourth = new Node(10);
    Node *fifth = new Node(7);
    Node *sixth = new Node(19);
    Node *seventh = new Node(19);

    // Linking the nodes
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = nullptr;

    // Print linked list
    linkedListTraversal(head);

    // deleteDups(head);
    deleteDupsTp(head);

    linkedListTraversal(head);

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