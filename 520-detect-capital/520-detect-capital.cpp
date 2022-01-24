class Solution {
public:
    bool detectCapitalUse(string word) {
        int k=0;
        for(int i=0;i<word.size();i++)
        {
            if(isupper(word[i]))
                k++;
        }
        if(k==word.size())
            return true;
        if(k==0)
            return true;
        if(k==1 && isupper(word[0])!=0)
            return true;
        return false;
    }
};