#include<bits/stdc++.h>
using namespace std;
inline vector<long long>add(vector<long long>leftArray,long long pivot,vector<long long>rightArray){
    vector<long long>ans;
    leftArray.push_back(pivot);
    for(auto&it:leftArray)ans.push_back(it);
    for(auto&it:rightArray)ans.push_back(it);
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