#include <iostream>
#include<fstream>
#include<time.h>
using namespace std;

int x;
int main()
{
    ofstream ofile;
    ofile.open ("data.txt");
    srand(time(0));
    for (int i = 0; i <100; i++){
        x = rand()% 200;
        ofile<< x << endl;
        }
    ofile.close();
    cout << "Data written to file"<< endl;
    return 0;

}
