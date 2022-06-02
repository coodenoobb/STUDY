#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    string st2;
/*    string st = "cpp";         //opening file using const
    ofstream out("SamplefileIO");
    out<<st;
    out.close();
*/
    ifstream in("SamplefileIO.txt");
    //in>>st2;

    getline(in,st2);
    cout<<st2;

}