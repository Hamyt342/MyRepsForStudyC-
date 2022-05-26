#include <iostream>
using namespace std;

int tabs = 0;
int kol_vo = 0;
struct Branch
{
	int Data;
	Branch* LeftBranch; 
	Branch* RightBranch;
};
void Add(int aData, Branch*& aBranch)
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else 
		if (aBranch->Data > aData)
		{
			Add(aData, aBranch->LeftBranch);
		}
		else
		{
			Add(aData, aBranch->RightBranch);
		};
}
void print(Branch* aBranch)
{
	if (!aBranch) return;
	tabs += 5;

	print(aBranch->LeftBranch);

	for (int i = 0; i < tabs; i++) cout << " ";
	cout << aBranch->Data << endl;


	print(aBranch->RightBranch);

	tabs-= 5;
	return;
}

void pr_obh(Branch*& aBranch)
{
	if (NULL == aBranch)    return;

	cout << aBranch->Data << endl;
	pr_obh(aBranch->LeftBranch);
	pr_obh(aBranch->RightBranch);
}

int kol_ch(Branch*& aBranch)
{
	if (NULL == aBranch)    return 0;

	if (aBranch->Data % 2 == 0)
	{
		kol_vo++;
	}
	kol_ch(aBranch->LeftBranch);
	kol_ch(aBranch->RightBranch);
	return kol_vo;
}

int summ_k(Branch*& aBranch, int k) {
	int sum = 0;
	if ((aBranch != NULL) && (k > 0)) {
		sum += summ_k(aBranch->LeftBranch, k - 1);
		sum += aBranch->Data;
		sum += summ_k(aBranch->RightBranch, k - 1);
	}
	return sum;
}
void add_elem(int aData, Branch*& aBranch)
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else
	{
		if (aData < aBranch->Data) {
			add_elem(aData, aBranch->LeftBranch);
		}
		else if (aData > aBranch->Data) {
			add_elem(aData, aBranch->RightBranch);
		}
	}
}

void is_Empty(Branch*& aBranch)
{
	if (!aBranch)
	{
		cout << "Ahash boa...";
	}
	else
	{
		cout << "Ahash bos emes...";
	}
}

void FreeTree(Branch* aBranch)
{
	if (!aBranch) return;
	FreeTree(aBranch->LeftBranch);
	FreeTree(aBranch->RightBranch);
	delete aBranch;
	return;
}

Branch* del_elem(Branch*& aBranch, int aData) {
	if (aBranch == NULL)
		return aBranch;

	if (aData == aBranch->Data) {

		Branch* tmp;
		if (aBranch->RightBranch == NULL)
			tmp = aBranch->LeftBranch;
		else {

			Branch* ptr = aBranch->RightBranch;
			if (ptr->LeftBranch == NULL) {
				ptr->LeftBranch = aBranch->LeftBranch;
				tmp = ptr;
			}
			else {

				Branch* pmin = ptr->LeftBranch;
				while (pmin->LeftBranch != NULL) {
					ptr = pmin;
					pmin = ptr->LeftBranch;
				}
				ptr->LeftBranch = pmin->RightBranch;
				pmin->LeftBranch = aBranch->LeftBranch;
				pmin->RightBranch = aBranch->RightBranch;
				tmp = pmin;
			}
		}

		delete aBranch;
		return tmp;
	}
	else if (aData < aBranch->Data)
		aBranch->LeftBranch = del_elem(aBranch->LeftBranch, aData);
	else
		aBranch->RightBranch = del_elem(aBranch->RightBranch, aData);
	return aBranch;
}

int main()
{
	setlocale(LC_ALL, "rus");
	Branch* Root = 0;
	int vel;
	int element;
	int k;

	cout << "Ahash neshe elementten tyrtin boladi?: ";
	cin >> vel;

	cout << "\nAhashtin bos bosemestigin tekserip jatirq: " << endl;
	is_Empty(Root);
	//cout << endl;

	for (int i = 0; i < vel; i++)
	{
		Add(rand() % 100, Root);
	}

	cout << "Ahashtirn bos bos emestigin tirkegennen"
		" keiin tekserip jatirq: " << endl;
	is_Empty(Root);
	//cout << endl;

	cout << "\nBinarliiq ahashti shihary: " << endl;
	print(Root);
	//cout << endl;

	cout << "\nTikelei ashashti obhot jasay: " << endl;
	pr_obh(Root);
	//cout << endl;

	cout << "\nJana ellement tirkey:" << endl;
	cout << "\nJana elementin engiz: ";
	cin >> element;
	add_elem(element, Root);

	cout << "Binarliq ahashti shihary: " << endl;
	print(Root);
	//cout << endl;

	cout << "\nElementti oshiry:" << endl;
	cout << "Element engiziniz: ";
	cin >> element;
	del_elem(Root, element);

	cout << "Qaitadan shihary: " << endl;
	print(Root);

	cout << "\nAhashtahi taq sandar sani: ";
	cout << kol_ch(Root) << endl;

	cout << "\nBerilgen dengeidegi ellementterdin summasin sanaiiq ";
	cin >> k;
	cout << summ_k(Root, k) << endl;

	FreeTree(Root);
	cout << "Dinamiqaliq jad tazartildi..." << endl;

	return 0;
}
