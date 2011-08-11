// Name: Anthony T. Pham
// UF ID: 5038-1111
// Discussion section #: 1079

// test the iterator for arrayList
#include<iostream>
#include<algorithm>   
#include<numeric>     
#include "linearList.h"
#include "arrayList.h"
#include <fstream>

using namespace std;

int main()
{
   // figure out the missing details yourself:
   ////////////////////////////////////////////////////////
   arrayList<string> z1;
   arrayList<string>::seamlessPointer it;

   ifstream inFile;
   inFile.open("Dictionary.txt");
   if (!inFile) {
     cout << "Unable to open file Dictionary"<<endl;
     return 0;
   }
   string x;
    
   // fill arrayList with Dictionary
   while(inFile >> x)
   {
     z1.insert( z1.size(), x );
   }
   // sort the Dictionary
   sort(z1.beginRA(),z1.endRA());
   
   // write the sortedDictionary to a text file
   ofstream outFile;
    outFile.open("sortedDictHW3.txt");
    if (!outFile) {
        cout << "Unable to open file sortedDictionary"<<endl;
        return 0;
    }
    

    for( it = z1.beginRA() ; it!=z1.endRA(); ++it )
    {
      outFile << *it << endl;
    }

    // close file streams
    inFile.close();
    outFile.close();
  return 0;
}
