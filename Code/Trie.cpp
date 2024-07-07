#include <bits/stdc++.h>
using namespace std;
#define ALPHABET_SIZE (26)


#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

struct TrieNode {
    struct TrieNode *children[ALPHABET_SIZE];
    bool isLeaf;
};


struct TrieNode *getNode(void) {
    struct TrieNode *pNode = NULL;

    pNode = (struct TrieNode *) malloc(sizeof(struct TrieNode));

    if (pNode) {
        int i;

        pNode->isLeaf = false;

        for (i = 0; i < ALPHABET_SIZE; i++) pNode->children[i] = NULL;
    }

    return pNode;
}

class Solution
{
    public:
        
        void insert(struct TrieNode *root, string key)
        {
            // code here
            TrieNode *node=root;
            for(auto ch:key)
            {
                if(node->children[ch-'a'] == NULL) 
                {
                    node->children[ch-'a']=new TrieNode();  
                }
                node=node->children[ch-'a'];
            }
            node->isLeaf=true;
        }
        
      
        bool search(struct TrieNode *root, string key) 
        {
            // code here
            TrieNode *node=root;
            for(auto ch:key)
            {
                if(node->children[ch-'a'] == NULL) return false;
                node=node->children[ch-'a'];
            }
            return node->isLeaf;
        }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string keys[n];

        for (int i = 0; i < n; i++) {
            cin >> keys[i];
        }
        
        Solution obj;
        struct TrieNode *root = getNode();

        for (int i = 0; i < n; i++) obj.insert(root, keys[i]);

        string abc;

        cin >> abc;
        

        if (obj.search(root, abc))
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
