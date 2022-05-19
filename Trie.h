#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <unistd.h>
#include <conio.h>

#define ALPHABETS 26

using namespace std;

class TrieNode // for creating trie data structure for dictionary implementation
{
    string meaning;
    TrieNode *children[ALPHABETS];
    friend class Dictionary;

public:
    TrieNode(); // constructor
};

class Dictionary
{
    TrieNode *root;

public:
    Dictionary();
    bool isEmpty(TrieNode *);
    TrieNode *removeUtil(TrieNode *, string, int);
    TrieNode *clearDictionary(TrieNode *);
    void remove(string);
    void insert(string, string);
    void search(string);
    void autoComplete(TrieNode *, string, vector<string> &);
    ~Dictionary();
};