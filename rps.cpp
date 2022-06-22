#include<iostream>

using namespace std;

class Tool {
    protected:
        int strength = 0;
        char type;
    public:
        void setStrength(int number) {
            strength = number;
        }
        int get_strength(){
            return strength;
        }
        
        void setType(char name) {
            type = name;
        }
        char get_type() {
            return type;
        }
};



Tool fight(Tool a, Tool b) {
    if(a.get_strength() > b.get_strength()){
        return a;
    } else if (b.get_strength() > a.get_strength()) {
        return b;
    }
}

class Rock: public Tool {
           
};

class Paper: public Tool {

};

class Scissors: public Tool {

};

char choice() {
    char entry;
    cout << "Enter your choice" << endl;
    cin >> entry;
    if(entry == 'r') {
        cout << "You chose Rock" << endl;
    } else if(entry == 'p') {
        cout << "You chose Paper" << endl;
    } else if(entry == 's') {
        cout << "You chose Scissors" << endl;
    } else {
        cout << "Something went wrong" << endl;
    }

    return entry;
}

int main() {
    Rock rock;
    rock.setType('r');
    rock.setStrength(1);

    Paper paper;
    paper.setType('p');
    paper.setStrength(1);

    Scissors scissors;
    scissors.setType('s');
    scissors.setStrength(1);

    Tool player1, player2;
    char p1, p2;

    cout << "Player 1" << endl;
    p1 = choice();
    if(p1 == 'r') {
        player1 = rock;
    } else if(p1 == 's') {
        player1 = scissors;
    } else if (p1 == 'p') {
        player1 = paper;
    }

    cout << "Player 2" << endl;
    p2 = choice();
    if(p2 == 'r') {
        player2 = rock;
    } else if (p2 == 'p') {
        player2 = paper;
    } else if(p2 == 's') {
        player2 = scissors;
    }



    Tool victor;


    if(player1.get_type() == 'r' && player2.get_type() == 's') {
        player1.setStrength(2);
    } else if(player1.get_type() == 'r' && player2.get_type() == 'p') {
        player2.setStrength(2);
    } else if(player1.get_type() == 's' && player2.get_type() == 'p') {
        player1.setStrength(2);
    } else if(player1.get_type() == 's' && player2.get_type() == 'r') {
        player2.setStrength(2);
    } else if(player1.get_type() == 'p' && player2.get_type() == 'r') {
        player1.setStrength(2); 
    } else if(player1.get_type() == 'p' && player2.get_type() == 's') {
        player2.setStrength(2);
    }


    
    victor = fight(player1, player2);
    cout << "Victor: " << victor.get_type() << endl;

    

    return 0;
}
