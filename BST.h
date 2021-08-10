#pragma once

class BST {

private:

	struct node {

		int key;
		node* left;
		node* right;

	};

	node* root;

	void addNodePriv(int key, node* ptr);
	void traverseInOrderPriv(node* ptr);
	void findMaxPriv(node* ptr);


public:

	BST();
	node*createNode(int key);
	void addNode(int key);
	void traverseInOrder();
	void findMax();




};