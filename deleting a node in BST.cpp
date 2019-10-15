#include<iostream>
using namespace std;
struct node{
	int data;
	node * left;
	node * right;
};
node * tree=NULL;
node * del(node* tree ,int data)
{
	if   (tree==NULL)
	return tree;
	else if(data<tree->data)
	tree->left=del(tree->left,data);//since if one left node is deleted the left tree address will chnage will update the new address int the tree left address
    else if(data>tree->data)
	tree->right=del(tree->right,data);
	else
	{
	 	//got the data to be deleted
	 	//case 1: no child
	 	if(tree->right==NULL&& tree->left==NULL)
	 	{
	 	delete tree;//deallocate memory in c use free function
	 	tree=NULL;
		}
		 //CASE 2: one child
		else if(tree->left==NULL)
		{    node* temp=tree;
			tree=tree->right;
			delete temp;
		} 
		 //case 3:one child
		 else if(tree->right==NULL)
		 {
		 	node * temp=tree;
		 	tree=tree->left;
		 	delete temp;
		 }
		 //case 3: two child
		 else
		{node* temp=findmin(tree->right);
		 tree->data=temp->data;
		 tree->right=del(tree->right,temp->data);
		}
		return tree;
	}	
	printf(" \n item successfully deleted");
}

