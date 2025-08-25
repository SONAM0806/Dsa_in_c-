#include<iostream>
#include <string>
using namespace std;

class cricketer{
    public:
    string name;
    int runs;
    float avg;
    
    cricketer(string name , int runs , float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    
    
    void change(cricketer* c){
      c->avg=68.9;//(*c).avg=68.2
    }
};

int main(){
    cricketer c1("virat kohli", 25000,55.2);
    //cout<<c1.avg<<endl;
    //c1.change(&c1);
    //cout<<c1.avg<<endl;
    
    cricketer* p1=&c1;
    cout<<p1->runs<<endl;
    cout<<c1.avg<<endl;
    p1->avg=77.5;
    cout<<c1.avg<<endl;
    
}