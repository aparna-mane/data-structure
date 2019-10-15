using namespace std;
struct node{
	int data;
	node * left;
	node * right;
};
node * tree=NULL;


void zigzagtraversal(node * root)
{
	if(root==NULL)
	return ;
stack<node *>s1;
stack<node *>s2;
 s1.push(root);
 bool ltr=true;
 while(!s1.empty())
 {
 	node * temp=s1.top();
 	cout<<temp->data<<" ";
 	s1.pop();
     if(ltr)
     {
     	if(temp->left!=NULL)
     	s2.push(temp->left);
     	if(temp->right!=NULL)
     	s2.push(temp->right);
	 }
	 else
	 {      if(temp->right!=NULL)
         	s2.push(temp->right);
     		if(temp->left!=NULL)
     	    s2.push(temp->left);
	 	
	 }
	 
	 if(s1.empty())
	 {
	 	ltr=!ltr;
	 	swap(s1,s2);
	 }
 }
}

int main()
{
	// establish the entire tree using insert node function 
	// call zigzag traversal fucnction to view all nodes in zigzag manner
}
