class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == dividend) {
            return 1;
        }

        // Handling overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        bool sign = (dividend > 0) == (divisor > 0);
        long n = labs(dividend);
        long d = labs(divisor);
        long quotient = 0;

        while (n >= d) {
            long temp = d;
            long multiple = 1;
            while (n >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            quotient += multiple;
            n -= temp;
        }

        return sign ? quotient : -quotient;
    }
};
