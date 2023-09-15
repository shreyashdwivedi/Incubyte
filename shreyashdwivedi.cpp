#include <bits/stdc++.h>
using namespace std;

class Chandrayaan3 {
private:
    int x, y, z;
    char direction;

public:
    Chandrayaan3(int initial_x, int initial_y, int initial_z, char initial_direction) {
        x = initial_x;
        y = initial_y;
        z = initial_z;
        direction = initial_direction;
    }

    void move_forward() {
        if (direction == 'N') {
            y += 1;
        } else if (direction == 'S') {
            y -= 1;
        } else if (direction == 'E') {
            x += 1;
        } else if (direction == 'W') {
            x -= 1;
        } else if (direction == 'U') {
            z += 1;
        } else if (direction == 'D') {
            z -= 1;
        }
    }

    void move_backward() {
        if (direction == 'N') {
            y -= 1;
        } else if (direction == 'S') {
            y += 1;
        } else if (direction == 'E') {
            x -= 1;
        } else if (direction == 'W') {
            x += 1;
        } else if (direction == 'U') {
            z -= 1;
        } else if (direction == 'D') {
            z += 1;
        }
    }

    void turn_left() {
        if (direction == 'N') {
            direction = 'W';
        } else if (direction == 'S') {
            direction = 'E';
        } else if (direction == 'E') {
            direction = 'N';
        } else if (direction == 'W') {
            direction = 'S';
        }
    }

    void turn_right() {
        if (direction == 'N') {
            direction = 'E';
        } else if (direction == 'S') {
            direction = 'W';
        } else if (direction == 'E') {
            direction = 'S';
        } else if (direction == 'W') {
            direction = 'N';
        }
    }

    void turn_up() {
        if (direction != 'U') {
            direction = 'U';
        }
    }

    void turn_down() {
        if (direction != 'D') {
            direction = 'D';
        }
    }

    void execute_commands(const vector<char>& commands) {
        for (char command : commands) {
            if (command == 'f') {
                move_forward();
            } else if (command == 'b') {
                move_backward();
            } else if (command == 'l') {
                turn_left();
            } else if (command == 'r') {
                turn_right();
            } else if (command == 'u') {
                turn_up();
            } else if (command == 'd') {
                turn_down();
            }
        }
    }

    void print_position_and_direction() {
        cout << "Final Position: (" << x << ", " << y << ", " << z << ")" << endl;
        cout << "Final Direction: " << direction << endl;
    }
};

int main() {
    Chandrayaan3 spacecraft(0, 0, 0, 'N');
    vector<char> commands = {'f', 'r', 'u', 'b', 'l'};
    
    spacecraft.execute_commands(commands);
    spacecraft.print_position_and_direction();
    
    return 0;
}