#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()

{
    int num;
    cin >> num;
    while(num){
        string str;
        cin >> str;
        --num;
        
        // first char must be a-z A-Z
        regex reg1("^[a-zA-Z]+$");
        string firStr = str.substr(0,1);
        bool bValid1 = regex_match(firStr, reg1);
        if(!bValid1){
            cout << "Wrong" << endl;
            continue;
        }

        // include a-z A-Z 0-9
        regex reg2("^[0-9a-zA-Z]+$");
        bool bValid2 = regex_match(str, reg2);
        if(!bValid2){
            cout << "Wrong" << endl;
            continue;
        }

        regex reg3("(.*?)\\d(.*?)");
        bool bValid3 = regex_match(str, reg3);
        if(!bValid3){
            cout << "Wrong" << endl;
            continue;
        }
        cout << "Accept" << endl;
    }

    return 0;
}