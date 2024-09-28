#include <iostream>
using namespace std;
int main(){
    int input=0;
    string text="";
    char final, alphabet[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int i= 0, j=0, k=0;
    while(true){
        cout<<"Enter 1 to encrypt or 2 to decrypt: ";
        cin>>input;
        if(input==1){
            cout<<"Enter Your Text: ";
            cin>>text;
            for(i=0;i<text.length();i++){
                for(j=0;j<26;j++){
                    if (text[i]==alphabet[j]){
                        k=(j+2)%26;
                        final=alphabet[k];
                        cout<<final;
                    }
                }
            }
            cout<<endl;
            //break;
        }else if(input==2){
            cout<<"Enter Your Text: ";
            cin>>text;
            for(i=0;i<text.length();i++){
                for(j=0;j<26;j++){
                    if (text[i]==alphabet[j]){
                        k=(j-2 +26)%26;
                        final=alphabet[k];
                        cout<<final;
                    }
                }
            }
            cout<<endl;
            //break;
        } else{
            cout<<"Enter a valid number"<<endl;
            continue;
        }
    }
    return 0;
}

