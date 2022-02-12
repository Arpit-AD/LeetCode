class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
     unordered_set<string> dict(wordList.begin(), wordList.end());
        map<string,bool> visited;
        queue<string> q;
        //for begin word entry in mp 
   
       q.push(beginWord);
       visited[beginWord]=true; 
       int count = 1; 
           
       while(!q.empty()){
           int sz = q.size();
           while(sz--){
               string temp = q.front();
               q.pop();
               if(temp == endWord){
                   return count;
               }
               
               for(int i=0;i<size(temp);i++){
                   char c = temp[i];
                   for(int j=0;j<26;j++){
                       temp[i] = 'a' + j;
                       if(dict.find(temp)!=dict.end() and !visited[temp]){
                           visited[temp]=true;
                           q.push(temp);
                       }
                       
                   }
                   temp[i] = c;
               }
           }
           count++;
       }
        
        return 0;
    }
};