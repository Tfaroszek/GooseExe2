#ifndef Pies_H
#define Pies_H

/**
 * @brief Odpowiada za zachowanie obiektu pies.
 *
 * Funkcja ta przyjmuje dane obiektów dotycz¹ce zachowania psa. Przyjmuje dane o platformie po której siê porusza i jej koñcach.
 * Przyjmuje te¿ obiekty z grafik¹ odpowiadaj¹ce za poruszanie siê psa w lewo i w prawo, które zmienia na zmianê zale¿nie w któr¹ stronê siê porusza.
 * Sprawdza kolizjê obiektu gracza z kolcewall.
 * 
 * @param floors Wektor maj¹cy dane o obiektach platformy, na których porusza siê pies.
 * @param player Obiekt gracza.
 * @param KolceWall Obiekt odpowiadaj¹cy za œcianê kolcy.
 * @param Floor15L Obiekt lewego koñca platformy.
 * @param Pies Obiekt reprezentuj¹cy psa.
 * @param piesL Pierwszy obiekt reprezentuj¹cy poruszanie siê psa w lewo.
 * @param piesL1 Drugi obiekt reprezentuj¹cy poruszanie siê psa w lewo.
 * @param piesP Pierwszy obiekt reprezentuj¹cy poruszanie siê psa w prawo.
 * @param piesP1 Drugi obiekt reprezentuj¹cy poruszanie siê psa w lewo.
 */
void pies(const std::vector<std::vector<sf::RectangleShape>>& floors,sf::RectangleShape& player, sf::RectangleShape& KolceWall, sf::RectangleShape& Floor15L, sf::RectangleShape& Pies,
    const sf::Texture& piesL, const sf::Texture& piesL1, const sf::Texture& piesP, const sf::Texture& piesP1) {
    if (player.getGlobalBounds().intersects(KolceWall.getGlobalBounds()))
    {
        kolizjapulapka2(KolceWall, player);
    }
    bool Piesel = false;
    /**
 * @brief Instrukcje warunkowe if sprawdzaj¹ce pozycjê obiektu gracza, jeœli obiekt gracza jest na tej samej platformie co pies, pies przyœpiesza, jeœli nie, pies jest wolniejszy.
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


    if (elapsed2.asSeconds() >= 0.01)  // Sprawdzanie, czy minê³o
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