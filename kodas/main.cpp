#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, K[10], did, maz;
    ifstream fd ("duom.txt");
    fd >> n;
    for (int i=0; i<n; i++){
            fd >> K[i];

             if(did<K[i]){
                did=K[i];
             }
             if(maz>K[i]){
                maz=K[i];
             }

    }
   ofstream fr ("rez.txt");
   fr << "Dizdziausia reiksme " << did << endl;
   fr << "Maziausia reiksme " << maz << endl;
    return 0;
}
