#include <iostream>
#include <string>
using namespace std;
int main()
{
    string text;
    cout << "Sozdi jaz\n";
    getline(cin, text);
    cout << text << endl;
    string arrch;
    char ch;
    int i = 0, b = text.size();
    ch = text[--b];
    cout << b << endl;
    for (auto c: text){
        if (c != ch){
            arrch[i] = c;
        } else if (text[i+1] != ch){
            arrch[i] = text[i+1];
        }
        i++;
    }
    cout << "Byda simoli sononda :" << ch << 
	    "\nOzgertilgen soz :" <<  arrch << 
	    "\nByl sozdin ozi :" << text << endl;
    return 0;
}

