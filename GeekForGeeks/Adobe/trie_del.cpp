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

bool IsLeafNode (TrieNode *node)
{
	return node->is_last!=false;		//is last node -> returns true
}
bool isItFreeNode(trie_node_t *pNode)
{
    
    for(int i = 0; i < 26; i++)
    {
        if( pNode->child[i] )
            return false;
    }
 
    return true;
}

int leafNode(trie_node_t *pNode)
{
    return (pNode->value != 0);
}
bool del(TrieNode *root , string str , int level , int length)
{
	if(root)
	{
		if(length==level)
		{
			if(root->is_last==true)
			{
				root->is_last=false;
				if(isItFreeNode(root)==true)
				{
					return true;
				}

				return false;
			}
		}
		else 
		{
			int index = ((int)str[level] - (int)'a');
			if(del(root->child[index],str,level+1,length))
			{
				free(root->child[index]);
				root->child[index] = NULL;
				return(!leafNode(root)&&isItFreeNode(root));

			}
		}
	}
	return false;
}
void del_trie (TrieNode *root , string str)
{
	int str_len = str.length();

	if(str_len>0)
	{
		del(root, str , 0 , str_len);
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
    
    //Delete given string 
    string str = "the";
    del_trie(root,str);


	return 0 ;
}