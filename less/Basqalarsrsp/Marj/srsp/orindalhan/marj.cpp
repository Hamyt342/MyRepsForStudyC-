#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
 
using namespace std;
 
struct LIBRARY
{
    char nomer[30];
    char FIO[30];
    char nazvanie[40];
    int Year;
    int kolvo;
};
 
struct STR
{
    LIBRARY *Library;
    STR *next;
};
 
STR * create(LIBRARY * Library) //начальное формирование списка
{
   STR *root=new STR;
   root->Library=Library;
   root->next=NULL;
   return root;
}
 
 
 
void add(LIBRARY *Library, STR* root) //добавление нового элемента списка
{
    while(root->next)
      root=root->next;
    root->next=new STR;
    root->next->Library=Library;
    root->next->next=NULL;
}
 
void printLIBRARY(LIBRARY *Library) //вывод на экран  
{
     
    cout<<"Nomer => "<<Library->nomer<<endl;
    cout<<"FIO => "<<Library->FIO<<endl;
    cout<<"Nazvanie => "<<Library->nazvanie<<endl;
    cout<<"Year => "<<Library->Year<<endl;
    cout<<"Kolvo => "<<Library->kolvo<<endl;    
    cout<<endl;
     
}
LIBRARY * makeLIBRARY() //добавление книги
{
   cout<<"Enter book data:"<<endl;
    LIBRARY *Library=new LIBRARY;
    fflush(stdin);
    cout<<"Enter book nomer: => ";
    cin.getline(Library->nomer,30);
 
    cout<<"Enter Author's FIO:  => ";
    cin.getline(Library->FIO,30);
 
    cout<<"Enter book name: => ";
    cin.getline(Library->nazvanie,40);
 
    cout<<"Enter made year:  => ";
    cin>>Library->Year;
 
    cout<<"Enter count of books:  => ";
    cin>>Library->kolvo;
 
    return Library;
}
int choice()
{
    int answer;
    cout<<"Main menu"<<endl;
    cout<<"1. Add new books to the list"<<endl;
    cout<<"2. Print LIBRARY at list"<<endl;
    cout<<"3. Search and delete"<<endl;
    cout<<"4. Clear all entries"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>answer;
    fflush(stdin);
    if(answer>=1 && answer<=5)
      return answer;
    else
      return 0;
}
 
STR* search_and_del(STR * str)
{
STR *last=str,*root = str;
char qwe[30];
        char qw[30], q[1];
        cout<<"Enter nomer of book => "<<endl;
        cin.getline(qwe,30);
        while (root)
        {
	if (!strcmp(qwe,root->Library->nomer)){  {
        printLIBRARY(root->Library);
	cout<<"Do you want clear this entries? (y/n) "<<endl;// Удаление записи
                        char c;   
                        cin.get(c);
                        if (c=='y')
                                    {
                                root->Library=NULL;
                                if(last==root) str=root->next;
                                else last->next=root->next;
                         }
                        while(cin.get(c) && c!='\n');
                   last = root;
                   root=root->next;
                    }
                     }
               else if (strcmp(qwe,root->Library->nomer))
                   root=root->next;
           }
           
           cout<<"Entries deleted"<<endl;
return str;
}  
 
int main()
{
    STR *root=NULL;
    int ch;
    while(1)
    {
       ch=choice();
if(ch==1)
       {
           cout<<endl;
           if(root==NULL)
             root=create(makeLIBRARY());
           else
             add(makeLIBRARY(),root);
       }
 
else if(ch==2)
       {
           cout<<endl;
           int i=0;
           int N=0;
           
           STR *proot=root;
           while (root)
           {
               N++;
               root=root->next;
           }
 
           LIBRARY *buf;
           LIBRARY **pLibrary=new LIBRARY*[N];
           root=proot;
           
        while (root)
        {
        	pLibrary[i]=root->Library;
                root=root->next;
                i++;
        }
        root=proot;
	for (i=0;i<N;i++)
        	printLIBRARY(pLibrary[i]);
               
       }
 
else if(ch==3)
       {
           root=search_and_del(root);
       }
       
else if(ch==4)
       {
        char e;
        cout<<"Do you want clear all entries? (y/n) "<<endl;// Удаление всех записей
        cin.get(e);
        if(e=='y')      
        {root=NULL;     
        cout<<"All entries successfully deleted!"<<endl;}        
        else if (e=='n') cout<<endl;        
      	while(cin.get(e) && e!='\n');
       }       
 
else if(ch==5)
       {
           break;
           cout<<endl;
       }
       
    }
    return 0;
}
