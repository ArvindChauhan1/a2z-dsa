//{ Driver Code Starts
#include <iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

/* Function to print Nodes in a given linked list */
void printList(struct Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

// Function to merge two sorted linked list.
Node *sortedMerge(Node *h1, Node *h2)
{
    if (h1 == NULL)
        return h2;
    if (h2 == NULL)
        return h1;

    Node *res = new Node(0);
    Node *tail = res;

    while (h1 != NULL && h2 != NULL)
    {
        if (h1->data < h2->data)
        {
            tail->next = h1;
            h1 = h1->next;
        }
        else
        {
            tail->next = h2;
            h2 = h2->next;
        }
        tail = tail->next;
    }
    // Attach remaining nodes
    tail->next = (h1 != nullptr) ? h1 : h2;

    return res->next;
}

/* Driver program to test above function*/
int main()
{

    int n, m;
    cin >> n >> m;

    int data;
    cin >> data;
    struct Node *head1 = new Node(data);
    struct Node *tail1 = head1;
    for (int i = 1; i < n; ++i)
    {
        cin >> data;
        tail1->next = new Node(data);
        tail1 = tail1->next;
    }

    cin >> data;
    struct Node *head2 = new Node(data);
    struct Node *tail2 = head2;
    for (int i = 1; i < m; i++)
    {
        cin >> data;
        tail2->next = new Node(data);
        tail2 = tail2->next;
    }

    Node *head = sortedMerge(head1, head2);
    printList(head);
    return 0;
}

// } Driver Code Ends
