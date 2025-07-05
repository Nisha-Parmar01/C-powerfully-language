#include <iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
class LinkedList{
	Node*head;
	public:
	 LinkedList(){
	 	head=NULL;
	 }
	 void Insert(int data){
	 Node* newNode = new Node(data);
	 	newNode->next=head;
	 	head=newNode;
	 	cout<<"Inserted"<<data<<endl;
	 }
	 void search(int key){
	 	Node*tem=head;
	 	int pos=1;
	 	
	 	while(tem!=NULL){
	 		if(tem->data==key){
	 			cout<<"found "<<key<<" position"<<pos<<endl;	
	 			return;
			 }
			 tem=tem->next;
			 pos++;
		 }
		 cout<<"key"<<key<<"not found"<<endl;
	 }
		void delete_Node(int key){
		    if(head == NULL){
		        cout << "List is empty" << endl;
		        return;
		    }
		    if(head->data == key){
		        Node* todelete = head;
		        head = head->next;
		        delete todelete;
		        cout << "Deleted " << key << " from head" << endl;
		        return;
		    }
		    Node*prev=NULL;
		    Node*curr=head;
		
		    while(curr!=NULL&&curr->data!=key){
		        prev=curr;
		        curr=curr->next;
		    }
			if(curr==NULL){
		        cout<<" Key "<<key<<" not found "<<endl;
		        return;
		    }
		
		    prev->next = curr->next;
		    delete curr;
		    cout << "Deleted node with key: " << key << endl;
		}
			void reverse(){
				        Node* prev = NULL;
	        Node* current = head;
	        Node* next = NULL;
	
	        while (current != NULL) {
	            next = current->next; 
				current->next = prev;    
	            prev = current;          
	            current = next;          
	        }
	
	        head = prev;
	        cout << "List reversed"<<endl;
			}
};
int main(){
	int choice,data,size;
	LinkedList list;
     while(1){
     	cout<<"--------Menu--------"<<endl;
     	cout<<"press 1 Insert at Beginning"<<endl;
     	cout<<"press 2 Search"<<endl;
     	cout<<"press 3 Delete"<<endl;
     	cout<<"press 4 Reverse List"<<endl;
     	cout<<"press 5 Exit"<<endl;
     	cout<<"Enter the choice:"<<endl;
     	cin>>choice;
     	if(choice==5){
     		cout<<"----------Thank you-----------"<<endl;
     		break;
		 }
		 switch(choice){
		 	case 1:
		 		cout<<"Enter the data:";
		 		cin>>data;
		 		list.Insert(data);
		 		cout<<"-------Insert sucessfully--------"<<endl;
		 		break;
		 	case 2:
		 		cout<<"Enter the key:";
		 		cin>>data;
		 		list.search(data);
			 break;
			case 3:
				cout<<"Enter the data:";
				cin>>data;
				list.delete_Node(data);
				cout<<"-----------delete sucessfully---------"<<endl;
			break;
			case 4:
				list.reverse();
			break;
			default:
			cout<<"------Invalide choice ------"<<endl;	
		 }
	 }	
	 return 0;
}
