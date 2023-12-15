class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string destination;
        unordered_map<string, string> path;
        unordered_map<string, string>:: iterator p;

        for(auto it: paths){
            path[it[0]] = it[1];
        }

        p = path.begin();
        destination = p->first;

        while(path.count(destination)!=0){
            destination = path[destination];
        }

        return destination;
    }
};
