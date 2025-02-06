#include <iostream>  
#include <string>  
using namespace std;

int main() {
    int x = 0;   
    int y = 0;   

    string direction;  
    int steps;  

      
    while (true) {
        cout << "enter direction(N,E,S,W) or STOP to end programm: ";
        cin >> direction;   
        if (direction == "STOP") {
            break;  
        }
        cout << "enter number of steps: ";
        cin >> steps;     
        if (direction == "N") {
            y += steps;  
        }
        else if (direction == "E") {
            x += steps;   
        }
        else if (direction == "S") {
            y -= steps;  
        }
        else if (direction == "W") {
            x -= steps;  
        }
        else {
            cout << "direction isnt right try again." << endl;
        }
    }

      
    cout << "finally point: (" << x << ", " << y << ")" << endl;
}//наверное можно без стринга, но я не знаю как