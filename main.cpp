#include <iostream>
#include <string>
#include "HashMap.h"
using namespace std;

//Hash function you provided must be correspond to the type of the Key
class HashFunc
{
public:
    int operator()(const string & key )
    {
        unsigned long _hash = 5381;
        int c = 0;
        for(int i = 0; i < key.length(); ++i){
            c =  key[i];
            _hash = _hash * 33 + c; /* _hash * 33 + c */
        }
        return _hash;
    }
};

//Equal function you provided to check whether two Keys are equal
//must be correspond to the type of the Key
class EqualKey
{
public:
    bool operator()(const string & A ,const string & B)
    {
        if(A.compare(B) == 0)
            return true;    //if equal return true
        else
            return false;    //else false
    }
};


int main()
{
    HashMap<string,string,HashFunc,EqualKey> hashmap(100);

    cout << "Inserting item into the hashmap" << endl;
    cout << "Inserting item A" << endl;
    hashmap.set("one", "A");
    if(!hashmap.set("one", "A"))
        cout << "Not allow duplicated inserting A" << endl;
    cout << "Inserting item B" << endl;
    hashmap.set("two", "B");
    cout << "Inserting item C" << endl;
    hashmap.set("third", "C");
    cout << "Inserting item D" << endl;
    hashmap.set("four", "D");
    cout << "Inserting item E" << endl;
    hashmap.set("five", "E");

    
    cout << endl;
    
    cout << "After insert:" << endl;
    if(hashmap.get("one") != "")
        cout << "Find:  " << hashmap.get("one").c_str() << endl;
    if(hashmap.get("two") != "")
        cout << "Find:  "<< hashmap.get("two").c_str() << endl;
    if(hashmap.get("third") != "")
        cout << "Find:  "<< hashmap.get("third").c_str() << endl;
    if(hashmap.get("four") != "")
        cout << "Find:  "<< hashmap.get("four").c_str() << endl;
    if(hashmap.get("five") != "")
        cout << "Find:  "<< hashmap.get("five").c_str() << endl;
    cout << endl;
    
    cout << "Looking for non-exit: new" << endl;
    if(hashmap.get("new") == "")
        cout << "Do not exist" << endl;
    else
        cout << "Find it:   "<< hashmap.get("new").c_str() << endl;

    cout << endl;

    cout << "Displaying the load factor:  " << endl;
    cout << "Size of Hashmap:   " << hashmap.fixsize<< endl;
    cout << "Size in Hashmap:   " << hashmap.insize<< endl;
    cout << "The load factor:   " << hashmap.load() << endl;
    
    cout << endl;
    cout << "Deleting five" << endl;
    if (hashmap.del("five") != "")
        cout << "remove is ok" << endl;    //remove is ok
    else //not exist print NULL
        cout << "Cannot find: " << "five" << endl;


    cout << endl;
    
    cout << "Deleting non-exist: new" << endl;
    if (hashmap.del("new") != "")
        cout << "remove is ok" << endl;    //remove is ok
    else //not exist 
        cout << "Cannot find: " << "new" << endl;

    cout << endl;
    cout << "Displaying the load factor after deleting:  " << endl;
    cout << "Size of Hashmap:   " << hashmap.fixsize<< endl;
    cout << "Size in Hashmap:   " << hashmap.insize<< endl;
    cout << "The load factor:   " << hashmap.load() << endl;
    return 0;
}