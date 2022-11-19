#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double original, goal, people_alive, error, people_artifical;
    cin >> original >> goal >> people_alive;
    error = goal - (int)goal;
    error = 0.0499999 - error - 0.00001;
    goal += error;
    people_artifical = ceil(((people_alive * original) - (people_alive * goal)) / (goal - 1));
    cout << people_artifical;
    


}