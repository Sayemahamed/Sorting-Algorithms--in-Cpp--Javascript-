#include<bits/stdc++.h>
using namespace std;
// start of sorting function
template <typename T>
void bubbleSort(T& array,long long size,bool ascending=true) {
    for(long long i=0; i<size;i++){
        for(long long j=i+1; j<size;j++){
            // comparing elements
            if(array[i]>array[j]){
                if(ascending)
                swap(array[i],array[j]);
            }
            else{
                if(!ascending)
                swap(array[i],array[j]);
            }
        }
    }
}
// end of sorting function
int main(){
    long long array[]={1,2,3,4,5,6,7,3,2,2,4,4,5,32,2,23,4,423,4,8,4,0};
    bubbleSort(array,22);
    for(auto&it: array)cout<<it<<' ';
    cout<<endl;
    bubbleSort(array,22,false);
    for(auto&it: array)cout<<it<<' ';
}