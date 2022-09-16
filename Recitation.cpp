#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <map>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char * argv[])
{
    if(argc == 1)
    {
        cout << "MISSING COMMAND" << endl;
        return 0;
    }
    if(argc > 2)
    {
        cout << "TOO MANY ARGUMENTS" <<endl;
        return 0;
    }

    string cmd(argv[1]);
    
    if(cmd == "r1")
    {
        string mywords;
        cout << "Enter Numbers:";
        getline (cin,mywords);
        stringstream mystring(mywords);
        string number;

        int ival = 0;
        int change = 0;
        while(mystring >> number)
        {
            if(isdigit(number[0]))
            {
                int check = stoi(number);
                if(check > ival)
                    ival = check;
                change++;
            }
        }
        if(change == 0)
        {
            cout << "NO INTEGERS!" <<endl;
            return 0;
        }

        cout << "Largest Integer: " << ival <<endl;
        return 0;
    }
    else if(cmd == "r2")
    {
        char seq;
        int pool[26];
        for(int i=0; i<26; i++)
            pool[i] = i;
        
        int poolsize = 26;

        srand(time(NULL));

        for(int i=0; i<26; i++)
        {
            int val = rand()%poolsize;
            seq = 'a' + pool[val];
            cout << seq << endl;
            pool[val] = pool[poolsize-1];
            poolsize--;
        }
        return 0;
    }
    else if(cmd == "r3")
    {
        ifstream myfile;
        myfile.open("dict.txt");
        map<char,char> fmap;
        map<char,char> smap;
        string entry;

        while(myfile >> entry)
            fmap[ entry[0] ] = entry[1];
        myfile.close();

        for(auto it = fmap.begin(); it != fmap.end(); it++)
            smap[it->second] = it->first;

        string enchw= "Hello, world\n";
        cout << enchw;
        for(int i=0; i < enchw.length(); i++)
        {
            if(isalpha(enchw[i]))
            {
            if(isupper(enchw[i]))
            {
                enchw[i] = enchw[i] + 32;
                enchw[i] = fmap[enchw[i]];
                enchw[i] = enchw[i] - 32;
            }
            else if(islower(enchw[1]))
            {
                enchw[i] = fmap[enchw[i]];
            }
            }
            else
            {
                enchw[i] = enchw[i];
            }
        }
    
        string dechw = enchw;
        for(int i=0; i < dechw.length(); i++)
        {
            if(isupper(dechw[i]))
            {
                dechw[i] = dechw[i] + 32;
                dechw[i] = smap[dechw[i]];
                dechw[i] = dechw[i] - 32;
            }
            else if(islower(dechw[i]))
            {
                dechw[i] = smap[dechw[i]];
            }
            else
            {
                dechw[i] = dechw[i];
            }
        }
        cout << enchw;
        cout << dechw;
        return 0;
    }
    else
    {
        cout << cmd << " INVALID COMMAND" <<endl;
    }

    return 0;
}
