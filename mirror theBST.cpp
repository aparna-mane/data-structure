#include<iostream>
using namespace std;
struct node{
	int data;
	node * left;
	node * right;
};
node * tree=NULL;

void  mirror(node * ref)
{
	if(ref== NULL)
	return ;
	else
	{
		struct node * temp;
		// for subtrees we use recrusive call;
		mirror(ref->left);
		mirror(ref->right);
		
		temp =ref->left;// temp=2
		ref->left=ref->right;// 
		ref->right=temp;
	}
	/*
	it basically is left node to right node switch done by swap fucntion 
	*/
}

int main()
{
	// establish the entire tree
    // call mirror function 
}
