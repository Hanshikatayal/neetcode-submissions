class Solution {
public:
    double combo(double x, long long n) {
        if(n==0)return 1;
        if(n==1)return x;
        if(n<0) return combo(1/x,-n);
        double y=combo(x,n/2);
        if(n%2==0) return y*y;
        return x*y*y;
    }
    double myPow(double x,int n){
        return combo(x,(long long)n);
    }
};
