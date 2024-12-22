class Solution {
public:
    int scoreOfString(string s) {
        int a = 0 ,sum =0;
        for(int i=0 ; i< s.length()-1;i++)
        {
            a=s[i+1] -s[i];
            if(a<0)
            {
                a=a*(-1);
            }
            sum+=a;
        }
        return sum ;
    }

};