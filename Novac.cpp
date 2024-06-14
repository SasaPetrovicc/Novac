#include <iostream>
#include <vector>
using namespace std;

void prebrojavanjeNovcanica(int iznos) {
    // Vrednosti novčanica u dinarima
    vector<int> vrednostiNovcanica = {2000, 1000, 500, 100, 50, 20, 10, 5, 2, 1};

    // Rešenje kao parovi (novčanica, broj komada)
    vector<pair<int, int>> resenje;

    // Petlja za prolazak kroz vrednosti novčanica
    for (int vrednost : vrednostiNovcanica) {
        // Provera da li je iznos veći od trenutne vrednosti novčanice
        if (iznos >= vrednost) {
            // Računanje broja novčanica potrebnih za pokrivanje dela iznosa
            int brojNovcanica = iznos / vrednost;
            // Ažuriranje preostalog iznosa
            iznos -= brojNovcanica * vrednost;
            // Dodavanje novog para (novčanica, broj komada) u vektor rešenja
     resenje.push_back(make_pair(vrednost, brojNovcanica));
        }
    }

    // Ispis rezultata
    cout << "Za ovaj iznos potrebne su sledeće novčanice:" << endl;
    for (const auto& par : resenje) {
        cout << par.second << " novčanica od " << par.first << " dinara" << endl;
    }
}

int main() {
    int iznos;
    cout << "Unesite iznos: ";
    cin >> iznos;
    prebrojavanjeNovcanica(iznos);
    return 0;
}
