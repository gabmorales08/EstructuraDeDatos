#include <iostream>
#include <cstdint>

using namespace std;

struct node 
{
	int key_value;
	node *left;
	node *right;
};
//Gabriela Estefany Morales Alas MA101714
class btree
{
	public:
		btree();
		~btree();
		void insert(int key);
		node *search(int key);
		void destroy_tree();
		node *root_retriever();
		void mostrarArbol(string prefijo, node *arbol, bool ladoDerecho);
		void imprimir();
		
	private:
		void destroy_tree(node *leaf);
		void insert(int key, node *leaf);
		node *search(int key, node *leaf);
		node *root;
};

btree::btree(){
	root=NULL;
}

btree::~btree(){
	destroy_tree();
}

void btree::destroy_tree(node *leaf){
	if(leaf!=NULL){
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void btree::insert(int key, node *leaf){
	if (key< leaf->key_value){
		if (leaf->left!=NULL)
			insert(key, leaf->left);
		else{
			leaf->left=new node;
			leaf->left->key_value=key;
			leaf->left->left=NULL;
			leaf->left->right=NULL;
		}
	}else if(key>=leaf->key_value){
		if(leaf->right!=NULL)
			insert(key, leaf->right);
		else{
			leaf->right=new node;
			leaf->right->key_value=key;
			leaf->right->left=NULL;
			leaf->right->right=NULL;
		}
	}	
}

node *btree::search(int key, node *leaf){
	if(leaf!=NULL){
		if(key==leaf->key_value)
			return leaf;
		if(key<leaf->key_value)
			return search(key, leaf->left);
		else
			return search(key,leaf->right);
	}
	else return NULL;
}

void btree::insert(int key){
	if(root!=NULL)
		insert(key, root);
	else{
		root=new node;
		root->key_value=key;
		root->left=NULL;
		root->right=NULL;
	}
}

node *btree::search(int key){
	return search(key, root);
}

void btree::destroy_tree(){
	destroy_tree(root);
}

node *btree::root_retriever(){
	return root;
}

void btree::mostrarArbol(string prefijo, node *arbol, bool ladoDerecho){
	
	if(arbol != NULL){
		
		cout << prefijo;
		cout << (ladoDerecho ? "|--" : "|--");
		cout << arbol->key_value << endl;
		mostrarArbol(prefijo + (ladoDerecho ? "|   " : "    "), arbol->left, true);
		mostrarArbol(prefijo + (ladoDerecho ? "|   " : "    "), arbol->right, false);
	}
}

void btree::imprimir(){
	
	mostrarArbol("", root, false);
}



int main(){
	btree arbol;
	arbol.insert(8);
	arbol.insert(5);
	arbol.insert(6);
	arbol.insert(2);	
	arbol.insert(10);
	arbol.insert(11);
	arbol.insert(9);
	arbol.imprimir();
	
	return 0;
}
