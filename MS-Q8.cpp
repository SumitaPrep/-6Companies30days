class Solution
{
public:
    // Function to connect nodes at same level.
    void connect(Node *root)
    {
        queue<Node *> q;
        q.push(root);
        vector<int> vec;
        vector<Node *> bfs;
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                Node *temp = q.front();
                bfs.push_back(temp);
                q.pop();
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            vec.push_back(size);
        }
        //   for(auto it : vec){
        //       cout << it << " ";
        //   }
        int idx = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            int value = vec[i];
            while (value != 0)
            {
                if (value == 1)
                {
                    bfs[idx]->nextRight = nullptr;
                }
                else
                {
                    bfs[idx]->nextRight = bfs[idx + 1];
                }
                idx++;
                value--;
            }

        } // Your Code Here
    }
};