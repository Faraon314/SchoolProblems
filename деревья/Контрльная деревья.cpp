#include <iostream>
#include <cstdlib>
class NullTreeException {};

template<class T>
struct BNode
{
	T data;
	BNode<T> *left, *right;
	BNode(T dd, BNode<T> *l = nullptr, BNode<T> *r = nullptr) :
		data(dd), left(l), right(r) {}
};
template<class T>
struct BTree
{
	BNode<T> *h;
public:
	void print();
	BTree();
	BTree(BNode<T> *a);
	BNode<T> * getrrl();
	void delRmost();
	void reflect();
};
template<class T>
void BTree<T>::print() {
	printNode(h);
}
template<class T>
BTree<T>::BTree()
{
	h = nullptr;
}
template<class T>
BNode<T> *cp(BNode<T> *a)
{
	if (a == nullptr) return nullptr;
	BNode<T> *t1 = cp(a->left);
	BNode<T> *t2 = cp(a->right);
	return new BNode<T>(a->data, t1,t2);
}
template<class T>
BTree<T>::BTree(BNode<T> *a)
{
	h = cp(a);
}
template<class T>
void printNode(BNode<T> *r, int offset = 0)
{
	if (r == nullptr) return;
	printNode(r->right, offset + 3);
	for (int i = 0; i<offset; i++)
		std::cout << ' ';
	std::cout << r->data << std::endl;
	printNode(r->left, offset + 3);
}
//1
template<class T>
BNode<T> * BTree<T>::getrrl() {
	return getrrlNode(h);
}
template<class T>
BNode<T> * getrrlNode(BNode<T> * tree)
{
	if (tree == nullptr) throw NullTreeException();
	if (tree->right != nullptr)  getrrlNode(tree->right);
		else return tree->left;
	
}
//2
template<class T>
void BTree<T>::delRmost() {
  delRmostNode(h);
}
template<class T>
void delRmostNode(BNode<T> * & tr)
{
	if (tr == nullptr) throw NullTreeException();

	if (tr->right->right != nullptr) delRmostNode(tr);
	else {
		BNode<T> * a = tr->right;
		tr->right = tr->right->left;
		delete a;
	}
	

}
//5
template<class T>
void BTree<T>::reflect() {
	 reflectNode(h);
}
template<class T>
void reflectNode(BNode<T> *p)
{
	if (p == nullptr) return;
	reflectNode(p->left);
	reflectNode(p->right);
	BNode<T> * n1 = p->left;
	BNode<T> * n2 = p->right;
	p->left = n2;
	p->right = n1;

}

template<class T>
struct ANode
{
	T data;
	ANode<T> *down, *right;
	ANode(T dd, ANode<T> *d = nullptr, ANode<T> *r = nullptr) :
		data(dd), down(d), right(r) {}
};
template<class T>
struct ATree
{
	ANode<T> *h;
public:
	void print();
	ATree(BNode<T> *a);
	void print2();
	void insert_back(T data);
};
template<class T>
ATree<T> *cp(ATree<T> *a)
{
	if (a == nullptr) return nullptr;
	ATree<T> *t1 = cp(a->down);
	ATree<T> *t2 = cp(a->right);
	return new ATree<T>(a->data, t1, t2);
}
template<class T>
ATree<T>::ATree(ATree<T> *a)
{
	h = cp(a);
}
template<class T>
void print(ANode<T> *r, int offset = 0)
{
	if (r == nullptr) return;
	for (int i = 0; i<offset; i++)
		std::cout << ' ';
	std::cout << r->data << std::endl;
	print(r->down, offset + 3);
	print(r->right, offset);
}
//3
template<class T>
void print2(ANode<T> *r, int offset = 0, int depth = 0)
{
	int d = depth;
	if (!(r == nullptr || depth == 3)) {
		for (int i = 0; i < offset; i++)
			std::cout << ' ';
		std::cout << r->data << std::endl;
		print2(r->down, offset + 3, d + 1);
		print2(r->right, offset, d);
	}
}
//4
template<class T>
void insert_back(ANode<T> *r,T data)
{
	r = r->down;
	while (r->right != nullptr)
		r = r->right;
	
	r->right = new ANode<T>(data, nullptr, nullptr);
}

int main()
{
	try {
		/*
		BNode<int> *tree1 = new BNode<int>(1,
			new BNode<int>(2,
				new BNode<int>(4),
				new BNode<int>(5)),
			new BNode<int>(3,
				new BNode<int>(6,
					new BNode<int>(7),
					new BNode<int>(8))));
	*/
		ANode<int>* tree = new ANode<int>(1,
			new ANode<int>(2,
				new ANode<int>(5,
					nullptr,
					new ANode<int>(6,
						nullptr,
						new ANode<int>(7))),
				new ANode<int>(3,
					new ANode<int>(8),
					new ANode<int>(4,
						new ANode<int>(9,
							nullptr,
							new ANode<int>(10,
								new ANode<int>(11)))))));
								
		ATree<int> tr(tree);
		tr.print();
		std::cout << "------" << std::endl;
		tr.reflect();
		tr.print();
		
		//std::cout << a->data<< std::endl;
		
	}
	catch (NullTreeException)
	{
		std::cerr << "Null tree" << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}