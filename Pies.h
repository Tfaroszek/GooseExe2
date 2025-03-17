#ifndef Pies_H
#define Pies_H

/**
 * @brief Odpowiada za zachowanie obiektu pies.
 *
 * Funkcja ta przyjmuje dane obiekt�w dotycz�ce zachowania psa. Przyjmuje dane o platformie po kt�rej si� porusza i jej ko�cach.
 * Przyjmuje te� obiekty z grafik� odpowiadaj�ce za poruszanie si� psa w lewo i w prawo, kt�re zmienia na zmian� zale�nie w kt�r� stron� si� porusza.
 * Sprawdza kolizj� obiektu gracza z kolcewall.
 * 
 * @param floors Wektor maj�cy dane o obiektach platformy, na kt�rych porusza si� pies.
 * @param player Obiekt gracza.
 * @param KolceWall Obiekt odpowiadaj�cy za �cian� kolcy.
 * @param Floor15L Obiekt lewego ko�ca platformy.
 * @param Pies Obiekt reprezentuj�cy psa.
 * @param piesL Pierwszy obiekt reprezentuj�cy poruszanie si� psa w lewo.
 * @param piesL1 Drugi obiekt reprezentuj�cy poruszanie si� psa w lewo.
 * @param piesP Pierwszy obiekt reprezentuj�cy poruszanie si� psa w prawo.
 * @param piesP1 Drugi obiekt reprezentuj�cy poruszanie si� psa w lewo.
 */
void pies(const std::vector<std::vector<sf::RectangleShape>>& floors,sf::RectangleShape& player, sf::RectangleShape& KolceWall, sf::RectangleShape& Floor15L, sf::RectangleShape& Pies,
    const sf::Texture& piesL, const sf::Texture& piesL1, const sf::Texture& piesP, const sf::Texture& piesP1) {
    if (player.getGlobalBounds().intersects(KolceWall.getGlobalBounds()))
    {
        kolizjapulapka2(KolceWall, player);
    }
    bool Piesel = false;
    /**
 * @brief Instrukcje warunkowe if sprawdzaj�ce pozycj� obiektu gracza, je�li obiekt gracza jest na tej samej platformie co pies, pies przy�piesza, je�li nie, pies jest wolniejszy.
 *
 */
    for (int i = 0; i < floors[14].size(); ++i) {
        if (player.getGlobalBounds().intersects(floors[14][i].getGlobalBounds())) {
            speeddog = 6;
            Piesel = true;
        }
    }
    if (!Piesel) {
        speeddog = 2;
    }
 
    if (player.getGlobalBounds().intersects(Pies.getGlobalBounds())) {
        reset = true;
    }


    if (elapsed2.asSeconds() >= 0.01)  // Sprawdzanie, czy min�o
    {
        if (Pies.getGlobalBounds().intersects(Floor15L.getGlobalBounds())) {

            lewo = false;
        }
        if (Pies.getGlobalBounds().intersects(KolceWall.getGlobalBounds())) {
            lewo = true;
        }
        if (lewo) {
            Pies.move(-speeddog, 0);
            Pies.setTexture(&piesL, true);
            animateCharacter(Pies, piesL, piesL1);
        }
        if (!lewo) {
            Pies.move(speeddog, 0);
            Pies.setTexture(&piesP, true);
            animateCharacter(Pies, piesP, piesP1);
        }
        clock2.restart();
    }

}


#endif