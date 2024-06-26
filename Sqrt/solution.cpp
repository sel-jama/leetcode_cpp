class Solution {
public:
    int mySqrt(int x) {
        return sqrt(x);
    }
};

// int mySqrt(int x){
//     if(x==1||x==0)
//         return x;
//     int i=1,res=0;
//     while(res <= x)
//     {
//         i++;
//         res=i*i;
//     }
//     return --i;
// }