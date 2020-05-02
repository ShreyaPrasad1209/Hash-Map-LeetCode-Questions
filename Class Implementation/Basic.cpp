#include <iostream>
using namespace std;

template<typename T>;
class Node
{
    public:
    string key;
    int value;
    Node* next;
    Node(string key, int val)
    {
       this->key=key;
       value=val;
       next=NULL;
    }
    ~Node()
    {
        if(next!=NULL)
        {
           delete Node; 
        }
        
    }
};

class HashTable
{
    Node<T>**table;   //array of pointers
    int table_size;
    int curr_size;
    
    int HashFunc(string key)
    {
        int idx=0;
        int p=1;
        for(int i=0;i<key.length();i++)
        {
            idx+= (key[i]*p)%table_size;
            idx=idx%table_size;
            p=(p*27)%table_size;
        }
        return idx;
    }
    
    public:
    HashTable(int ts)
    {
        table_size=ts;
        table= new Node<T>**(table_size);   //pointer to an array of pointers
        curr_size=0;
        for(int i=0;i<table_size;i++)
        {
            table[i]=NULL;
        }
        
    }
    
    void insert(string key, int val)
    {
       int idx=HashFunc(string key);         //Separate Chaining Method used for managing collision
       Node* n=new Node<T>*(key,val);
       n->next=table[idx];
       table[idx]=n;
       curr_size++;
    }
    
    T search()
    {
        
    }
    
    
}

int main()
{
    

    return 0;
}
