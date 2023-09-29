class Solution {
public:
    int mySqrt(int x) {
    if (x == 0)
            return x;
        int start = 1, end = x, mid;
        while (start <= end) {
            mid = start + (end - start) / 2;
            // mid * mid == x gives runtime error
            if (mid  == x / mid)
                return mid;
            else if (mid < x / mid) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return end;
    }
};