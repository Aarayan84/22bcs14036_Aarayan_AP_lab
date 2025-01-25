class Solution{
public:
  void printlist(Node* head){
	Node* curr=head;
	while(curr!=nullptr){
		cout<<curr->data<<"->";
		curr->next;
	  }
  }
};
