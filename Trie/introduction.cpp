// introduction to trie data structure 

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <string> 
#include <map>
#include <set> 
//#include <bits/stdc++.h>

#define vi vector<int>
#define vvi vector <vi> 
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second
#define setbits(x) builtin_popcount(x)

using namespace std;

class trie{

    public: 

    class node{

    public :

       bool end;
       node* next[26];

       node(){

        end = false ;
        rep(i,0,26){

            next [i] = NULL;
        }
       }
    };
    node* trie;
   
    trie(){

        trie = new node();
    }


    void insert(string word){

        int i=0;
        node* it = trie ;
        while( i<word.size()){

            if(next[word[i]-'a']==NULL){

                next[word[i] - 'a'] = new node();
            }
            it = it->next[word[i] -'a'];
            i++;
        }
        end = true;
    }

    bool search(string word){

        int i= 0;
        node* it = trie;

        while(i<word.size()){

            if(it->next[word[i]-'a'] == NULL){

                return false;
            }
            it = it ->next [word[i] - 'a'];
            i++;
        }

        return it -> end;
    }

};

int main(){

    trie mytrie = new trie;

    vi words = { " soham " , " piprotar"};

    // write all operation here ;
}