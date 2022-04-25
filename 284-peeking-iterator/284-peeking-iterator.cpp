class PeekingIterator : public Iterator {
public:
    int num;
    PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        num = -1;
 }

    // Returns the next element in the iteration without advancing the iterator.
    int peek() {
        // If num is not -1, then return the num value
        if (num != -1) return num;

        // Store the next value in num and return it
        num = next();
        return num;
    }

    // hasNext() and next() should behave the same as in the Iterator interface.
    // Override them if needed.
    int next() {
        // If num is not -1, then return value of num and make num as -1
        if (num != -1) {
            int temp = num;
            num = -1;
            return temp;
        }

        // If num is -1, then take the next element from the Iterator
        return Iterator::next();
    }

    // Return true the iterator has next element
    bool hasNext() const {
        return (num != -1 || Iterator::hasNext());
    }
};