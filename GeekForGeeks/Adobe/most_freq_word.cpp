#include<iostream>
using namespace std;

struct TrieNode
{
	struct TrieNode *child[26];
	bool is_last;
	int count;
	
};

TrieNode* getNode()
{
	TrieNode *r = new TrieNode;
	r->is_last=false;
	r->count=0;
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
temp->count=temp->count+1;

}

bool find(TrieNode*  temp, int& maxcnt, string& key)
{
    if (temp == NULL)
        return false;
 
    for(int i = 0 ; i < 26 ; i++)
    {
    	if(temp->child[i])			 

    	if(temp->child[i]->count>maxcnt)
    	{
    		key=i +'a';
    		maxcnt = temp->child[i]->count;
    	}
    	    find(temp->child[i],maxcnt,key);

    }
}



int main()
{

	string input_chars[] = {"there","the","okay","anki"};
	int size = sizeof(input_chars)/sizeof(input_chars[0]);
	TrieNode *root = getNode();

	//Insert All words 	
	for (int i = 0; i < size; i++)
        insert(root, input_chars[i]);
    
    //FIND MAX FREQ WORD
    int c=0;
   	string w;
   	find(root,c,w);
   	cout<<c<<w;

	return 0 ;
}