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

void display(TrieNode *root,char str[], int level)
{
	//Add null incase last node (EOS)
	if(IsLeafNode(root))
	{
		str[level]='\0';
		cout<<str<<"\n";
	}
	
	for (int i = 0 ; i < 26 ; i ++)
	{
		if(root->child[i])		//if child exists 
		{
			str[level]= i+'a';
			display(root->child[i],str,level+1);//Recursively call display till EOS

		}
	}
}

bool search(TrieNode *root , string word)
{
	TrieNode *temp = root;
	// cout<<"word:"<<word;
	int wordLen = word.length();
	for(int i = 0 ; i < wordLen;i++ )
	{
		 int index = word[i]-'a';
		// cout<<(temp->child[index])<<"\n";
		if(!temp->child[index])			//No child exist for given letter 
		{
			return false;
		}
		temp = temp->child[index]; //Goto next char
	}
	return (temp!=NULL&&temp->is_last);	//Not Null and end of word
}

int main()
{

	string input_chars[] = {"there","the","okay","anki"};
	int size = sizeof(input_chars)/sizeof(input_chars[0]);
	TrieNode *root = getNode();

	//Insert All words 	
	for (int i = 0; i < size; i++)
        insert(root, input_chars[i]);
    

    //To Display words in trie
    int level = 0 ;
    char str[20];	//Max 20 words


    display(root, str,level);	

    //Search Single word in Trie
    cout<<search(root,"okay")<<"\n";
    cout<<search(root,"no");


	return 0 ;
}