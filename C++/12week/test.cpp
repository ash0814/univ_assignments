#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ofstream i;
  ofstream i2;
  char * file = "test.txt";
  string file2 = "string.txt";
  i.open(file);
  i << "hello world files" << endl;
  i2.open(file2);
  i2 << "file name string" << endl;
  i.close();
  i2.close();
  return (0);
}