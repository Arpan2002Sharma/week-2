// class.cpp

// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class student{

    string passcode;
    // int,char,string,float...
    public :
    string name;
    int id;

    void into(){
        cout<<"My name is "<<name<<" ,my id is "<<id<<"passcord is "<<passcode<<endl;
    }

    void setPass(string s){
        passcode = s;

    }

};

int main(){

    student s1;
    s1.name = "Mohit";
    s1.id = 1;
    s1.setPass("0001");
    s1.into();
    // s1.passcode = "001";

    return 0;
}

//friend.cpp

// #include<iostream>
#include<bits/stdc++.h>

using namespace std;

class student{

    string passcode;

    protected:

    int age;

    // int,char,string,float...
    public :
    string name;
    int id;

    void into(){
        cout<<"My name is "<<name<<" ,my id is "<<id<<"passcord is "<<passcode<<endl;
    }

    void setPass(string s,int a){
        passcode = s;
        age = a;
    }

    friend void hacker(student s)
    // friend class bestfriend;

};

void hacker(student s){
    cout<<s.passcode<<" "<<s.age<<endl;

}

class bestfriend{
    
    public:

    void sharingSecret(student s){
        cout<<s.passcode<<" "<<s.age<<endl;

    }
};

int main(){

    student s1;
    s1.setPass("0001",10);

    bestfriend bff;
    // bff.sharingSecret(s1);
    hacker(s1);

    // s1.passcode = "001";

    return 0;
}