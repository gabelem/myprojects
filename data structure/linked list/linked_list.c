typedef struct node
{
    int val;
    struct node *next;
} node_t;


//print all items of a list
void print_list(node_t *head)
{
    node_t *current = head;

    while(current != NULL)
    {
        printf("%d\n", current->val);
        current = current->next;
    }
}

//"while" go to the last item of the list (NULL) and after that add the value 3, and add one more node on the list with NULL.
void push_end(node_t *head, int val)
{
    node_t *current = head;

    while(current->next != NULL)
    {
        current = current->next;
    }

    current->next = (node_t *) malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next; NULL;
}

/*1 - struct *new_node has been created
  2 - new_node got allocated dynamically
  3 - we set the value for this new_node via argument
  4 - new_node is now = *head??
  5 - and the head got the value of new_node??
  
  before?:
  (new_node)->(head)
  
  after?:
  (head)->(new_node)*/
void push_begin(node_t **head, int val)
{
    node_t *new_node;
    new_node = (node_t *) malloc(sizeof(node_t));

    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}


//
int pop(node_t **head)
{
    int retval = -1;
    node_t *next_node= NULL;

    if(*head == NULL)
    {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

//
int remove_last(node_t *head)
{
    int retval = 0;

    if(head->next == NULL)
    {
        retval = head->val;
        free(head);
        return retval;
    }
    
    node_t *current = head;
    while(current->next->next != NULL)
    {
        current = current->next;
    }
    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;
}
int main()
{
    node_t *head = NULL; //empty head
    
    head = (node_t *) malloc(sizeof(node_t)); // memory alloc

    if(head == NULL) //check if head is null
    {
        return 1;
    }

    head-> = 1; //head now have the int value = 1
    head->next = NULL //at the 1st moment the next node is NULL.

    head->next = (node_t *) malloc(sizeof(node_t)); //memory alloc of the next node after "head".

    head->next->val = 2;
    head->next->next = NULL; //3rd/last node NULL.
}