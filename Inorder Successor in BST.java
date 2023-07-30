class Solution{
	public Node inorderSuccessor(Node root,Node k)
	{
		if(root==null||k==null)
			return null;
		Node temp=null;
		while(root!=null){
			if(root.data<=k.data){
				root=root.right;
			}
			else{
				temp=root;
				root=root.left;
			}
		}
		return temp;
		
	}
}
