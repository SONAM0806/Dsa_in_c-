#include<iostream>
using namespace std;
class student { //student is a new data type.
    public:
    string name;
    int roll;
    float cgpa;

};
void print(student s){
    cout<<s.name<<" "<<s.roll<<" "<<s.cgpa<<endl;
}

void change(student s){
    s.name = "abc";
}
 
void changeeee(student& s){
    s.name = "abc";
}
int main (){
    student s1;
    s1.name = "Sonam Kumari"; //heare . is known as dot operator.
    //s1.roll = 6;
    s1.cgpa = 9.41;
    cin>>s1.roll;

    //print(s1);
    //change(s1);//  pass by value
    //print(s1);
    
    print(s1);
    changeeee(s1);  // pass by reference
    print(s1);

    //student s2;
    //s2.name = "xyz";
    //s2.roll = 680;
    //s2.cgpa = 8.41;

    //cout<<s1.name<<" "<<s1.roll<<" "<<s1.cgpa<<endl;
    //cout<<s2.name<<" "<<s2.roll<<" "<<s2.cgpa<<endl;
//print(s1);
//print(s2);

}
