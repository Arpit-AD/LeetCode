class Solution {
public:
    double average(vector<int>& salary) {
         float max = *max_element(salary.begin(),salary.end());
        float min = *min_element(salary.begin(),salary.end());
        double sum = accumulate(salary.begin(),salary.end(),0);
        int len = salary.size() -2;
        return (sum-max-min)/len;
    }
};