#include<iostream>
#include<string>

using namespace std;

int main(){

string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string key{"ergdsfgsdfhfuthsfhfgjgkgkfhjkfhkfhkfhkfdddffhfhfhffgd"};
string message{};
cout<<"Enter your secret message... ";
getline(cin, message);

string encrypted_message{};
for(char c: message){
    size_t index_position = alphabet.find(c);
    if(index_position != string::npos){                               //we found and will subsitute
        char new_c{key.at(index_position)};
        encrypted_message += new_c;
   } else {
        encrypted_message += c;
        }
    }
cout<<"The encrypted message: " << encrypted_message<<endl;  
cout<<endl;
cout<<endl;

string decrypted_message{};
for(char c: encrypted_message){
    size_t index_position = key.find(c);
    if(index_position != string::npos){                               //we found and will subsitute
        char new_c{alphabet.at(index_position)};
       decrypted_message += new_c;
   } else {
        decrypted_message += c;
        }
    }
cout<<"The decrypted message: " << decrypted_message<<endl;  
cout<<endl;
cout<<endl;
return 0;
}