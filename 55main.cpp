#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
ifstream pl1;
pl1.open("ciagi.txt");
int liczba;
string s;  
while(!pl1.eof()){
pl1>>liczba;
s = to_string(liczba);
string s1 = s.substr(0, s.length() / 2);
string s2 = s.substr(s.length() / 2);
if(s1==s2){
cout<<liczba<<endl;
}
}return 0;
}
