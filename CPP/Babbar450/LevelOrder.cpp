vector<int> levelOrder(Node * node){
    if(node==nullptr)return vector<int>();
    queue<Node*>q;
    vector<int>vec;
    q.push(node);
    while(!q.empty()){
        if(q.front()->left!=nullptr)q.push(q.front()->left);
        if(q.front()->right!=nullptr)q.push(q.front()->right);
        vec.push_back(q.front()->data);
        q.pop();
    }
    return vec;
}

modified level order-->change direction of printing after every two levels
void modifiedLevelOrder(struct Node* node)
{
    // For null root
    if (node == NULL)
        return;
 
    if (node->left == NULL &&
                      node->right == NULL)
    {
        cout << node->data;
        return;
    }
 
    // Maintain a queue for normal
    // level order traversal
    queue<Node*> myQueue;
 
    /* Maintain a stack for printing nodes in reverse
       order after they are popped out from queue.*/
    stack<Node*> myStack;
 
    struct Node* temp = NULL;
 
    // sz is used for storing the count
    // of nodes in a level
    int sz;
 
    // Used for changing the direction
    // of level order traversal
    int ct = 0;
 
    // Used for changing the direction
    // of level order traversal
    bool rightToLeft = false;
 
    // Push root node to the queue
    myQueue.push(node);
 
    // Run this while loop till queue got empty
    while (!myQueue.empty())
    {
        ct++;
 
        sz = myQueue.size();
 
        // Do a normal level order traversal
        for (int i = 0; i < sz; i++)
        {
            temp = myQueue.front();
            myQueue.pop();
 
            /*For printing nodes from left to right,
            simply print the nodes in the order in which
            they are being popped out from the queue.*/
            if (rightToLeft == false)
                cout << temp->data << " ";           
 
            /* For printing nodes
            from right to left,
            push the nodes to stack
            instead of printing them.*/
            else
                myStack.push(temp);           
 
            if (temp->left)
                myQueue.push(temp->left);
 
            if (temp->right)
                myQueue.push(temp->right);
        }
 
        if (rightToLeft == true)
        {
 
            // for printing the nodes in order
            // from right to left
            while (!myStack.empty())
            {
                temp = myStack.top();
                myStack.pop();
 
                cout << temp->data << " ";
            }
        }
 
        /*Change the direction of printing
        nodes after every two levels.*/
        if (ct == 2)
        {
            rightToLeft = !rightToLeft;
            ct = 0;
        }
 
        cout << "\n";
    }
}