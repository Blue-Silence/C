
struct node
    {
        struct node * next;
        void * item;
    };

void * get(struct node * node){
    return node->item;
}

struct node * del(struct node * node){  
    struct node * x = node->next;
    free(node->item);
    free(node);
    return x;
}
    
struct node * push(struct node * node,void * item){
    struct node *  newnode = (struct node *  )malloc(sizeof (struct node));
    newnode->next=node;
    newnode->item=item;
    return newnode;
}
