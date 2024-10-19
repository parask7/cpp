/*  Write a program that counts the number of vowels and consonants in a 
string. */
#include<iostream>
using namespace std;
int main(){
    string word;
    cout<<"Entre any word: ";
    cin>>word;
    int con = 0;
    int vow = 0;
    for(int i=0;i<word.length();i++){
        if(word[i]== 'a'|| word[i] == 'e'||word[i]== 'i'||word[i]== 'o'||word[i]== 'u'){
            vow++;
        } else{
            con++;
        }
    }
    cout<<"no of consonant is: "<<con;
    cout<<"no of vowel is: "<<vow;

    return 0;
}