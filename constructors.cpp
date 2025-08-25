#include<iostream>
using namespace std;
class student { //student is a new data type.
    public:
    string name;
    int roll;
    float cgpa;
    
    student(){//  default constuctor

    }

    student(string s, int r, float g){  // parameterised constuctor
        name = s;  
        roll = r;
        cgpa = g;
    }

};


int main (){
    student s1("sonam kumari", 6, 9.41);
    //s1.name = "Sonam Kumari"; //heare . is known as dot operator.
    //s1.roll = 6;
   // s1.cgpa = 9.41;
    //cin>>s1.roll;

    
    student s2;
    s2.name = "xyz";
    s2.roll = 680;
    s2.cgpa = 8.41;

    cout<<s1.name<<" "<<s1.roll<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.roll<<" "<<s2.cgpa<<endl;
//print(s1);
//print(s2);

}
