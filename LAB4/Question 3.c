//Write a Function to convert a singly linked list to an array
int *LinkedListToArray(struct Node* head){
    struct Node* current=head;
    struct Node* current1=head;
    // size of linked list
    int size_of_linkedlist=0;
    while(current!=NULL){
        current=current->next;
        size_of_linkedlist++;
    }

    int*array=(int*)malloc(size_of_linkedlist*sizeof(int));
    if(array==NULL){
        printf("Memory allocation failed!");
    }
    for (int i=0;i<size_of_linkedlist;i++){
        array[i]=current1->data;
        current1=current1->next;
    }
    for(int j=0;j<size_of_linkedlist;j++){
        printf(" %d ",array[j]);
    }
    return array;
}
