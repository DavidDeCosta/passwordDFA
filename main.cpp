#include <iostream>
#include <map>
#include <assert.h>
#include <vector>

using namespace std;

void checkValidity(string password);


    using state = string;
    using input = string;
    using myMap = map<pair<state, input>, state>;


int main()
{

    string password;



    myMap justAMap;

    justAMap[{"Q0", "a"}] = "Q1";
    justAMap[{"Q0", "b"}] = "Q1";
    justAMap[{"Q0", "0"}] = "Q5";
    justAMap[{"Q0", "1"}] = "Q5";

    justAMap[{"Q1", "a"}] = "Q2";
    justAMap[{"Q1", "b"}] = "Q2";
    justAMap[{"Q1", "0"}] = "Q2";
    justAMap[{"Q1", "1"}] = "Q2";

    justAMap[{"Q2", "a"}] = "Q3";
    justAMap[{"Q2", "b"}] = "Q3";
    justAMap[{"Q2", "0"}] = "Q3";
    justAMap[{"Q2", "1"}] = "Q3";

    justAMap[{"Q3", "a"}] = "Q4";
    justAMap[{"Q3", "b"}] = "Q4";
    justAMap[{"Q3", "0"}] = "Q4";
    justAMap[{"Q3", "1"}] = "Q4";

    justAMap[{"Q4", "a"}] = "Q13";
    justAMap[{"Q4", "b"}] = "Q13";
    justAMap[{"Q4", "0"}] = "Q13";
    justAMap[{"Q4", "1"}] = "Q13";

    justAMap[{"Q5", "a"}] = "Q6";
    justAMap[{"Q5", "b"}] = "Q6";
    justAMap[{"Q5", "0"}] = "Q7";
    justAMap[{"Q5", "1"}] = "Q7";

    justAMap[{"Q6", "a"}] = "Q11";
    justAMap[{"Q6", "b"}] = "Q11";
    justAMap[{"Q6", "0"}] = "Q11";
    justAMap[{"Q6", "1"}] = "Q11";

    justAMap[{"Q7", "a"}] = "Q8";
    justAMap[{"Q7", "b"}] = "Q8";
    justAMap[{"Q7", "0"}] = "Q9";
    justAMap[{"Q7", "1"}] = "Q9";

    justAMap[{"Q8", "a"}] = "Q11";
    justAMap[{"Q8", "b"}] = "Q11";
    justAMap[{"Q8", "0"}] = "Q11";
    justAMap[{"Q8", "1"}] = "Q11";

    justAMap[{"Q9", "a"}] = "Q10";
    justAMap[{"Q9", "b"}] = "Q10";
    justAMap[{"Q9", "0"}] = "Q13";
    justAMap[{"Q9", "1"}] = "Q13";

    justAMap[{"Q10", "a"}] = "Q13";
    justAMap[{"Q10", "b"}] = "Q13";
    justAMap[{"Q10", "0"}] = "Q13";
    justAMap[{"Q10", "1"}] = "Q13";

    justAMap[{"Q11", "a"}] = "Q12";
    justAMap[{"Q11", "b"}] = "Q12";
    justAMap[{"Q11", "0"}] = "Q12";
    justAMap[{"Q11", "1"}] = "Q12";

    justAMap[{"Q12", "a"}] = "Q13";
    justAMap[{"Q12", "b"}] = "Q13";
    justAMap[{"Q12", "0"}] = "Q13";
    justAMap[{"Q12", "1"}] = "Q13";

    justAMap[{"Q13", "a"}] = "Q13";
    justAMap[{"Q13", "b"}] = "Q13";
    justAMap[{"Q13", "0"}] = "Q13";
    justAMap[{"Q13", "1"}] = "Q13";


    cout << "Enter a passwork: \n";
    cin >> password;


    checkValidity(password);


    return 0;
}

