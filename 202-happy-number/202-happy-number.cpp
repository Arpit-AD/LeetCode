class Solution {
public:
    bool isHappy(int n) {
        int d = floor(log10(n) +1);   //Shortcut to count digits in a number
		if(n == 7) return true;
		if(d == 1) {
			if(n == 1) 
				return true;
			else 
				return false;
		}

		int sum = 0, rem = 0;

		while(n != 0){
			rem = n % 10;
			sum += (rem*rem);
			n /= 10;
		}

		return isHappy(sum);
    }
};