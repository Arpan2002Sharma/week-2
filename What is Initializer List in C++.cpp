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

   //student(string passcode,string name,int id: name(name),passcode(passcode),id(id)
   //{
   //}


   void into(){
       cout<<"my name is "<<name<<", my id is"<<id<<"password is "<<passcode<<endl;
   }

   
    void setPass()(string s,int a,string n,int i){
    passcode = s;
    age = a;
    name=n;
    id=i;
   }

 ~student(){
 }
//delete

};

int main(){

student s1;
student s2("0001",10,"Mohit",1);
student s3;
s3 = s2;



//s3+s2;
//int a =10;
//int *ptri = &a;
//student *ptrs= &s2;
//cout<<ptrs->name<<endl;


return 0;
} 


//dest.cpp (Program No. 2)

#include<iostream.h>
using namespace std;

int i;

class A
{
public:
 ~A()
 {
   i=10;
 }
};

int foo()
{
 i=3;
 A ob;
 return i;
}

int main()
{
  cout<< foo()<<endl;
  return 0;
}

   