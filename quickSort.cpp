#include<bits/stdc++.h>
using namespace std;
inline vector<long long>add(vector<long long>leftArray,long long pivot,vector<long long>rightArray){
    vector<long long>ans;
    leftArray.push_back(pivot);
    while(leftArray.size()>0 and rightArray.size()>0){
        if(leftArray[0]<rightArray[0]){
            ans.push_back(leftArray[0]);
            leftArray.erase(leftArray.begin());
        }
        else {
            ans.push_back(rightArray[0]);
            rightArray.erase(rightArray.begin());
        }
    }
    while(!leftArray.empty()){
        ans.push_back(leftArray[0]);
        leftArray.erase(leftArray.begin());
    }
    while(!rightArray.empty()){
        ans.push_back(rightArray[0]);
        rightArray.erase(rightArray.begin());
    }
    return ans;
}
vector<long long> quickSort(vector<long long>&array){
    if(array.size()<2)return array;
    vector<long long> leftArray,rightArray;
    long long pivot=array[array.size()-1];
    for(long long i=0;i<array.size()-1;i++){
        if(array[i]<pivot){
            leftArray.push_back(array[i] );
        }else{
            rightArray.push_back(array[i]);
        }
    }
    return add(quickSort(leftArray),pivot,quickSort(rightArray));
}
int main(){
    vector< long long> array={1,2,3,4,5,6,7,3,2,2,4,4,5,32,2,23,4,423,4,8,4,0};
    for(auto&it: quickSort(array))cout<<it<<' ';
    // quickSort()
}