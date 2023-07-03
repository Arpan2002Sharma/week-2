#include<iostream.h>
using namespace std;

class student{

   string passcode;
   friend class bestfriend;

   protected:

   int age;

   public:
  
   string name;
   int id;

   student(){
   
   }

   student()(string s,int a,string n,int i){
      passcode = s;
      age = a;
      name=n;
      id=i;
   }

   void into(){
       cout<<"my name is "<<name<<", my id is"<<id<<"password is "<<passcode<<endl;
   }

   
    void setPass()(string s,int a,string n,int i){
    passcode = s;
    age = a;
    name=n;
    id=i;
   }


   friend void hacker(student s);
};

void hacker(student s){
  cout<<s.passcode<<" "s.age<<endl;
}

class bestfriend{
  
    public:

    void sharingSecret(student s){
      cout<<s.passcode<<" "<<s.age<<endl;
    }

};

int main(){

student s1("0001",10,"Mohit",1);
student s2;
s2 = s1;


int a =10;
int *ptri = &a;

student *ptrs= &s1;
cout<<ptrs->name<<endl;
 
//s1.setPass("0001",10,"Mohit",1);
//s1.name = "Mohit";

//bestfriend bff;
//hacker(s1);

return 0;
} 

   