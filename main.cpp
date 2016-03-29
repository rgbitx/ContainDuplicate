#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


bool containsDuplicate(vector<int>& nums){

    if(nums.size()<2)
        return false;

    unordered_map<int,int> count;

    for(int i=0;i<nums.size();i++){

        count[nums[i]]++;
    }

    unordered_map<int,int>::iterator ite;

    for(ite=count.begin();ite!=count.end();ite++){

        if(ite->second>=2){
            return true;
        }
    }

    return false;


}


bool containsDuplicate1(vector<int>& nums){
    if(nums.size()<2)
        return false;

    unordered_map<int> s;

    for(int i=0;i<nums.size();i++){
        if(s.find(nums[i])==s.end())
            s.insert(nums[i])
        else{
            return true;
        }
    }

    return false;
}


int main() {
    cout << "Hello, World!" << endl;

    vector<int> nums={1,3,6,2,4};

    bool ret=containsDuplicate1(nums);

    if(ret) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    cout<<*nums.begin()<<endl;
    cout<<*nums.end()<<endl;

    return 0;
}