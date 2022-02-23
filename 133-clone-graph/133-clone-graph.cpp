/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
       queue<Node*> q;
        unordered_map<int,Node*> v;
        if(!node) return nullptr;
        
        auto ans = new Node(node->val, node->neighbors);
        v[node->val] = ans;
        q.push(ans);
        
        while(!q.empty())
        {
            auto n = q.front();
            q.pop();
            for(auto& adj: n->neighbors)
            {
                if(v.find(adj->val) == v.end())
                {
                    v[adj->val] = new Node(adj->val, adj->neighbors);
                    q.push(v[adj->val]);
                }
                adj = v[adj->val];
            }
        }
        return ans;
    }
};