#include <iostream>
using namespace std;

int main() {
    string hero_name;
    int hero_xp;
    string hero_rank;

    cout << "what is thy name, hero? ";
    cin >> hero_name;

    cout << "what is thy xp level? ";
    cin >> hero_xp;

    if (hero_xp <= 1000) {
        hero_rank = "iron";
    } else if (hero_xp > 1000 && hero_xp <= 2000) {
        hero_rank = "bronze";
    } else if (hero_xp > 2000 && hero_xp <= 6000) {
        hero_rank = "silver";
    } else if (hero_xp > 6000 && hero_xp <= 7000) {
        hero_rank = "gold";
    } else if (hero_xp > 7000 && hero_xp <= 8000) {
        hero_rank = "platinum";
    } else if (hero_xp > 8000 && hero_xp <= 9000) {
        hero_rank = "ascending";
    } else if (hero_xp > 9000 && hero_xp <= 10000) {
        hero_rank = "immortal";
    } else if (hero_xp > 10000) {
        hero_rank = "radiant";
    }

    cout << "the hero named " << hero_name << " has the rank " << hero_rank << endl;
    return 42;
}