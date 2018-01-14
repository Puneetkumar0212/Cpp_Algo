#include<iostream>
using namespace std;

struct TrieNode
{
	struct TrieNode *child[26];
	bool is_last;
};

TrieNode* getNode()
{
	TrieNode *r = new TrieNode;
	r->is_last=false;
	for ( int i = 0 ; i < 26 ; i ++)
		r->child[i]=NULL;
	return r;

}

void insert (TrieNode *root , string key )
{
	TrieNode *temp = root;
	int wordSize = key.length();

	for ( int i = 0 ; i < wordSize; i ++)
	{
		int index = key[i]-'a';
		if(!temp->child[index])		//No Child Exists
		{
			temp->child[index]=getNode();
		}
		temp= temp->child[index];
	}

temp->is_last=true;

}
int main()
{
	string input_chars[] = {"there","the"};
	int size = sizeof(input_chars)/sizeof(input_chars[0]);
	TrieNode *root = getNode();

	for (int i = 0; i < size; i++)
        insert(root, input_chars[i]);


	return 0 ;
}