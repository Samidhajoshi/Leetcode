/*
This is day 7 of solving daily leetcode problem
Problem 17 - Pow(x,n)
Problem link -https://leetcode.com/problems/powx-n/
*/
class Solution {
public:
    double myPow(double x, int n) {
        long long k = n;      
        if (k < 0) {
            x = 1 / x;
            k = -k;
        }

        double result = 1.0;
        while (k > 0) {
            if (k % 2 == 1) {  
                result *= x;
            }
            x *= x;           
            k /= 2;        
        }

        return result;
    }
};
/*

class Solution {
public:

    double myPow(double x, int n) {
        double pow=1;
      int  k=abs(n);
        while(k!=0){
            pow*=x;
            k--;
            } 
        if(n>=0)return pow;
        return 1/pow;
    }
  
};
*/
