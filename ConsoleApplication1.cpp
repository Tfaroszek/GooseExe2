/**
 * @file main.cpp
 * @brief Plik zawierający funkcję main.
 *
 * Ten plik zawiera definicję funkcji main, która jest punktem wejścia
 * programu i sprawdzająca zdarzenia w grze.
 */
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#include <fstream>
#include <cstdio>
#include <iostream>
#include <cmath>

#include "TextureLoader.h"
#include "ButtonStorage.h"
#include "kolizjaAnimacja.h"

#include "punktacja.h"
#include "Poruszanie.h"
#include "Menu.h"
#include "Pies.h"

int main()
{

    punktacja mojaPunktacja;
    sf::Clock clock;
    /**
 * @brief Wektor pozycji suwaka.
 *
 * Pozycja suwaka odpowiadająca za głośność gry.
 */
    sf::Vector2f sliderPosition;
    /**
 * @brief Wektor początkowej pozycji suwaka.
 *
 * Początkowa pozycja suwaka odpowiadająca za głośność gry.
 */
    sf::Vector2f initialSliderPosition;
    /**
 * @brief Wektor przesunięcia myszy.
 *
 * Wektor odpowiada za przesunięcie myszy na suwaku.
 */
    sf::Vector2f mouseOffset;
    ButtonStorage buttonStorage;
    // Tworzenie okna gry
    sf::RenderWindow window(sf::VideoMode(800, 600), "Goose.exe", sf::Style::Titlebar | sf::Style::Close);
    sf::View camera = window.getDefaultView();
    sf::Shader shader;
    shader.loadFromMemory(vertexShader, fragmentShader);
    //limit klatek
    window.setFramerateLimit(40);
   
    while (window.isOpen())
    {
        /**
 * @brief Instrukcja warunkowa if odpowiadające za wczytanie muzyki.
 *
 */
        if (!music2.openFromFile("OdaDoWygranej.wav")) {
            return 0;
        }
        /**
 * @brief Instrukcja warunkowa if odpowiadające za wczytanie muzyki.
 *
 */
        if (!honk.loadFromFile("Honk_honk.wav"))
        {
            return 0;
        }
        honkk.setBuffer(honk);
        honkk.setVolume(vol);
        /**
 * @brief Instrukcja warunkowa if odpowiadające za wczytanie muzyki.
 *
 */
        if (!menu.loadFromFile("menu.wav"))
        {
            return 0;
        }
        menuu.setBuffer(menu);
        menuu.setVolume(vol);
        menuu.play();
        menuu.setLoop(true);
        
        while (isStart != 2 && isStart != 3) {

            wynik = wynik2 = 5000;
            while (isStart != 1 && isStart != 4) {
                gra = false;
                music.stop();
                handleMenu(window, honkk, menuu);
            }
            /**
 * @brief Instrukcja warunkowa if odpowiadające za przejście do menu ustawień.
 *
 */
            if (isStart == 4) {
                handleMenuSetings(window, honkk, menuu, mouseOffset);
            }
            /**
 * @brief Instrukcja warunkowa if odpowiadające za przejście do menu poziomów.
 *
 */
            if (isStart == 1)
            {
                while (isStart != 2 && isStart != 5 && isStart != 3) {
                    handleMenuLevel(window, honkk, menuu);
                }
            }
        }

        window.clear();
        /**
 * @brief Instrukcja warunkowa if odpowiadające za wczytanie muzyki.
 *
 */
        if (!dead1.loadFromFile("Better_Death_Sound.wav"))
        {
            return 0;
        }

        dead.setBuffer(dead1);
        dead.setVolume(vol);
        /**
 * @brief Instrukcja warunkowa if odpowiadające za przejście do poziomu 1.
 *
 */
        if (isStart == 2) {
    #include "poziom.cpp";
            blokady(false);
            // Pętla gry
            while (window.isOpen() && isStart != 5)
            {
                sf::Event event;
                ButtonStorage buttonStorage;
                camera.setCenter(player.getPosition());
                
                Poruszanie(window, event, player, bieg1lewo, bieg2lewo, bieg1prawo, bieg2prawo, buttonStorage, player_lewo, player_prawo, &clock);
                /**
 * @brief Wektor zawierający obiekty platform dla poziomu 1.
 *
 */
                using FloorVector = std::vector<sf::RectangleShape>;
                std::vector<FloorVector> floors = {
                    {Floor1P, Floor1L, Floor11, Floor12,Floor13, Floor14,Floor15,Floor16},
                    {Floor2P, Floor2L, Floor21, Floor22, Floor23, Floor24, Floor25, Floor26},
                    {Floor3P, Floor3L, Floor31, Floor32, Floor33, Floor34, Floor35, Floor36},
                    {Floor4P, Floor4L, Floor41},
                    {Floor5P, Floor5L, Floor51},
                    {Floor6P, Floor6L, Floor61},
                    {Floor7P, Floor7L, Floor71},
                    {Floor8P, Floor8L, Floor81},
                    {Floor9P, Floor9L, Floor91, Floor92, Floor93, Kolce94, Floor95, Floor96, Floor97, Floor98, Floor99, Floor910}
                };
                /**
 * @brief Wektor zawierający obiekty pułapek dla poziomu 1.
 *
 */
                std::vector<FloorVector> trap = {
                    {Kolce94}
                };
                /**
 * @brief Wektor zawierający obiekty wzmocnień skoku dla poziomu 1.
 *
 */
                std::vector<FloorVector> jboost = {
                   {jumpboost2}
                };

                checkTrapCollision(trap, player);
                checkJumpBoost(jboost, player);
                checkFloorCollision(floors, player);
                /**
   * @brief Wektor zawierający obiekty ozdób dla poziomu 1.
   *
   */
                std::vector<FloorVector> ozdoby = {
                   {EndDoorLaka,StartDoorLaka},
                   {tablica1,tablica2,tablica3,tablica4,tablica5},
                   {Drzewo1,Drzewo2,Drzewo3,Drzewo4,Drzewo5},
                   {Grass1,Grass2,Grass3,Grass4,Grass5,Grass6,Grass7,Grass8},
                 { pochodnia, pochodnia2, pochodnia3,pochodnia4,pochodnia5,pochodnia6,pochodnia7 }
                };
                /**
    * @brief Wektor zawierający obiekty pochodni dla poziomu 1.
    *
    */
                std::vector<sf::RectangleShape> ozdoby2 = { pochodnia, pochodnia2, pochodnia3,pochodnia4,pochodnia5,pochodnia6,pochodnia7 };
                /**
      * @brief Wektor zawierający pozycje oświetlenia dla poziomu 1.
      *
      */
                std::vector<sf::Vector2f> lightPositions = oswietlenie(window, ozdoby2,player,playerPosition);


                int size = lightPositions.size();
                /**
              * @brief Wektor zawierający kolory oświetlenia dla poziomu 1.
              *
              */
                std::vector<sf::Color> lightColors = {
                sf::Color::White, sf::Color::White, sf::Color::Green,
                sf::Color::White,  sf::Color::White,  sf::Color::Green,  sf::Color::White,
                sf::Color::White

                };
           

             
                shader.setUniform("numLights", size);

                // Przekazanie danych o pozycjach i kolorach świateł jako tablice struktur
                struct Light {
                    sf::Vector2f position;
                    sf::Color color;
                };

                std::vector<Light> lights;
                for (size_t i = 0; i < size; ++i) {
                    lights.push_back({ lightPositions[i], lightColors[i] });
                }

                for (size_t i = 0; i < size; ++i) {
                    std::string uniformName = "lights[" + std::to_string(i) + "].position";
                    shader.setUniform(uniformName.c_str(), lightPositions[i]);

                    uniformName = "lights[" + std::to_string(i) + "].color";
                    shader.setUniform(uniformName.c_str(), sf::Glsl::Vec3(lightColors[i].r / 255.f, lightColors[i].g / 255.f, lightColors[i].b / 255.f)); // Konwersja koloru do formatu używanego w shaderze
                }

                /**
   * @brief Część kodu odpowiadająca za wywołanie animacji.
   *
   */
                animateCharacter(pochodnia, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia2, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia3, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia4, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia5, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia6, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia7, pochodniaatxt1, pochodniaatxt2);
                window.clear();
                window.draw(tloL, &shader);

                windraw(floors, window, shader);
                windraw(ozdoby, window, shader);
                windraw(trap, window, shader);
                windraw(jboost, window, shader);
            
                window.draw(player, &shader);

                poziomm(window, player, Floor12, EndDoorLaka, win, player_prawo, camera,shader);
              
                window.display();
            }
        }
        /**
 * @brief Instrukcja warunkowa if odpowiadające za przejście do poziomu 2.
 *
 */
        if (isStart == 3) {
            blokady(false);
#include "poziom2.cpp";
      
            while (window.isOpen() && isStart != 5)
            {
                sf::Event event;
                ButtonStorage buttonStorage;
                camera.setCenter(player.getPosition());
                
                Poruszanie(window, event, player, bieg1lewo, bieg2lewo, bieg1prawo, bieg2prawo, buttonStorage, player_lewo, player_prawo, &clock);

                if (player.getGlobalBounds().intersects(Dash1.getGlobalBounds()) || player.getGlobalBounds().intersects(Dash2.getGlobalBounds()) || player.getGlobalBounds().intersects(Dash3.getGlobalBounds())) {
                    isBoostActive = true;
                }
                /**
 * @brief Wektor zawierający obiekty platform dla poziomu 2.
 *
 */
                using FloorVector = std::vector<sf::RectangleShape>;
                std::vector<FloorVector> floors = {
                    {Floor1P, Floor1L, Floor11, Floor12,Floor13, Floor14,Floor15,Floor16},
                    {Floor2P, Floor2L, Floor21, Floor22, Floor23, Floor24, Floor25, Floor26},
                    {Floor3P, Floor3L, Floor31, Floor32, Floor33, Floor34, Floor35, Floor36},
                    {Floor4P, Floor4L, Floor41, Floor42, Floor43, Floor44, Floor45, Floor46},
                    {Floor5P, Floor5L, Floor51, Floor52, Floor53, Floor54, Floor55, Floor56},
                    {Floor6P, Floor6L, Floor61},
                    {Floor7P, Floor7L, Floor71},
                    {Floor8P, Floor8L, Floor81},
                    {Floor9P, Floor9L, Floor91},
                    {Floor10P, Floor10L,Floor10, Floor101,  Floor103, Floor104, Floor106, Floor107},
                    {Floor11P, Floor11L, Floor110},
                    {Floor12P, Floor12L, Floor120},
                    {Floor13P, Floor13L, Floor130},
                    {Floor14P, Floor14L, Floor140},
                    {Floor15P, Floor15L,Floor150, Floor151, Floor152, Floor153, Floor154, Floor155, Floor156,Floor157,Floor158,Floor159,Floor1510,Floor1511,Floor1512,Floor1513,Floor1514,
                    Floor1515,Floor1516,Floor1517,Floor1518,Floor1519,Floor1520,Floor1521,Floor1521,Floor1522,Floor1523,Floor1524,Floor1525},
                    {Floor16P, Floor16L, Floor160, Floor162},
                    {Floor17P, Floor17L, Floor171, Floor172, Floor173, Floor174, Floor175, Floor176},
                    {Floor18P, Floor18L, Floor181, Floor182, Floor183, Floor184, Floor185, Floor186},
                    {Floor19P, Floor19L,Floor190, Floor192, Floor193, Floor194, Floor195, Floor196},
                    {Floor2polowaP, Floor2polowaL, Floor2polowa}
                };
                /**
 * @brief Wektor zawierający obiekty pułapek dla poziomu 2.
 *
 */
                std::vector<FloorVector> trap = {
                    {Kolce102},
                     {Kolce105},
                      {Kolce161},
                    {Kolce191}
                };
                /**
 * @brief Wektor zawierający obiekty wzmocnień skoku dla poziomu 2.
 *
 */
                std::vector<FloorVector> jboost = {
                      {jumpboost2},
                      {jumpboost}
                };
                checkTrapCollision(trap, player);
                checkJumpBoost(jboost, player);
                checkFloorCollision(floors, player);
                boost();
                /**
          * @brief Wektor zawierający obiekty ozdób dla poziomu 2.
          *
          */
                std::vector<FloorVector> ozdoby = {
                  {EndDoorLaka,StartDoorLaka},
                  {Drzewo1,Drzewo2,Drzewo3,Drzewo4,Drzewo5,Drzewo6,Drzewo7,Drzewo8,Drzewo9},
                  {Dash1,Dash2,Dash3},
                  { pochodnia, pochodnia2 ,pochodnia3, pochodnia4, pochodnia5, pochodnia6, pochodnia7, pochodnia8, pochodnia9, pochodnia10, pochodnia11, pochodnia12}
                };
                /**
    * @brief Wektor zawierający obiekty pochodni dla poziomu 2.
    *
    */
                std::vector<sf::RectangleShape> ozdoby2 = { pochodnia, pochodnia2 ,pochodnia3, pochodnia4, pochodnia5, pochodnia6, pochodnia7, pochodnia8, pochodnia9, pochodnia10, pochodnia11, pochodnia12 };
                /**
      * @brief Wektor zawierający pozycje oświetlenia dla poziomu 2.
      *
      */
                std::vector<sf::Vector2f> lightPositions = oswietlenie(window, ozdoby2, player, playerPosition);


                int size = lightPositions.size();
                /**
              * @brief Wektor zawierający kolory oświetlenia dla poziomu 2.
              *
              */
                std::vector<sf::Color> lightColors = {
                sf::Color::White, sf::Color::Green, sf::Color::Green,
                sf::Color::White,  sf::Color::White,  sf::Color::White,  sf::Color::White,
                sf::Color::Green ,  sf::Color::Red, sf::Color::White, sf::Color::White, sf::Color::White,
                sf::Color::White

                };



                shader.setUniform("numLights", size);

                // Przekazanie danych o pozycjach i kolorach świateł jako tablice struktur
                struct Light {
                    sf::Vector2f position;
                    sf::Color color;
                };

                std::vector<Light> lights;
                for (size_t i = 0; i < size; ++i) {
                    lights.push_back({ lightPositions[i], lightColors[i] });
                }

                for (size_t i = 0; i < size; ++i) {
                    std::string uniformName = "lights[" + std::to_string(i) + "].position";
                    shader.setUniform(uniformName.c_str(), lightPositions[i]);

                    uniformName = "lights[" + std::to_string(i) + "].color";
                    shader.setUniform(uniformName.c_str(), sf::Glsl::Vec3(lightColors[i].r / 255.f, lightColors[i].g / 255.f, lightColors[i].b / 255.f)); // Konwersja koloru do formatu używanego w shaderze
                }
              
                /**
 * @brief Część kodu odpowiadająca za wywołanie animacji.
 *
 */
                animateCharacter(pochodnia, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia2, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia3, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia4, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia5, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia6, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia7, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia8, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia9, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia10, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia11, pochodniaatxt1, pochodniaatxt2);
                animateCharacter(pochodnia12, pochodniaatxt1, pochodniaatxt2);
                window.clear();

                window.draw(tloL, &shader);
                windraw(floors, window, shader);
                windraw(ozdoby, window, shader);
                windraw(trap, window, shader);
                windraw(jboost, window, shader);
            
                window.draw(KolceWall, &shader);
                window.draw(player);
                window.draw(Pies, &shader);

                elapsed1 = clock1.getElapsedTime(); // Pobieranie upływu czasu
                elapsed2 = clock2.getElapsedTime();

                pies(floors, player, KolceWall, Floor15L, Pies, piesL, piesL1, piesP, piesP1);
                poziomm(window, player, Floor12, EndDoorLaka, win, player_prawo, camera, shader);

                window.display();
            }
        }
    }
    return 0;
}

