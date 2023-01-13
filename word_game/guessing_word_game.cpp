#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));
    char ch;

    string list[]= {"apple","bear","banana","happy"};
    int r =rand()%5;
    string str = list[r];
    cout<<"guess the word!: ";
    string res(str.length(),'_');
    cout<<res<<endl;
    
    while(true){
        cout<<"your answer? : ";
        cin >> ch;
        
        for(int i=0; i<str.length(); i++){
            if(ch==str[i]){
                res[i]=ch;
                cout<<res<<endl;
            }
        }
        if(str== res){
            cout<<"correct!"<<endl;   
            break;
        }
    }

    return 0;
    }