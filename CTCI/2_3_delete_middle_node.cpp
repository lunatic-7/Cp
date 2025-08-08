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

	Node (int value)
	{
		data = value;
		next = nullptr;
	}
};


// Traverse
void linkedListTraversal(Node *ptr)
{
	while (ptr != nullptr)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << "\n";
}

bool deleteMiddleNode(Node *ptr)
{
	if (ptr == nullptr || ptr->next == nullptr) return false;

	Node *next = ptr->next;
	ptr->data = next->data;
	ptr->next = next->next;

	return true;
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


    linkedListTraversal(head);

    deleteMiddleNode(second);

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