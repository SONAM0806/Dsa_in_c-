#include <iostream>
 using namespace std;
 int main(){
 int arr[5] = {1,2,3,4,5};
 int  min = INT8_MAX;
 for(int i=0;i<5;i++){
 if(min>arr[i]){
 min = arr[i];
    }
}
    cout << min;
 return 0;
 }