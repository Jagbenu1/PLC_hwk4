#include <iostream>
#include <string>
#include <cstring>
#include <streambuf>
#include <fstream>
#include <list>

using namespace std;


void identifier(char *str, int len){
    int place = 0;
    char arr[len];
    for(int i = 0; i <= len;i++){
        if(str[i] == '$' || str[i] == '@' || str[i] == '%'){
            arr[place] = str[i];
            // str[i] == arr[place];
            place++;
        }
    }
    // cout << len << endl;
    cout << arr << endl;
    // return arr;
}

int main(){
    ifstream file("./Perl_ident.txt");
    string contents((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());

    contents.c_str();
    //string ctnArray[] = {contents.c_str()};
    int len = contents.length();

    char holder[len];
    char arr[len];
    if(file.is_open()){
        for(int i = 0; i <= len; i++){
           holder[i] = contents[i]; 
        }   
    }
        identifier(holder, len);
    return 0;
}