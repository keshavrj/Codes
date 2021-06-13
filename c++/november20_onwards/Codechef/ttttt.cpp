#include<bits/stdc++.h>
#define ll long long int
using namespace std;  
class Shape {                                        //  base class  
    public:    
virtual void draw(){                             // virtual function  
cout<<"drawing..."<<endl;      
    }        
};     
class Rectangle: public Shape                  //  inheriting Shape class.  
{      
 public:    
 void draw()      
   {      
       cout<<"drawing rectangle..."<<endl;      
    }      
};    
class Circle: public Shape                        //  inheriting Shape class.  
  
{      
 public:    
 void draw()      
   {      
      cout<<"drawing circle..."<<endl;      
   }      
};
class Animal {                                          //  base class declaration.  
    public:    
    string color = "Black";      
};     
class Dog: public Animal                       // inheriting Animal class.  
{      
 public:    
    string color = "Grey";      
};   
int fn(int x,int y)
{
    if(x<y) return fn(y,x);
    else if (y)
    {
        int z=fn(x,y-1);
        z+=x;
        return z;

    }
    return 0;
}


int main() {   
freopen("input1.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

int num=4;
num= 45>23? :3;
cout<<num<<endl;
}