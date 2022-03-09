/*******************************************************************************
 * Name    : sqrt.cpp
 * Author  : Jonathan Carbonneau
 * Version : 1.0
 * Date    : September 25, 2021
 * Description : Bitshift finds repeting letters.
 * Pledge : I pledge my honor that I have abided by the Stevens Honor System.
 ******************************************************************************/
#include <iostream>
#include <cctype>

using namespace std;

bool is_all_lowercase(const string &s) {

    return (string::npos == s.find_first_not_of("abcdefghijklmnopqrstuvwxyz"));
    // TODO: returns true if all characters in string are lowercase
    // letters in the English alphabet; false otherwise.
}


bool all_unique_letters(const string &s) {
    unsigned int storage = 0;
    for (int i = s.length() - 1; i >= 0; --i){
        int val = 1 << (s[i] - 'a');
        if (storage & val) return false ;
        storage |= val;
    }
    return true;
    // TODO: returns true if all letters in string are unique, that is
    // no duplicates are found; false otherwise.
    // You may use only a single int for storage and work with bitwise
    // and bitshifting operators.
    // No credit will be given for other solutions.
}

int main(int argc, char * const argv[]) {

    if (argc==1 || argc>2){
    cout<< "Usage: ./unique <string>" << endl;
    }else if(!is_all_lowercase(argv[1])){
    	cout<< "Error: String must contain only lowercase letters."  << endl;
    }else{
    cout << (all_unique_letters(argv[1]) ? "All letters are unique." : "Duplicate letters found.")<< endl;

    }
    
    // TODO: reads and parses command line arguments
    // Calls other functions to produce correct output
}
