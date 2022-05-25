#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  ifstream openFile;
  int num;
  int sum = 0;
  int count = 0;

  openFile.open("Exercise13_3.txt");
  if (openFile.fail()) {
    perror("File open fail");
    return 0;
  }
  while (openFile >> num) {
    count++;
    sum += num;
  }

  cout << "sum = " << sum << endl;
  cout << "avg = " << (float)sum / (float)count << endl;

  openFile.close();
  return 0;
}