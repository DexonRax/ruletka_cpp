class Ruletka{

private:
    int numbers;
    int cash;


public:
    Ruletka();
    Ruletka(int);
    int Roll(char, int);
    int GetNumbers();
    int GetCash();
    char GetColor(int);
};