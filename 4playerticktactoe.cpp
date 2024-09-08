#include <iostream>

void drawBoard(const char *spaces);

class player{
public:
char symbol = '🟦';

player(char 🟦) : symbol(🟦) {}

void move(char *spaces){
    int number;
    do{
        std::cout << "Enter a spot to place a marker (1-25): ";
        std::cin >> number;
        number--;
        if(spaces[number] == ' '){
           spaces[number] = symbol;
           break; 
        }
    }while(!number > 0 || !number < 35);
}
};


class player1 : public player{
public:
    player1() : player('🟥') {}

};
class player2 : public player{
public:
    player2() : player('🟨') {}

};
class player3 : public player{
public:
    player3() : player('🟩') {}

};
class player4 : public player{
public:
    player4() : player('🟦') {}

};


int main(){

    player1 p1;
    player2 p2;
    player3 p3;
    player4 p4;

    char spaces[25] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    bool running = true;

    while(running){
        drawBoard(spaces);
        p1.move(spaces);
        drawBoard(spaces);
        p2.move(spaces);
        drawBoard(spaces);
        p3.move(spaces);
        drawBoard(spaces);
        p4.move(spaces);
        drawBoard(spaces);
    }

    return 0;
}

void drawBoard(const char *spaces) {
    const int rows = 5;
    const int cols = 5;

    std::cout << '\n';
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "  " << spaces[i * cols + j] << "  ";
            if (j < cols - 1) std::cout << "|";
        }
        std::cout << '\n';
        if (i < rows - 1) {
            std::cout << "-----";
            for (int j = 1; j < cols; ++j) std::cout << "+-----";
            std::cout << '\n';
        }
    }
    std::cout << '\n';
}
bool checkTie(char *spaces){

    for(int i = 0; i < 36; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    std::cout << "IT'S A TIE!\n";
    return true;
}
bool checkWinner(){

}