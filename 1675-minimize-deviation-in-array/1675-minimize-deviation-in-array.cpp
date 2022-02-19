class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
priority_queue<int> pq;

	int minn = INT_MAX;

	for(auto i:nums)
	{
		if(i%2==1)
			i*=2;
		minn = min(minn,i);
		pq.push(i);
	}

	int diff = INT_MAX;

	while(pq.top()%2==0)
	{
		int mx = pq.top();
		pq.pop();
		diff = min(diff,mx-minn);
		minn=min(minn,mx/2);
		pq.push(mx/2);
	}


	return min(diff,pq.top()-minn);
    }
};