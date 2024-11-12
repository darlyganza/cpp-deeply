#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

vector<string> getWordList(const string& category) {
    if (category == "animals") {
        return vector<string>{"elephant", "giraffe", "kangaroo", "penguin", "dolphin"};
    } else if (category == "teams") {
        return vector<string>{"lakers", "bulls", "warriors", "celtics", "heat"};
    } else if (category == "districts") {
        return vector<string>{"manhattan", "brooklyn", "queens", "bronx", "staten"};
    } else if (category == "films") {
        return vector<string>{"inception", "titanic", "avatar", "gladiator", "jaws"};
    } else if (category == "books") {
        return vector<string>{"moby_dick", "1984", "pride_and_prejudice", "the_great_gatsby", "hamlet"};
    }
    return {};
}

string displayWord(const string& word, const vector<char>& guessedLetters) {
    string displayedWord;
    for (char letter : word) {
        if (find(guessedLetters.begin(), guessedLetters.end(), letter) != guessedLetters.end()) {
            displayedWord += letter;
        } else {
            displayedWord += '_';
        }
    }
    return displayedWord;
}

void playGame() {
    cout << "Welcome to the Word Guessing Game!\n";

    vector<string> categories = {"animals", "teams", "districts", "films", "books"};
    cout << "Please choose a category:\n";
    for (size_t i = 0; i < categories.size(); ++i) {
        cout << i + 1 << ". " << categories[i] << endl;
    }

    int categoryChoice;
    cout << "Enter the number of your choice: ";
    cin >> categoryChoice;

    if (categoryChoice < 1 || categoryChoice > categories.size()) {
        cout << "Invalid choice, exiting the game.\n";
        return;
    }

    string category = categories[categoryChoice - 1];
    vector<string> wordList = getWordList(category);
    srand(static_cast<unsigned int>(time(0)));
    string word = wordList[rand() % wordList.size()];
    vector<char> guessedLetters;
    int chances = 6;

    cout << "\nYou have " << chances << " chances to guess the word.\n";

    while (chances > 0) {
        cout << "\nCurrent word: " << displayWord(word, guessedLetters) << endl;
        cout << "Guess a letter (or type 'exit' to quit): ";
        
        string input;
        cin >> input;

        if (input == "exit") {
            cout << "Thanks for playing!\n";
            return;
        }

        if (input.length() != 1 || !isalpha(input[0])) {
            cout << "Please enter a single letter.\n";
            continue;
        }

        char guess = tolower(input[0]);
        
        if (find(guessedLetters.begin(), guessedLetters.end(), guess) != guessedLetters.end()) {
            cout << "You've already guessed that letter.\n";
            continue;
        }

        guessedLetters.push_back(guess);

        if (word.find(guess) != string::npos) {
            cout << "Good guess!\n";
            bool allGuessed = true;
            for (char letter : word) {
                if (find(guessedLetters.begin(), guessedLetters.end(), letter) == guessedLetters.end()) {
                    allGuessed = false;
                    break;
                }
            }
            if (allGuessed) {
                cout << "Congratulations! You've guessed the word: " << word << endl;
                break;
            }
        } else {
            chances--;
            cout << "Wrong guess! You have " << chances << " chances left.\n";
        }
    }

    if (chances == 0) {
        cout << "Sorry, you've run out of chances. The word was: " << word << endl;
    }
}

int main() {
    while (true) {
        playGame();
        string playAgain;
        cout << "Do you want to play again? (yes/no): ";
        cin >> playAgain;
        if (playAgain != "yes") {
            cout << ""
