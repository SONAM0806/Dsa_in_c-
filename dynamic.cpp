/*#include<iostream>
#include <string>
using namespace std;
int main(){
    int* ptr=new int(5245);
    cout<<*ptr<<endl;
}*/
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
    cricketer* c2 = new cricketer("rohit sharma", 18000,47.2);
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;       // object pointer
    
}