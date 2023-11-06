#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int score = 0;
    srand(time(0));

    cout << "Witaj w quizie o kofeinie!\n\n";

    // Pytanie 1
    cout << "Pytanie 1: Jakie jest główne źródło kofeiny?\n";
    cout << "A) Herbata\n";
    cout << "B) Kawa\n";
    cout << "C) Coca-Cola\n";
    cout << "D) Sok pomarańczowy\n";
    char answer;
    cout << "Twoja odpowiedź (A/B/C/D): ";
    cin >> answer;

    if (answer == 'B' || answer == 'b') {
        cout << "Poprawna odpowiedź!\n";
        score++;
    } else {
        cout << "Zła odpowiedź. Poprawna odpowiedź to B) Kawa.\n";
    }
    cout << "\n";

    // Pytanie 2
    cout << "Pytanie 2: Który napój zawiera najwięcej kofeiny na 100 ml?\n";
    cout << "A) Herbata\n";
    cout << "B) Kawa\n";
    cout << "C) Coca-Cola\n";
    cout << "D) Sok pomarańczowy\n";
    cout << "Twoja odpowiedź (A/B/C/D): ";
    cin >> answer;

    if (answer == 'B' || answer == 'b') {
        cout << "Poprawna odpowiedź!\n";
        score++;
    } else {
        cout << "Zła odpowiedź. Poprawna odpowiedź to B) Kawa.\n";
    }
    cout << "\n";

    // Pytanie 3
    cout << "Pytanie 3: Kofeina działa jako:\n";
    cout << "A) Stymulant\n";
    cout << "B) Depresant\n";
    cout << "C) Antybiotyk\n";
    cout << "D) Przeciwbólowy\n";
    cout << "Twoja odpowiedź (A/B/C/D): ";
    cin >> answer;

    if (answer == 'A' || answer == 'a') {
        cout << "Poprawna odpowiedź!\n";
        score++;
    } else {
        cout << "Zła odpowiedź. Poprawna odpowiedź to A) Stymulant.\n";
    }
    cout << "\n";

    // Pytanie 4
    cout << "Pytanie 4: Jaka jest dzienna zalecana dawka kofeiny dla dorosłego człowieka?\n";
    cout << "A) 100 mg\n";
    cout << "B) 200 mg\n";
    cout << "C) 400 mg\n";
    cout << "D) 600 mg\n";
    cout << "Twoja odpowiedź (A/B/C/D): ";
    cin >> answer;

    if (answer == 'C' || answer == 'c') {
        cout << "Poprawna odpowiedź!\n";
        score++;
    } else {
        cout << "Zła odpowiedź. Poprawna odpowiedź to C) 400 mg.\n";
    }
    cout << "\n";

    // Pytanie 5
    cout << "Pytanie 5: Jakie działanie kofeina ma na organizm?\n";
    cout << "A) Relaksuje\n";
    cout << "B) Powoduje senność\n";
    cout << "C) Zwiększa czujność\n";
    cout << "D) Obniża ciśnienie krwi\n";
    cout << "Twoja odpowiedź (A/B/C/D): ";
    cin >> answer;

    if (answer == 'C' || answer == 'c') {
        cout << "Poprawna odpowiedź!\n";
        score++;
    } else {
        cout << "Zła odpowiedź. Poprawna odpowiedź to C) Zwiększa czujność.\n";
    }
    cout << "\n";

    cout << "Koniec quizu! Twój wynik to: " << score << " / 5\n";

    return 0;
}
