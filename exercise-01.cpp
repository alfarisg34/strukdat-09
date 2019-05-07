/*	Nama program	: exercise-01
	Nama			: Alfari Sidnan Ghilmana
	NPM				: 140810180011
	Tanggal buat	: 07 05 2019
	Deskripsi		: stack_array
********************************************************************/
#include <iostream>
using namespace std;

const int maxElemen = 10;
struct Stack {
char isi[maxElemen];
int TOP;
};
Stack S;

void createStack (Stack& S){
S.TOP = -1;
}
void createElement(char& elemenBaru){
    cout<<"Input: ";cin>>elemenBaru;
}
void push(Stack& S, char elemenBaru) {
    if (S.TOP == maxElemen-1){
        cout<<"Tumpukan sudah penuh"<<endl;
    }
    else{
        S.TOP=S.TOP + 1;
        S.isi[S.TOP] = elemenBaru;
    }
}
void pop(Stack& S, char& elemenHsl){
    if (S.TOP < 0) {
        cout<<"Tumpukan sudah kosong "<<endl;
    }
    else {
        elemenHsl= S.isi[S.TOP];
        S.TOP=S.TOP - 1;
    }
}
void traversal(Stack S){
    for (int i=S.TOP;i>=0;i--){
        cout<<S.isi[i];
    }
}
int main(){
    char elemenBaru;
    int n;
    char ambil;
    Stack S;
    // int option;
    createStack (S);
    cout<<"Banyak data : ";cin>>n;
    for (int i = 0; i < n; i++)
    {
        createElement(elemenBaru);
        push(S,elemenBaru);
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << S.isi[S.TOP] << " ";
        pop(S,ambil);
    }
    // do{
    //     cout<<"1.Push"<<endl;
    //     cout<<"2.Pop"<<endl;
    //     cout<<"0.Selesai"<<endl;
    //     cout<<"Pilihan:";
    //     cin>>option;
    //     if(option==1){
    //         createElement(elemenBaru);
    //         push(S,elemenBaru);
    //         traversal(S);
    //         cout<<endl;
    //     }
    //     else if(option==2){
    //         pop(S,ambil);
    //         traversal(S);
    //         cout<<endl;
    //     }
    // }while(option==1||option==2);
}