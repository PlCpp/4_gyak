#include <iostream>

struct Node {
	Node* left;
	Node* right;
	int val;
	
	Node(const int& val) {
		left = right = 0;
		this->val = val;
	}
};

void print(const Node* n) {
	if (n) {
		print(n->left);
		std::cout << n->val << ' ';
		print(n->right);
	}
}

void insert(Node*& n, int v) {
	if (n) {
		insert(v <= n->val ? n->left : n->right, v);
	} else {
		n = new Node(v);
	}
}

void dealloc(Node* n) {
	if (n) {
		dealloc(n->left);
		dealloc(n->right);
		delete n;
	}
}

int main() {
	Node* root = 0;
	int i;
	while (std::cin >> i) {
		insert(root, i);
	}
	
	print(root);
	dealloc(root);
}
