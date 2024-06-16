#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
class solution{
    public:
    vector<int>twosum (vector<int>& nums,int target){
    map<int,int>map;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int num=nums[i];
        int needed=target-num;
        if(map.find(needed)!=map.end()){
            return {map[needed],i};
        }
        map[num]-i;
    }
return {-1,-1};
    }
};