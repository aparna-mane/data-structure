#include<iostream>

using namespace std;
struct node{
	int data;
	node * left;
	node * right;
};
node * tree=NULL;// tree is empty currently

node * newnode(int data)
{
node * temp= new node;//NEW element  inserted assign memory
temp->data=data;
temp->right=temp->left=NULL;
return temp;
}

node * insert(node * tree,int data)
{
	if(tree==NULL)
	tree=newnode(data);	
	else if(data<tree->data)
	tree->left=insert(tree->left,data);
	else
	tree->right=insert(tree->right,data);
	return tree;
}
void pre(node* tree)
{
	if(tree!=NULL)
	{
		printf(" \n %d",tree->data);
		pre(tree->left);
		pre(tree->right);
	}
	else
	{
		printf("tree is empty");
	}
}

 void in(node * tree)
{
	if(tree!=NULL)
	{
		in(tree->left);
		printf("\n %d",tree->data);
		in(tree->right);
	}
	else
	{
		printf("tree is empty");
	}	
}
 void pos(node * tree)
{
	if(tree!=NULL)
	{
		pos(tree->left);
		pos(tree->right);
		printf("\n %d",tree->data);
	}
	else
	{
		printf("tree is empty");
	}	
}

int main()
{
	int c,data;
     
	while(1)
	{
		cout<<"\n 1:insert"<<"\n 2:display_preorder \n 3:display_in \n display_post \n";
		cin>>c;
		switch(c)
		{
			case 1:printf("\n enter the value \n ");
					scanf("%d",& data);
					tree= insert(tree,data);
			break;
			case 2: printf("\n the elements preorder are \n");
			 		pre(tree);
			break;
			case 3: printf("\n the elements inorder are \n") ;
					in(tree);
			break;
			case 4: printf("\n tree elements in posorder \n");
					pos(tree);
			break;
		}
    }
    
}
