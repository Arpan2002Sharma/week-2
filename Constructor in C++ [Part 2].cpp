//class_to_basic.cpp

#include<iostream.h>
using namespace std;

class time{
   public:
   int hour;
   int min;

   time(int m){
        hour = m/60;
        min = m%60; 
   }

   void display(){
             cout<<hour<<" "<<min<<endl;
        }

     operator int(){
         return (this->hour*60)+m;
     }
  

};

int main(){
     
   time t(340);

   int time_to_min = (int)t;
   cout<<"time in mins is"<<time_to_min<<endl;

   return 0;
}



//class_to_class.cpp

#include<iostream.h>
using namespace std;

class uk
{
  public:
  int kms;
  int mts;

   void display()
   {
     cout<<kms<<"kms are" <<feet<<"feet"<<endl;
   } 
};

class us
{
   public:
   int miles;
   int feet;

   us(int m,int f)
   {
     miles = m;
     feet = f;
   }

   us(uk obj)
   {
     miles = obj.kms/1,6;
     feet = obj.mts/0.3;
   }

   void display()
   {
     cout<<miles<<"miles are" <<feet<<"feet"<<endl;
   } 

   operator uk()
   {
     uk duk;
     duk.km = miles*1.6;
     duk.mts = feet*0.3;

     return duk;

};


int main()
{
  us dus(5,10);

  uk duk;

  duk = (uk)dus;

  //us dus2 = duk;
  us dus2(duk);

  return 0;
}