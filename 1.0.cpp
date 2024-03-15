class Solution
{
    public:
    // your task is to complete this function
    void sort(Node **head)
    {
         // Code here
        priority_queue<int, vector<int>, greater<int>> pq;
        Node* node = *head;
        
        while (node != nullptr) {
            pq.push(node->data);
            node = node->next;
        }
        
        node = *head;
        while (!pq.empty()) {
            node->data = pq.top();
            pq.pop();
            node = node->next;
        }
    }
};