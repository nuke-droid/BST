#include <iostream>
#include <cstdlib>

#include "BST.h"

using namespace std;

BST::BST() {
	root = NULL;
}

BST::node* BST::createNode(int key) {

	node* n = new node;

	n->key = key;
	n->left = NULL;
	n->right = NULL;

	return n;


}

void BST::addNode(int key) {
	BST::addNodePriv(key, root);
}

void BST::addNodePriv(int key, node* ptr) {

	if (root == NULL) {
		root = createNode(key);
	}
	else if (key < ptr->key) {
		
		if (ptr->left != NULL) {
			addNodePriv(key, ptr->left);
		}
		else {
			ptr->left = createNode(key);
		}


	}
	else if (key > ptr->key) {

		if (ptr->right != NULL) {
			addNodePriv(key, ptr->right);
		}
		else {
			ptr->right = createNode(key);
		}


	}
	else {
		cout << "Key already exists in tree.\n";
	}




}

void BST::traverseInOrder() {

	traverseInOrderPriv(root);

}

void BST::traverseInOrderPriv(node* ptr) {
	if (root != NULL) {

		if (ptr->left != NULL) {
			traverseInOrderPriv(ptr->left);
		}
		cout << ptr->key << "|";
		if (ptr->right != NULL) {
			traverseInOrderPriv(ptr->right);
		}
	}
	else {
		cout << "Tree is void\n";
	}

}

void BST::findMax() {
	findMaxPriv(root);
	
}

void BST::findMaxPriv(node* ptr) {


	if (root != NULL) {

		
		if (ptr->right != NULL) {
			findMaxPriv(ptr->right);
		}
		if (ptr->right == NULL && ptr->left == NULL) {
			cout << "Max key: "<< ptr->key << "\n";
		}
	}
	else {
		cout << "Tree is void\n";
	}
	
}



