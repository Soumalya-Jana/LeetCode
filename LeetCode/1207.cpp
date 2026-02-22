// 1207. unique number of occurrences
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>counts;
        for(auto num: arr){
            counts[num]++;
        }
        unordered_set<int>s;
        for(auto num: counts){
            s.insert(num.second);
        }
        return counts.size()==s.size();
    }
};