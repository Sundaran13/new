class Solution {
public:
    bool comp(pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        vector<pair<int,int>>v;
        for(int i=0;i<pairs.size();i++){
            v.push_back({pair[i][0],pair[i][1]});
        }
        sort(v.begin(),v.end(),comp);
        int i=0;
        int j=1;
        int c=1;
        int lv=v.size();
        while(j<lv){
            if(v[i].second<v[j].first){
                c++;
                i=j;
                j++;
            }
            else j++;
        }
        return c;
    }
};
