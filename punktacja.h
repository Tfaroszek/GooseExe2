#ifndef punktacja_H
#define punktacja_H
/**
 * @brief Klasa odpowiadaj¹ca za punktacjê.
 *
 * Ta klasa odpowiada za zapis i odczyt najlepszego wyniku poziomów.
 * 
 */
class punktacja {

public:
    /**
     * @brief Wczytanie wyniku z pliku.
     *
     */
    punktacja() {
        loadFromFile(wyniki);
    }
    /**
     * @brief Zapisuje najlepszy wynik poziomu.
     *
     * @param wyniki Plik z wynikami.
     *
     */
    void saveToFile(const std::string& wyniki) {
        std::ofstream file(wyniki);
        if (file.is_open()) {
            if (wynik != 5000 && wynik >= wynikk) {
                file << static_cast<unsigned int>(wynik) << "\n";
            }
            else {
                file << static_cast<unsigned int>(wynikk) << "\n";
            }

            if (wynik2 != 5000 && wynik2 >= wynikk2) {
                file << static_cast<unsigned int>(wynik2) << "\n";
            }
            else {
                file << static_cast<unsigned int>(wynikk2) << "\n";
            }
            file << static_cast<int>(vol) << "\n";
            file << static_cast<float>(sliderposition) << "\n";
            file.close();
        }
    }
    /**
     * @brief Odczytuje najlepszy wynik poziomu.
     *
     * @param wyniki Plik z wynikami.
     *
     */
    void loadFromFile(const std::string& wyniki) {
        std::ifstream file(wyniki);
        if (file.is_open()) {

            file >> wynikk >> wynikk2 >> vol >> sliderposition;
            file.close();
            wynikk = wynikk;
            wynikk2 = wynikk2;
            vol = vol;
            sliderposition = sliderposition;
        }
    }
};
#endif
