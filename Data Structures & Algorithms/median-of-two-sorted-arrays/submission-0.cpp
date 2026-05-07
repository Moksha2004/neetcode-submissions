class Solution {
public:
    int f(vector<int>& a, int m, vector<int>& b, int n, int k, int aStart, int bStart){
        if(m>n) return f(b,n,a,m,k,bStart,aStart);
        if(m==0) return b[bStart+k-1];
        if(k==1) return min(a[aStart],b[bStart]);
        int i=min(m,k/2);
        int j=min(n,k/2);
        if(a[aStart+i-1]>b[bStart+j-1]) return f(a,m,b,n-j,k-j,aStart,bStart+j);
        else return f(a,m-i,b,n,k-i,aStart+i,bStart);
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l=(nums1.size()+nums2.size()+1)/2;
        int r=(nums1.size()+nums2.size()+2)/2;
        return (f(nums1,nums1.size(),nums2,nums2.size(),l,0,0)+f(nums1,nums1.size(),nums2,nums2.size(),r,0,0))/2.0;
    }
};
