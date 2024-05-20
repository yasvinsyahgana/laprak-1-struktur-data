//Yasvin Syahgana
//2311102065
//UNGUIDED 2
#include <iostream> 
#include <stack> 
#include <string>
using namespace std; 

string perbaikikalimat(const string& sentence_065){
    stack<char> stack;
    string perbaiki_065;

    //memasukkan setiap karakter ke dalam stack
    for (char i : sentence_065){
        stack.push(i);
    }

    //mengeluarkan karakter dari stack dan membangun kalimat terbalik
    while (!stack.empty()){
        perbaiki_065 += stack.top();
        stack.pop();
    }
    return perbaiki_065;
}
int main (){
    cout<<"Unguided 2"<<endl;
    cout<<"Yasvin Syahgana"<<endl;
    cout<<"2311102065"<<endl;

    string sentence_065;
    cout << "Data Stack Array : "<< endl;
    cout << "Masukkan Data : " ;
    getline(cin, sentence_065);

    string perbaikiKalimat = perbaikikalimat(sentence_065);
    cout << " data : " << perbaikiKalimat << endl;

    return 0;
}