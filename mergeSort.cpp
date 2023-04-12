#include<bits/stdc++.h>
using namespace std;
vector<long long >merge(vector<long long >leftArray, vector<long long>rightArray){
    vector<long long>ans;
    long long i=0,j=0;
    while(i<leftArray.size() && j<rightArray.size()){
        if(leftArray[i]<rightArray[j]){
            ans.push_back(leftArray[i++]);
        }
        else{
            ans.push_back(rightArray[j++]);
        }
    }
    while(i<leftArray.size()){
        ans.push_back(leftArray[i++]);
    }
    while(j<rightArray.size()){
        ans.push_back(rightArray[j++]);
    }
    return ans;
}
vector<long long>mergeSort(vector<long long>& array){
    if(array.size()<2)return array;
    vector<long long>leftArray(array.size()/2);
    vector<long long>rightArray(array.size()-leftArray.size());
    for(long long i=0;i<array.size();i++){
        if(i<leftArray.size()){
            leftArray[i]=array[i];
        }
        else{
            rightArray[i-leftArray.size()]=array[i];
        }
    }
    return merge(mergeSort(leftArray),mergeSort(rightArray));
}
int main(){
    vector< long long> array={1,2,3,4,5,6,7,3,2,2,4,4,5,32,2,23,4,423,4,8,4,0};
    for(auto&it: array)cout<<it<<' ';
    cout<<endl;
    for(auto&it:mergeSort(array))cout<<it<<' ';
}