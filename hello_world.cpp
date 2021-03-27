#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    if (argc <= 1) {
        cout << " Please specify at least one input value " << endl;
        cout << " Example: hellow_world John" << endl;
        cerr << " Program Terminating " << endl;
        }
        else {
            cout << "hello world " << argv[1] << endl;
            return 0;
                }
            
            }
            /*To compile% g++ -std=c++17 hello_world.cpp -o hello_worldTo run use:
% ./hello_world Name*/

           