#include<bits/stdc++.h>
using namespace std;
inline long long findMin(long long i,vector<long long>&array){
    long long min=array[i],index=i;
    for(long long j=i;j<array.size();j++){
        if(array[j]<min){
            min=array[j];
            index=j;
        }
    }
    return index;
}
void selectionSort(vector<long long>&array){
    for(long long i = 0;i<array.size()-1;i++){
        long long minIndex = findMin(i,array);
        if(minIndex!=i){
            swap(array[i],array[minIndex]);
        }
    }
}
int main(){
    vector< long long> array={1,2,3,4,5,6,7,3,2,2,4,4,5,32,2,23,4,423,4,8,4,0};
    selectionSort(array);
    for(auto&it:array)cout<<it<<' ';
}