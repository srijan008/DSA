class Solution
{
    public:

    
   vector<int> verticalOrder(Node *root) {
    map<int, map<int, vector<int>>> node;
    queue<pair<Node*, pair<int, int>>> q;
    q.push(make_pair(root, make_pair(0, 0)));
    vector<int> ans;

    while (!q.empty()) {
        pair<Node*, pair<int, int>> temp = q.front();
        q.pop(); 
        Node* frontNode = temp.first;
        int hd = temp.second.first;
        int ver = temp.second.second;
        node[hd][ver].push_back(frontNode->data); 
        if (frontNode->left) {
            q.push(make_pair(frontNode->left, make_pair(hd - 1, ver + 1)));
        }
        if (frontNode->right) {
            q.push(make_pair(frontNode->right, make_pair(hd + 1, ver + 1)));
        }
    }

    for (auto i : node) {
        for (auto j : i.second) {
            for (auto k : j.second) {
                ans.push_back(k);
            }
        }
    }

    return ans;
}
};
