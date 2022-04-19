#include <iostream>       // std::cout
#include <string>         // std::string

std::string alterString (const std::string& str)
{
  unsigned found = str.find_last_of(".");
  return str.substr( found + 1 );

}

int main ()
{

  //string sentences;
  //cout<<"Enter a string with two sentences in it:"<<endl;
  //getline(cin,sentences,"\n");
  //alterString(sentences);
  std::string str1( "Hello people.This is code" );

  std::cout << alterString( str1 ) << "\n";

  return 0;
}
