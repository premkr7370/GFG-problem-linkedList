void deleteNode(Node*curr){
      Node*temp=curr->next;
      curr->data=temp->data;
      curr->next=temp->next;
      delete temp;
}