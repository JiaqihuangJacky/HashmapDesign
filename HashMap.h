#ifndef _HASHMAP_H_
#define _HASHMAP_H_
#include <iostream>
#include <string>
using namespace std;

template<class Key , class Value , class HashFunc , class EqualKey>
class HashMap
{
    
private:    
    template<class _Key, class _Value>
    class HashNode
    {
    public:
        Key    _key;
        Value  _value;
        bool used;
    
        HashNode(_Key key, _Value value)
        {
            _key = key;
            _value = value;
            used = false;
        }
        ~HashNode()
        {
    
        }
        HashNode& operator=(const HashNode& node)
        {
            _key = node.key;
            _value = node.key;
            used = node.used;
            return *this;
        }
    };
 
private:
    HashNode<Key, Value> **table;
    unsigned int _size;
    Value ValueNULL;
public:
    HashFunc hash_value;
    EqualKey equal;
    int fixsize;
    int insize;
    float load();
    HashMap(int size);
    ~HashMap();
    bool set(const Key& key, const Value& value);
    Value& del(const Key& key);
    Value& get(const Key& key);
};


/*
return a float value representing the load factor 
((items in hash map)/(size of hash map)`) of the data structure. Since 
the size of the dat structure is fixed, this should never be greater than 1.
*/
template<class Key , class Value , class HashFunc , class EqualKey>
float HashMap<Key,Value,HashFunc,EqualKey>::load()
{
   return (float)insize / (float)fixsize;
}

/*
return an instance of 
the class with pre-allocated space for the given number of objects.
*/
template<class Key , class Value , class HashFunc , class EqualKey>
HashMap<Key,Value,HashFunc,EqualKey>::HashMap(int size) : _size(size)
{
    hash_value = HashFunc();
    equal = EqualKey();
    fixsize = size;
    insize = 0;
    table = new HashNode<Key, Value>*[_size];
    for (unsigned i = 0; i < _size; i++){
        table[i] = 0;
    }
}



template<class Key , class Value , class HashFunc , class EqualKey>
HashMap<Key,Value,HashFunc,EqualKey>::~HashMap()
{
    
    for (int i = 0; i < fixsize; i++){
        if(table[i]){
            HashNode<Key, Value> *temp = table[i];
            delete temp;
            table[i] = 0;
        }
    }
    delete table;
}

/*
stores the given key/value pair in the hash map. 
Returns a boolean value indicating success / failure of the operation.
*/
template<class Key , class Value , class HashFunc , class EqualKey>
bool HashMap<Key,Value,HashFunc,EqualKey>::set(const Key& key, const Value& value)
{
    
    int index = hash_value(key) %_size;

    //cout<<"Index is "<<index<<endl;
    if(table[index])  //the key-value's hash is unique
    {
        if(table[index]->used)
            return false;
    }

    HashNode<Key, Value> * node = new HashNode<Key, Value>(key,value);
    table[index] = node;
    table[index]->used = true;
    insize++;
    return true;
}

/*
delete the value associated with the given key, 
returning the value on success or null if the key has no value.
*/
template<class Key , class Value , class HashFunc , class EqualKey>
Value& HashMap<Key,Value,HashFunc,EqualKey>::del(const Key& key)
{
    int index = hash_value(key) %_size;
    HashNode<Key, Value> * node = table[index];
    if(node)
    {
        if (node->_key == key)
        {
            table[index]->used = 0;
            Value temp = node->_value;
            delete node;
            table[index] = 0;
            insize--;
            return temp;
        }
    }
    return  ValueNULL;
}

template<class Key , class Value , class HashFunc , class EqualKey>
Value& HashMap<Key,Value,HashFunc,EqualKey>::get(const Key& key)
{
    int index = hash_value(key) %_size;

    if (table[index] == NULL)
        return ValueNULL;
    else
    {
        HashNode<Key, Value> * node = table[index];
        
        if (!node->used || !equal(node->_key, key))
            return ValueNULL;
        else
            return node->_value;
    }
}
#endif