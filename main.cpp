//Name: David DeCosta
//Date: 10/05/2022
/*Program Description:
                        This program implements a DFA that validates whether a password compiles
                        given requirements. The requirements as of now are the DFA will accept
                        E={a,b,0,1} and must be 3 to 4 characters long while containing atleast one letter.
*/

#include <iostream>
#include <map>

using namespace std;

void checkAccepted(string password , map <pair<string, char>, string> m);


int main()
{

    string password;

    map <pair<string, char>, string> justAMap;

    justAMap[{"Q0", 'a'}] = "Q1";
    justAMap[{"Q0", 'b'}] = "Q1";
    justAMap[{"Q0", '0'}] = "Q5";
    justAMap[{"Q0", '1'}] = "Q5";

    justAMap[{"Q1", 'a'}] = "Q2";
    justAMap[{"Q1", 'b'}] = "Q2";
    justAMap[{"Q1", '0'}] = "Q2";
    justAMap[{"Q1", '1'}] = "Q2";

    justAMap[{"Q2", 'a'}] = "Q3";  // Q2 is Q2 final state
    justAMap[{"Q2", 'b'}] = "Q3";
    justAMap[{"Q2", '0'}] = "Q3";
    justAMap[{"Q2", '1'}] = "Q3";

    justAMap[{"Q3", 'a'}] = "Q4";  // Q3 is Q3 final state
    justAMap[{"Q3", 'b'}] = "Q4";
    justAMap[{"Q3", '0'}] = "Q4";
    justAMap[{"Q3", '1'}] = "Q4";

    justAMap[{"Q4", 'a'}] = "Q9";
    justAMap[{"Q4", 'b'}] = "Q9";
    justAMap[{"Q4", '0'}] = "Q9";
    justAMap[{"Q4", '1'}] = "Q9";

    justAMap[{"Q5", 'a'}] = "Q6";
    justAMap[{"Q5", 'b'}] = "Q6";
    justAMap[{"Q5", '0'}] = "Q7";
    justAMap[{"Q5", '1'}] = "Q7";

    justAMap[{"Q6", 'a'}] = "Q3";
    justAMap[{"Q6", 'b'}] = "Q3";
    justAMap[{"Q6", '0'}] = "Q3";
    justAMap[{"Q6", '1'}] = "Q3";

    justAMap[{"Q7", 'a'}] = "Q3";
    justAMap[{"Q7", 'b'}] = "Q3";
    justAMap[{"Q7", '0'}] = "Q8";
    justAMap[{"Q7", '1'}] = "Q8";

    justAMap[{"Q8", 'a'}] = "Q4";
    justAMap[{"Q8", 'b'}] = "Q4";
    justAMap[{"Q8", '0'}] = "Q9";
    justAMap[{"Q8", '1'}] = "Q9";

    justAMap[{"Q9", 'a'}] = "Q9";  //Q9 Trap State
    justAMap[{"Q9", 'b'}] = "Q9";
    justAMap[{"Q9", '0'}] = "Q9";
    justAMap[{"Q9", '1'}] = "Q9";



    while(password != "Ctrl^ C")
    {
    cout << "Enter a password (Ctrl^C to end): \n";
    cin >> password;

    for(int i = 0; i < password.length();i++)
    {
        if(password[i] != 'a' && password[i] != 'b' && password[i] != '0' && password[i] !='1')
        {
            exit(0);
        }
    }


    checkAccepted(password, justAMap);
    }

    return 0;
}

void checkAccepted(string password, map <pair<string, char>, string> m)
{

    string currstate = "Q0";   //always start at Q0 but will update after every itteration
    string nextstate = " ";    //will be assigned by the make_pair function return
    string finalState1 = "Q3";
    string finalState2 = "Q4";

    cout <<"[" + currstate + "]" << "- ";
    for(int j = 0; j < password.length(); j++)
    {
        nextstate = m[make_pair(currstate,password[j])];
        cout  <<password[j] << " -> " << + "["+ nextstate + "]";
        if(j < password.length()-1)
        {
            cout << "-> ";
        }
        currstate = nextstate;
    }
    
    if(currstate == finalState1 || currstate == finalState2)
    {
        cout << " : Accepted \n";
    }
    else
    {
        cout << " : Rejected \n";
    }   

}
