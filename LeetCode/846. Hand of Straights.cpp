class Solution
{
public:
    bool isNStraightHand(vector<int>& hand, int groupSize)
    {
        map<int, int> mp;
        if(hand.size()%groupSize!=0)
        {
            return false;
        }
        else
        {
            for(int i=0; i<hand.size(); i++)
            {
                mp[hand[i]]++;
            }
            bool res = true;
            for(auto it=mp.begin(); it!=mp.end(); )
            {
                if(it->second!=0)
                {
                    int i = 0;
                    while(i<groupSize)
                    {
                        if(mp[it->first + i]<=0)
                        {
                            return false;
                        }
                        else
                        {
                            mp[it->first + i]--;
                        }
                        i++;
                    }
                }
                if(it->second == 0)
                {
                    it++;
                }
            }
            return res;
        }
    }
};
