#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

// This program demonstrates different ways of inserting values into hash maps
int main()
{
   //Method 1: Directly inserting key value pair in map

  map<int,int> m1{ {1,2} , {2,3} , {3,4} };
  
  //Method 2:creates a map with keys of type character and values of type integer
      
  map<string,int> m2; 

    m2["abc"]=100;    // inserts key = "abc" with value = 100
    m2["b"]=200;      // inserts key = "b" with value = 200
    m2["c"]=300;      // inserts key = "c" with value = 300
    m2["def"]=400;    // inserts key = "def" with value = 400
    
//Method 3: Explicitly inserting one pair at a time inside hash map 
 map<string,int> m3;
 m3.insert{make_pair("Apple", 20); 
 
 //Method 4: Implicitly inserting one pair at a time inside hash map 
  map<string,int>m4;
  pair<string,int>p;
  p.first="Mango";
  p.second=200;
  m4.insert(p);
return 0;
}
