#include<iostream>
using namespace std;

struct TrieNode
{
	struct TrieNode *child[26];
	bool is_last;
	int count;
	string char_till_now;
	
};

TrieNode* getNode()
{
	TrieNode *r = new TrieNode;
	r->is_last=false;
	r->count=0;
	r->char_till_now="";
	for ( int i = 0 ; i < 26 ; i ++)
		r->child[i]=NULL;
	return r;

}

void insert (TrieNode *root , string key )
{
	TrieNode *temp = root;
	int wordSize = key.length();
	string temp_text="";

	for ( int i = 0 ; i < wordSize; i ++)
	{
		int index = key[i]-'a';
		if(!temp->child[index])		//No Child Exists
		{
			temp->child[index]=getNode();
		}
		temp_text = temp_text + key[i];
		temp= temp->child[index];
	}

temp->is_last=true;
temp->count++;
temp->char_till_now = temp_text;

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
    		// char add= i+'a';
    		// key = key+add;
    		key = temp->child[i]->char_till_now;
    		maxcnt = temp->child[i]->count;
    	}
    	    find(temp->child[i],maxcnt,key);

    }

}



int main()
{

	string input_chars[] = {"there","the","the","anki","the"};
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