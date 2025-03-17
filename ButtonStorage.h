
#ifndef ButtonStorage_H
#define ButtonStorage_H

char config[] = "config.txt";
char wyniki[] = "wyniki.txt";
/**
 * @brief Klasa zapisuj¹ca ustawienia sterowania.
 *
 * Ta klasa odpowiada za zapisanie ustawieñ sterowania i wczytania tych ustawieñ przy nastêpnym uruchomieniu gry.
 */
class ButtonStorage {
public:
    sf::Keyboard::Key leftButton;
    sf::Keyboard::Key rightButton;
    sf::Keyboard::Key spaceButton;
    /**
    * @brief £aduje ustawienia przycisków z pliku.
    *
    */
    ButtonStorage() {
        // Domyœlne przyciski
        loadFromFile(config);

    }
    /**
     * @brief Ustawia przycisk odpowiadaj¹cy za ruch w lewo.
     *
     * @param button Nazwa klawisza klawiatury.
     * 
     */
    void setLeftButton(sf::Keyboard::Key button) {
        if (leftButton != button) {
            leftButton = button;
            saveToFile(config);
        }
    }
    /**
     * @brief Ustawia przycisk odpowiadaj¹cy za ruch w prawo.
     *
     * @param button Nazwa klawisza klawiatury.
     *
     */
    void setRightButton(sf::Keyboard::Key button) {
        if (rightButton != button) {
            rightButton = button;
            saveToFile(config);
        }
    }
    /**
     * @brief Ustawia przycisk odpowiadaj¹cy za ruch w górê.
     *
     * @param button Nazwa klawisza klawiatury.
     *
     */
    void setSpaceButton(sf::Keyboard::Key button) {
        if (spaceButton != button) {
            spaceButton = button;
            saveToFile(config);
        }
    }
    /**
     * @brief Zapisuje ustawienia sterowania.
     *
     * @param config Nazwa pliku, w którym zapisuje ustawienia.
     *
     */
    void saveToFile(const std::string& config) {
        std::ofstream file(config);
        if (file.is_open()) {
            file << static_cast<int>(leftButton) << "\n";
            file << static_cast<int>(rightButton) << "\n";
            file << static_cast<int>(spaceButton) << "\n";
            file.close();
        }
    }
    /**
     * @brief Wczytuje ustawienia sterowania.
     *
     * @param config Nazwa pliku, w którym zapisane s¹ ustawienia.
     *
     */
    void loadFromFile(const std::string& config) {
        std::ifstream file(config);
        if (file.is_open()) {
            int left, right, space;
            file >> left >> right >> space;
            leftButton = static_cast<sf::Keyboard::Key>(left);
            rightButton = static_cast<sf::Keyboard::Key>(right);
            spaceButton = static_cast<sf::Keyboard::Key>(space);
            file.close();
        }
    }
};
#endif