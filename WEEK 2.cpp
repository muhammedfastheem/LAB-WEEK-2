//including the library
#include<iostream>
//loading library
using namespace std;
//creating linkedlist!
class Node{
	public:
	    //the parts of the linked list are
	    //one is the data stored and the second is the address

		int data;
		//creating the constructor
		Node * next;
		Node(){
			next = NULL;
		}
};

class Linkedlist{
	public:
	    //linklist which points to the chain of dates
		Node * head;
		//a linklist has several functions like inserting a node at the end of the linkedlist
		Node * tail;
		Linkedlist(){
			head=NULL;
			tail=NULL;
		}
		//creating a heap with the data stored
		//which is going to save its address
		void insrt(int no){

			Node * temp=new Node;
			temp->data=no;
            //mopving to the next address
            //applaying conditions
			if(head==NULL){
                //null is empty
				head=temp;
				tail=temp;
			}
			else{
			    //if linkedlist has atleast one node
				tail->next=temp;
				tail=temp;
			}
		}

        //inserting node at a specified location of linkedlist
		void insrtat(int pos,int no){
		    //creating unit in the heap with the data and address stored
			Node * current=head;
			int i=1;
			//while looping for changing the positions
			while(i<pos-1){
				i++;
				current=current->next;
			}
			Node * temp=new Node;
			temp->data=no;

			temp->next=current->next;
			//next points current node to temp
			current->next=temp;

		}
		//creating function to delete the last node
		void deleteit(){
			Node * temp=tail;
			//reaching the firtst position
			Node * current=head;
             //looping for changing location
			while (curnt->next!=tail){
			current=current->next;
			}
			//current points to null
			//now we are at the second last node
			//we store the last node address at current and points the second last ptr to null
			current->next=NULL;
			tail=current;

			delete temp;
		}
		//fuction for deleting at desired location
		void deleteat(int pos){
        //going to the desired location
		Node * current =head;
		int i=1;
		//while looping
		while(i<pos-1){
			i++;
			current=current->next;
		}
		Node * temp=current->next;
		//now the current holds the desired positions adress
		//we store the next node in current and points the current node to null
		current->next=current->next->next;
		delete temp;
		}
        //function to count the number of nodes in the linked list

		void countitems(){
		    //while looping for counting
			Node * current =head;
			int i=0;
			//while looping
			while(current!=NULL){
				current=current->next;
				i++;


			}
			//showing the counted number
			cout<<"The number of items are "<<i<<endl;
		}
		//displaying the created linkedlist
		void display(){
		    //changing the address to the next node after displaying
			Node * current=head;
			while(current!=NULL){
				cout<<current->data<<"->";
				current=current->next;
			}
			//the linkedlist ends with a null
			//showing null
			cout<<"NULL";
			cout<<endl;
		}
};

//main function
int main(){
	Linkedlist L1;
	L1.insrt(10);
	L1.insrt(11);
	L1.insrt(12);
	L1.insrt(14);
	L1.insrt(15);
	L1.insrt(16);
	L1.display();
	L1.insrtat(4,13);
	L1.display();
	L1.deleteit();
	L1.display();
	L1.deleteat(4);
	L1.display();
	L1.countitems();

    //terminating
	return 0;
    }

