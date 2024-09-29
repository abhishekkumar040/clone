#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to shuffle the puzzle tiles
void shuffle(vector<int>& puzzle) {
    random_shuffle(puzzle.begin(), puzzle.end());
}

// Function to check if the puzzle is solved
bool isSolved(const vector<int>& puzzle) {
    for (size_t i = 0; i < puzzle.size() - 1; ++i) {
        if (puzzle[i] != i + 1) {
            return false;
        }
    }
    return true;
}

// Function to print the puzzle
void printPuzzle(const vector<int>& puzzle) {
    cout << "Puzzle: ";
    for (int tile : puzzle) {
        cout << tile << " ";
    }
    cout << endl;
}

int main() {
    // Initialize the puzzle with numbers 1 to 8 and a blank space represented by 0
    vector<int> puzzle = {1, 2, 3, 4, 5, 6, 7, 8, 0};

    // Shuffle the puzzle
    shuffle(puzzle);

    // Display the initial puzzle
    printPuzzle(puzzle);

    // Game loop
    while (!isSolved(puzzle)) {
        int move;
        cout << "Enter the number you want to move (1-8): ";
        cin >> move;

        // Find the position of the move
        auto it = find(puzzle.begin(), puzzle.end(), move);
        int index = distance(puzzle.begin(), it);

        // Check if the move is valid
        if (index != 8 && (index % 3 == 0 || index % 3 == 1)) {
            swap(puzzle[index], puzzle[index + 1]); // Move right
        } else if (index !

