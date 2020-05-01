// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    long long isbad(long long low,long long high)
    {
        long mid=(low+high)/2;
        if(low==high)
            return low;
        bool m1=isBadVersion(mid);
        bool m2=isBadVersion(mid-1);
        //it is the bad version
            if(m1 && !m2)
                return mid;
        // it is after the bad version
            else if(m1 && m2)
                return isbad(low,mid-1);
        // it is before the bad version
            else
                return isbad(mid+1,high);
            
            
        
    }
    long long firstBadVersion(long long n) {
        return isbad(1,n);
    }
};
