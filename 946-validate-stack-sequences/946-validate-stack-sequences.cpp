class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int N = pushed.size();
        stack<int>s;

        int j = 0;
        for (int x: pushed) {
            s.push(x);
            while (s.size() != 0 && j < N && s.top() == popped[j]) {
                s.pop();
                j++;
            }
        }

        return j == N;
    }
};