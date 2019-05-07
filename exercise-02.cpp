/*	Nama program	: exercise-02
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 07 05 2019
	Deskripsi		: stack_linkedlist
********************************************************************/
#include<iostream>
using namespace std;
struct Stack{
    char isi;
    Stack*next;
};
typedef Stack*pointer;
typedef pointer List;

void createList(List& TOP)
{ 
    TOP=NULL;
}
void createElm(pointer&pBaru)
{
    pBaru=new Stack;
    cout<<"input : ";
    cin>>pBaru->isi;
    pBaru->next=NULL;
}

void push(List& TOP, pointer pBaru){
    if (TOP == NULL) {
    TOP=pBaru;
    }// Stack kosong
    else { // Stack ada isi
        pBaru->next=TOP;
        TOP=pBaru;
    }
}
void Pop(List& TOP, pointer& pHapus){
    if (TOP==NULL){
        cout<<"Stack kosong "<<endl;
        pHapus=NULL;
    }
    else if (TOP->next==NULL){
        pHapus=TOP;
        TOP=NULL;
    }
    else {
        pHapus=TOP;
        TOP=TOP->next;
        pHapus->next=NULL;
    }
}
void traversal(List TOP)
{
    pointer pBantu;
    pBantu=TOP;
    while(pBantu!=NULL){
        cout<<pBantu->isi;
        pBantu=pBantu->next;
    }
    cout<<endl;
}
int main(){
     List m;
     int n;
     pointer p;
     createList(m);
     cout<<"Banyak data : ";cin>>n;
    for (int i = 0; i < n; i++)
    {
        createElm(p);
        push(m,p);
    }
      cout<<"POP"<<endl<<endl;
     for (int i = 0; i < n; i++)
    {
        Pop(m,p);
        cout << p->isi << " ";
    }
}