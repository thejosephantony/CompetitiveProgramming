// Finding Missing Cards
// Taro is going to play a card game. However, now he has only n cards, even though there should be 52 cards (he has no Jokers).

// The 52 cards include 13 ranks of each of the four suits: spade, heart, club and diamond.

// Input
// In the first line, the number of cards n (n ≤ 52) is given.

// In the following n lines, data of the n cards are given. Each card is given by a pair of a character and an integer which represent its suit and rank respectively. A suit is represented by 'S', 'H', 'C' and 'D' for spades, hearts, clubs and diamonds respectively. A rank is represented by an integer from 1 to 13.

// Output
// Print the missing cards. The same as the input format, each card should be printed with a character and an integer separated by a space character in a line. Arrange the missing cards in the following priorities:

// Print cards of spades, hearts, clubs and diamonds in this order.
// If the suits are equal, print cards with lower ranks first.

#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::pair;
using std::make_pair;
using std::find;

int main() {
    int n;
    cin >> n;
    
    vector<pair<char, int>> cards;
    
    for (int i = 0; i < n; i++) {
        char suit;
        int rank;

        cin >> suit >> rank;
        cards.push_back(make_pair(suit, rank));
    }

    for (char suit : {'S', 'H', 'C', 'D'}) {
        for (int rank = 1; rank <= 13; rank++) {
            if (find(cards.begin(), cards.end(), make_pair(suit, rank)) == cards.end()) {
                cout << suit << " " << rank << endl;
            }
        }
    }

    return 0;
}