#include <iostream>
#include <cstdlib>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct TrieNode
{
	struct TrieNode *children[26];
	bool isEndOfWord;
};

struct TrieNode *getNode(){
	struct TrieNode *node = (struct TrieNode*)malloc(sizeof(struct TrieNode));
	node->isEndOfWord = false;

	for(int i=0;i<26;i++){
		node->children[i] = NULL;
	}

	return node;
}

void Insert(struct TrieNode *root, string key){
	struct TrieNode *p = root;

	for(int i=0;i<key.length();i++){

		int index = key[i] - 'a';

		if(!p->children[index]);
			p->children[index] = getNode();

		p = p->children[index];
	}

	p->isEndOfWord = true;
	
}

bool search(struct TrieNode *root, string key){
	struct TrieNode* p = root;

	for(int i=0;i<key.length();i++){
		int word = key[i] -'a';

		if(!p->children[word]){
			return false;
		}

		p = p->children[word];
	}
	return (p != NULL && p->isEndOfWord);
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	cin>>n;
	vector<string> keys;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		keys.push_back(s);
	}

	struct TrieNode *root = getNode();

	for (int i = 0; i < n; i++)
		Insert(root, keys[i]);

	cout<<"Constructed trie successfully"<<endl;
	int q;
	cin>>q;
	vector<string> query;
	for(int i=0;i<q;i++){
		string s;
		cin>>s;
		query.push_back(s);
	}

	for(int i=0;i<q;i++){
		bool flag = search(root,query[i]);

		if(flag){
			cout<<"Found "<<query[i]<<endl;
		} else {
			cout<<"Not found "<<query[i]<<endl;
		}
	}
	
	return 0;
}
