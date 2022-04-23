class Solution {
public:
unordered_map<string,string> m; 
    // Encodes a URL to a shortened URL.
    string encode(string l) {
        int x=0;
        for (int i = 0; i < l.size(); i++)
        {
            x+=(int(l[i]));

        }

        m.insert({to_string(x),l});
        return to_string(x);
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string s) {
        return m[s];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));