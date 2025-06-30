class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        bool pos=false;
        for(int i=0; i<n; i++)
        {
            if(1>>i==n)
            {
                pos=true;
                break;
            }
        }
        return pos;
    }
};
