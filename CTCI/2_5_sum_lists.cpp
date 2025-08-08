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

Node *sumLists(Node *l1, Node *l2)
{
	int num1 = 0;
	int num2 = 0;
	int i = 1;
	while (l1 != nullptr)
	{
		num1 += l1->data * i;
		i *= 10;
		l1 = l1->next;
	}

	i = 1;
	while (l2 != nullptr)
	{
		num2 += l2->data * i;
		i *= 10;
		l2 = l2->next;
	}

	int ans = num1 + num2;

	vector<int> rev;

	while (ans > 0)
	{
		rev.PB(ans % 10);
		ans /= 10;
	}

	reverse(rev.begin(), rev.end());

	Node *head = nullptr;
	for (int i = 0; i < rev.size(); ++i)
	{
		Node *newNode = new Node(rev[i]);
		newNode->next = head;
		head = newNode;
	}

	return head;
}

int main()
{
    wasif();
    
    // Creating nodes dynamically using new operator
    Node *first1 = new Node(7);
    Node *second1 = new Node(1);
    Node *third1 = new Node(6);
	
	Node *first2 = new Node(5);
    Node *second2 = new Node(9);
    Node *third2 = new Node(2);

    // Linking the nodes
    first1->next = second1;
    second1->next = third1;
    third1->next = nullptr;

	first2->next = second2;
    second2->next = third2;
    third2->next = nullptr;


    linkedListTraversal(first1);
    linkedListTraversal(first2);

    Node *head = sumLists(first1, first2);


    linkedListTraversal(head);

    // Optional: Free memory (C++ way)
    delete first1;
    delete second1;
    delete third1;

    delete first2;
    delete second2;
    delete third2;

    return 0;
}