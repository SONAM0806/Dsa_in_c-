//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,5,2,7,8};
    int product = 1;
    for(int i=0; i<5; i++){
        product=product*arr[i];
    }
    cout<<"product of elements of given array: "<<product;

}

