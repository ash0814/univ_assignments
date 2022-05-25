#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream inputStream;
  ofstream outputStream;
  string inputFile;
  string outputFile;

  cout << "Enter input File Name : ";
  cin >> inputFile;
  cout << "Enter output File Name : ";
  cin >> outputFile;
  inputStream.open(inputFile.c_str(), ios::in |  ios::binary);
  if(inputStream.fail()){
    perror("Input File open fail");
    return (0);
  }
  outputStream.open(outputFile.c_str(), ios::out | ios::binary);
  char buf;
  inputStream.read(&buf, 1);
  while (!inputStream.eof())
  {
    buf -= 5;
    outputStream.write(reinterpret_cast<char*>(&buf), 1);
    inputStream.read(&buf, 1);
  }
  inputStream.close();
  outputStream.close();
  return (0);
}