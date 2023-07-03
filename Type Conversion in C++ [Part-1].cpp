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
};

int main(){
     int min_from_mid_night = 330;

     time t(min_from_mid_night);

     t.display();

   return 0;
}