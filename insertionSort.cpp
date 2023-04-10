#include<bits/stdc++.h>
using namespace std;
template <typename T>
void insertionSort(T &array,long long size,bool ascending=true) {
    for(long long i=1;i<size;i++) {
        auto valueToInsert = array[i];
        long long index=i;
        if(ascending){
            while(index!=-1 and valueToInsert<=array[index]) {
                array[index]=array[index-1];index--;
            }
        }else{
            while(index!=-1 and valueToInsert>=array[index]) {
                array[index]=array[index-1];index--;
            }
        }
        array[++index]=valueToInsert;
    }
}
int main(){
    long long array[]={1,2,3,4,5,6,7,3,2,2,4,4,5,32,2,23,4,423,4,8,4,0};
    insertionSort(array,22);
    for(auto&it: array)cout<<it<<' ';
    cout<<endl;
    insertionSort(array,22,false);
    for(auto&it: array)cout<<it<<' ';
    cout<<endl;
}