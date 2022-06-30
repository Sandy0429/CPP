#include<iostream>
using namespace std;

class Node{

	public:
		int data;
		Node *next;
		
		Node(int val)
		{
			data = val;
			next =NULL;
		}
};

void insertAtHead(Node* &head, int val)
{
	Node* n = new Node(val);
	n->next = head;
	head = n;
}

void insertAtTail(Node* &head, int val)
{
	
	Node* n = new Node(val);
	
	if(head == NULL){
		head = n;
		return;
	}
	
	Node* temp = head;
	while(temp->next != NULL )
	{
		temp = temp->next;
	}
	temp->next=n;
}

void display(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		cout << temp->data <<" ";
		temp = temp->next;
	}
	cout << endl;
}

bool search(Node* &head,int key)
{
	Node* temp = head;
	while(temp !=NULL)
	{
		if(temp->data == key)
		{
			return true;
		}
		temp=temp->next;
	}
	return false;
}

void deleteAtHead(Node* &head)
{
	Node* todelete = head;
	head = head->next;
	
	delete todelete;
}

void deletion(Node* head, int val)
{
	if (head == NULL)
	{
		return;
	}
	if(head->next == NULL)
	{
		deleteAtHead(head);
		return;
	}
	
	
	Node* temp = head;
	while(temp->next->data != val)
	{
		temp=temp->next;
	}
	Node* todelete= temp->next;
	temp->next = temp->next->next;
	
	delete todelete;
}

//iterative way
Node* reverse(Node* &head)
{
	
	Node* prevptr=NULL;//previous pointer
	Node* currptr = head;//current pointer
	Node* nextptr;
	while(currptr != NULL)
	{
		nextptr = currptr->next;
		currptr->next = prevptr;
		
		prevptr=currptr;
		currptr=nextptr;
		
	}
	return prevptr;
}
//reccursive way

Node* reverseRecursive(Node* &head)
{
	if(head == NULL || head->next==NULL)
	{
		return head;
	}
	
	Node* newhead = reverseRecursive(head->next);
	head->next->next = head;
	head->next =NULL;
	
	return newhead;
}

Node* reverseK(Node* &head, int k){
	 Node* prevptr=NULL;
	 Node* currptr = head;
	 Node* nextptr;
	 
	 int count =0;
	 while(currptr !=NULL && count<k) //for reversing 1st K node
	 {
	 	nextptr = currptr->next;
		currptr->next = prevptr;
		
		prevptr=currptr;
		currptr=nextptr;
		count++;
	 }
	 
	 if (nextptr != NULL){	 
	 head->next=reverseK(nextptr,k);
	}
	return prevptr; 
}
main()
{
	Node* head = NULL;
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
//	display(head);
	insertAtHead(head,4);
//	display(head);
//	cout<< search(head,5)<<endl;
//	cout<< search(head,3)<<endl;
//	deletion(head,2);
//	display(head);
//	deleteAtHead(head);
//	display(head);
//	insertAtHead(head,5);
//	display(head);

//reverse linkedlist
//Node* newhead = reverse(head);
Node* newhead = reverseRecursive(head);
display(newhead);

display(head);
//reversek nodes;
Node* head2 = NULL;
	insertAtTail(head2,1);
	insertAtTail(head2,2);
	insertAtTail(head2,3);
	insertAtTail(head2,4);
	insertAtTail(head2,5);
	insertAtTail(head2,6);
	display(head2);

int k=2;
Node* newheadk =reverseK(head2,k);
display(newheadk);

Node* newheadk1 =reverseK(newhead,k);
display(newheadk1);
}
