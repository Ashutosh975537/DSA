#include<iostream>
using namespace std ;


class Node{
	public:
		int data ;
		Node* next ;
	
	Node(int data){
		
		this -> data = data ;
		this -> next = NULL ;
		
	}
	
	
};

int main(){
	// creating Node_one 
/*	Node * node_one = new Node ;
	node_one -> data = 1 ;
	node_one -> next = NULL ;
	
	Node * node_two = new Node ;
	
	node_one -> next = node_two ;
	
	
	node_two -> data = 2 ;
	node_two -> next = NULL ;
	
	Node* node_three = new Node ;
	
	node_two -> next = node_three ;
	
	node_three -> data = 3 ;
	node_three -> next = NULL ;
	
	cout << node_one -> data << "-> " << node_two -> data << "-> " << node_three -> data << " " ;*/
	
	Node * node_one = new Node(1) ;
//	cout << "The Node data is --> " << node_one -> data << endl ;
	Node * node_two  = new Node(2) ;
	node_one -> next = node_two ;
	
//	cout << "Node one -> next " << node_one -> next << " " << endl;
//	cout << "The Node_two is " << node_two <<  endl ;
	Node* node_three = new Node(3) ;
	node_two -> next = node_three ;
	
	cout << "Node two -> next " << node_two -> next << " " << endl;
	cout << "The Node_three is " << node_three <<  endl ;
	
	return 0 ;
}
