#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
};

// Берілген кілттің бар-жоғын итеративті тексеруге арналған функция
bool iterativeSearch(struct Node* root, int key)
{
	// Түбір аяқталғанша жылжыту
	while (root != NULL) {
		// оң жақ ағашты жаңа ағаш ретінде өткізу
		if (key > root->data)
			root = root->right;

		// сол жақ ағашты жаңа ағаш ретінде өткізу
		else if (key < root->data)
			root = root->left;
		else
			return true; //егер кілт табылса 1 мәнін қайтару
	}
	return false;
}

// Британдық жазғы уақыт(BST) бойынша жаңа торап құруға арналған қызметтік функция 
struct Node* newNode(int item)
{
	struct Node* temp = new Node;
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

/* Жаңа түйінді енгізу үшін қызметтік функция
бұл кілт Британдық жазғы уақыт(BST) бойынша */
struct Node* insert(struct Node* Node, int data)
{
	/* Егер ағаш бос болса, Жаңа түйінді қайтару */
	if (Node == NULL)
		return newNode(data);

	/* Әйтпесе, ағаштың төмен қозғалысын қайталау */
	if (data < Node->data)
		Node->left = insert(Node->left, data);
	else if (data > Node->data)
		Node->right = insert(Node->right, data);

	/* (өзгертілмеген) түйін сілтегішін қайтару */
	return Node;
}

int main()
{
	/* BST құру
	   50
	  / \
	 30 70
	/ \ / \
	20 40 60 80 */


	struct Node* root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

    int X = 70;

	if (iterativeSearch(root, X))
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}
