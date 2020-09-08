#ifndef Trie.hpp
#define Trie.hpp

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class TrieNode
{
public:
	vector<TrieNode*>child;
	bool isEnd;
public:
	TrieNode()
	{
		child.assign(26,NULL);
		isEnd = false;
	}
};

class Trie
{
private:
	TrieNode* root;
public:
	Trie()
	{
		root = new TrieNode();
	}
	void insert(string s)
	{
		TrieNode* track = root;
		for(int i =0;i<s.length();i++)
		{
			int index = s[i]-'a';
			if(!track->child[index])
				track->child[index] = new TrieNode();
			track = track->child[index];
		}
		track->isEnd = true;
	}
	void search(string s)
	{
		TrieNode* track = root;
		for(int i =0;i<s.length();i++)
		{
			int index = s[i] - 'a';
			if(!track->child[index])
				return false;
			track = track->child[index];
		}
		return (track && track->isEnd);
	}
};

