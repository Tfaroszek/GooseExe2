#ifndef Menu_H
#define Menu_H
/**
 * @brief Funkcja odpowiadaj¹ca za g³ówne menu.
 *
 * Funkcja ta odpowiada za g³ówne menu i przyciski w tym oknie.
 *
 * @param window Obiekt okna.
 * @param honkk DŸwiêk podczas klikniêcia przycisku.
 * @param menuu Muzyka w tle.
 * 
 */
void handleMenu(sf::RenderWindow& window, sf::Sound& honkk, sf::Sound& menuu) {

    window.setView(view);
    sf::Texture Tlo = TextureLoader::load("grafiki/TloMenu2.png");
    sf::RectangleShape Tlom = createRectangleWithTexture(sf::Vector2f(800.0f, 600.0f), sf::Vector2f(0, 0), Tlo);

    sf::Texture start = TextureLoader::load("grafiki/MenuPlay.png");
    sf::RectangleShape play = createRectangleWithTexture(sf::Vector2f(130.0f, 50.0f), sf::Vector2f(300, 230), start);

    sf::Texture option = TextureLoader::load("grafiki/MenuOptions.png");
    sf::RectangleShape ustawienia = createRectangleWithTexture(sf::Vector2f(210.0f, 50.0f), sf::Vector2f(270, 290), option);

    sf::Texture wyjscie = TextureLoader::load("grafiki/MenuQuit.png");
    sf::RectangleShape quit = createRectangleWithTexture(sf::Vector2f(325.0f, 90.0f), sf::Vector2f(200, 330), wyjscie);

    window.clear();
    window.draw(Tlom);
    window.draw(play);
    window.draw(ustawienia);
    window.draw(quit);
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) // sprawdzamy, czy lewy przycisk myszy zosta³ naciœniêty
        {
            sf::Vector2i mousePosition = sf::Mouse::getPosition(window); // pobieramy pozycjê myszy
            sf::FloatRect buttonBounds = quit.getGlobalBounds(); // pobieramy granice przycisku

            if (buttonBounds.contains(mousePosition.x, mousePosition.y)) // sprawdzamy, czy pozycja myszy znajduje siê w granicach przycisku
            {
                honkk.play();
                menuu.stop();
                window.close();
            }
            sf::FloatRect buttonBounds1 = play.getGlobalBounds(); // pobieramy granice przycisku

            if (buttonBounds1.contains(mousePosition.x, mousePosition.y)) // sprawdzamy, czy pozycja myszy znajduje siê w granicach przycisku
            {
                isStart = 1;
                honkk.play();
            }

            sf::FloatRect buttonBounds2 = ustawienia.getGlobalBounds(); // pobieramy granice przycisku

            if (buttonBounds2.contains(mousePosition.x, mousePosition.y)) // sprawdzamy, czy pozycja myszy znajduje siê w granicach przycisku
            {
                isStart = 4;
                honkk.play();
            }
        }
        window.display();
    }
}
/**
 * @brief Funkcja odpowiadaj¹ca za menu ustawieñ.
 *
 * Funkcja ta odpowiada za menu ustawieñ i przyciski w tym oknie.
 *
 * @param window Obiekt okna.
 * @param honkk DŸwiêk podczas klikniêcia przycisku.
 * @param menuu Muzyka w tle.
 * @param mouseOffset Pozycja myszy.
 *
 */
void handleMenuSetings(sf::RenderWindow& window, sf::Sound& honkk, sf::Sound& menuu, sf::Vector2f mouseOffset) {
    ButtonStorage buttonStorage;
    punktacja mojaPunktacja;
    sf::RectangleShape track(sf::Vector2f(500.f, 10.f));
    track.setFillColor(sf::Color::White);
    track.setPosition(150.f, 400.f);

    sf::RectangleShape slider(sf::Vector2f(20.f, 30.f));
    slider.setFillColor(sf::Color::Red);
    slider.setPosition(sliderposition, 395.f);
    while (isStart != 5) {
        sf::Texture Tlo = TextureLoader::load("grafiki/TloMenu.png");
        sf::RectangleShape Tlom = createRectangleWithTexture(sf::Vector2f(800.0f, 600.0f), sf::Vector2f(0, 0), Tlo);

        sf::Texture cofnij = TextureLoader::load("grafiki/backButton.png");
        sf::RectangleShape back = createRectangleWithTexture(sf::Vector2f(339.0f, 78.0f), sf::Vector2f(460, 525), cofnij);

        sf::Texture zestaw = TextureLoader::load("grafiki/Zestaw1.png");
        sf::RectangleShape zestaw1 = createRectangleWithTexture(sf::Vector2f(300.0f, 198.0f), sf::Vector2f(50, 100), zestaw);

        sf::Texture zestaw22 = TextureLoader::load("grafiki/Zestaw2.png");
        sf::RectangleShape zestaw2 = createRectangleWithTexture(sf::Vector2f(199.0f, 193.0f), sf::Vector2f(500, 100), zestaw22);


        sf::Texture zestawneo = TextureLoader::load("grafiki/Zestaw1Neon.png");
        sf::RectangleShape  zestaw1neo = createRectangleWithTexture(sf::Vector2f(300.0f, 198.0f), sf::Vector2f(50, 100), zestawneo);

        sf::Texture zestaw22neo = TextureLoader::load("grafiki/Zestaw2Neon.png");
        sf::RectangleShape zestaw2neo = createRectangleWithTexture(sf::Vector2f(199.0f, 193.0f), sf::Vector2f(500, 100), zestaw22neo);

        sf::Texture controls = TextureLoader::load("grafiki/MenuSterowanie.png");
        sf::RectangleShape  sterowanie = createRectangleWithTexture(sf::Vector2f(354.0f, 41.0f), sf::Vector2f(220, 40), controls);
        if (buttonStorage.leftButton == sf::Keyboard::A)
        {
            zestaww = true;
        }
        if (buttonStorage.leftButton == sf::Keyboard::Left)
        {
            zestaww = false;
        }
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) // sprawdzamy, czy lewy przycisk myszy zosta³ naciœniêty
        {
            sf::Vector2i mousePosition = sf::Mouse::getPosition(window); // pobieramy pozycjê myszy
            sf::FloatRect buttonBounds = back.getGlobalBounds(); // pobieramy granice przycisku
            sf::FloatRect buttonBounds1 = zestaw1.getGlobalBounds();
            sf::FloatRect buttonBounds2 = zestaw2.getGlobalBounds();
            sf::Vector2i mousePos = sf::Mouse::getPosition(window);

            if (slider.getGlobalBounds().contains(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y)))
            {
                isDragging = true;

                mouseOffset = sf::Vector2f(mousePos) - slider.getPosition();
            }
            if (buttonBounds.contains(mousePosition.x, mousePosition.y)) // sprawdzamy, czy pozycja myszy znajduje siê w granicach przycisku
            {
                honkk.play();
                isStart = 5;
            }
            if (buttonBounds1.contains(mousePosition.x, mousePosition.y)) // sprawdzamy, czy pozycja myszy znajduje siê w granicach przycisku
            {
                buttonStorage.setSpaceButton(sf::Keyboard::Space);
                buttonStorage.setRightButton(sf::Keyboard::Right);
                buttonStorage.setLeftButton(sf::Keyboard::Left);
                zestaww = false;
            }

            if (buttonBounds2.contains(mousePosition.x, mousePosition.y)) // sprawdzamy, czy pozycja myszy znajduje siê w granicach przycisku
            {
                buttonStorage.setSpaceButton(sf::Keyboard::W);
                buttonStorage.setRightButton(sf::Keyboard::D);
                buttonStorage.setLeftButton(sf::Keyboard::A);
                zestaww = true;
            }
        }
        else if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left)
        {
            isDragging = false;
            if (valueChanged)
            {
                std::cout << "Wartoœæ: " << vol << std::endl;
                mojaPunktacja.saveToFile(wyniki);
                gloscnos();
                valueChanged = false;
            }
        }
        else if (event.type == sf::Event::MouseMoved)
        {
            if (isDragging)
            {
                sf::Vector2i mousePos = sf::Mouse::getPosition(window);
                float newX = static_cast<float>(mousePos.x) - mouseOffset.x;
                if (newX < 150.f)
                    newX = 150.f;
                else if (newX > 650.f)
                    newX = 650.f;
                slider.setPosition(newX, slider.getPosition().y);
                sliderposition = newX;
                // Obliczanie wartoœci na podstawie pozycji suwaka
                float ratio = (newX - 150.f) / 500.f;
                vol = static_cast<int>(ratio * 100);
                valueChanged = true;
            }
        }
        window.clear();
        window.draw(Tlom);
        window.draw(back);
        window.draw(track);
        window.draw(slider);
        if (!zestaww) {
            window.draw(zestaw1neo);
            window.draw(zestaw2);
        }
        if (zestaww) {
            window.draw(zestaw1);
            window.draw(zestaw2neo);
        }
        window.draw(sterowanie);
        window.display();
    }

}

/**
 * @brief Funkcja odpowiadaj¹ca za menu poziomów.
 *
 * Funkcja ta odpowiada za menu poziomów i przyciski w tym oknie.
 *
 * @param window Obiekt okna.
 * @param honkk DŸwiêk podczas klikniêcia przycisku.
 * @param menuu Muzyka w tle.
 *
 */
void handleMenuLevel(sf::RenderWindow& window, sf::Sound& honkk, sf::Sound& menuu) {

    sf::Texture Tlo = TextureLoader::load("grafiki/TloMenu.png");
    sf::RectangleShape Tlom = createRectangleWithTexture(sf::Vector2f(800.0f, 600.0f), sf::Vector2f(0, 0), Tlo);

    sf::Texture poziom = TextureLoader::load("grafiki/Poziom1Button.png");
    sf::RectangleShape level = createRectangleWithTexture(sf::Vector2f(270.0f, 48.0f), sf::Vector2f(250, 180), poziom);

    sf::Texture poziom2 = TextureLoader::load("grafiki/Poziom2Button.png");
    sf::RectangleShape level2 = createRectangleWithTexture(sf::Vector2f(270.0f, 48.0f), sf::Vector2f(250, 280), poziom2);

    sf::Texture cofnij = TextureLoader::load("grafiki/backButton.png");
    sf::RectangleShape back = createRectangleWithTexture(sf::Vector2f(339.0f, 78.0f), sf::Vector2f(460, 525), cofnij);
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) // sprawdzamy, czy lewy przycisk myszy zosta³ naciœniêty
        {
            sf::Vector2i mousePosition = sf::Mouse::getPosition(window); // pobieramy pozycjê myszy
            sf::FloatRect buttonBounds = back.getGlobalBounds(); // pobieramy granice przycisku

            if (buttonBounds.contains(mousePosition.x, mousePosition.y)) // sprawdzamy, czy pozycja myszy znajduje siê w granicach przycisku
            {
                honkk.play();
                isStart = 5;
            }

            sf::FloatRect buttonBounds1 = level.getGlobalBounds(); // pobieramy granice przycisku

            if (buttonBounds1.contains(mousePosition.x, mousePosition.y)) // sprawdzamy, czy pozycja myszy znajduje siê w granicach przycisku
            {
                honkk.play();
                isStart = 2;
                menuu.stop();
            }

            sf::FloatRect buttonBounds2 = level2.getGlobalBounds(); // pobieramy granice przycisku

            if (buttonBounds2.contains(mousePosition.x, mousePosition.y)) // sprawdzamy, czy pozycja myszy znajduje siê w granicach przycisku
            {
                honkk.play();
                isStart = 3;
                menuu.stop();
            }
        }
    }
    window.clear();
    window.draw(Tlom);
    window.draw(level);
    window.draw(level2);
    window.draw(back);
    window.display();
}
/**
 * @brief Funkcja odpowiadaj¹ca za czesc wspolna poziomow.
 *
 * Funkcja ta odpowiada za czesc wspolna poziomow, kamerê i wynik oraz okno.
 * Odpowiada te¿ za koniec poziomu.
 *
 * @param window Obiekt okna.
 * @param player Obiekt gracza.
 * @param Floor12 Obiekt platformy.
 * @param EndDoorLaka Obiekt odpowiadaj¹cy za metê poziomu.
 * @param win Obiekt okna ukoñczenia poziomu.
 * @param player_prawo Grafika gracza skierowan¹ w prawo
 * @param camera Zmienna odpowiadaj¹ca za kamerê.
 * @param shader Zmienna odpowiadaj¹ca za cieniowanie.
 *
 */
void poziomm(sf::RenderWindow& window,sf::RectangleShape& player, sf::RectangleShape& Floor12, sf::RectangleShape& EndDoorLaka,sf::RectangleShape& win, const sf::Texture& player_prawo, sf::View camera,sf::Shader& shader) {
    punktacja mojaPunktacja;
    if (reset) {
        dead.play();
        player.setPosition(50, Floor12.getPosition().y - player.getSize().y / 2 - Floor12.getSize().y / 2);
        view.reset(sf::FloatRect(0, 0, 800, 600));
        reset = false;
        lewituje = false;
        isJumping = false;
        jumpVelocity = 500;
        player.setTexture(&player_prawo, true);
        wynik -= 100;
    }

    sf::Font font;
    font.loadFromFile("arial.ttf");

    sf::Text text;
    text.setFont(font);
    text.setString("Witaj");
    text.setCharacterSize(40);
    text.setFillColor(sf::Color::Black);
    text.setStyle(sf::Text::Bold);
    text.setPosition(100.f, 153.f);
    sf::Text punkty;
    punkty.setFont(font);
    punkty.setString(std::to_string(wynik));
    punkty.setCharacterSize(40);
    punkty.setFillColor(sf::Color::Green);
    punkty.setStyle(sf::Text::Bold);
    punkty.setPosition(player.getPosition().x+300, camera.getCenter().y - 250);
  
    elapsed1 = clock1.getElapsedTime(); // Pobieranie up³ywu czasu
    window.draw(text);
    /**
 * @brief Pêtla for odpowiadaj¹ca za usuwanie obiektu jajka, gdy obiekt gracza ich dotknie i dodanie 30 punktów do wyniku.
 *
 */
    for (auto it = eggs.begin(); it != eggs.end(); ++it) {
        if (player.getGlobalBounds().intersects(it->getGlobalBounds())) {
            wynik += 30;
            it = eggs.erase(it);
            // Inkrementacja iteratora, poniewa¿ erase() przesuwa iterator
            if (it == eggs.end()) break;
        }
    }
    for (const auto& egg : eggs) {
        window.draw(egg, &shader);
    }
   /**
* @brief Instrukcja warunkowa if odpowiadaj¹ca za pojawienie siê okna wygranej i wypisanie wyniku.
*
*/
    if (player.getGlobalBounds().intersects(EndDoorLaka.getGlobalBounds()))
    {
        window.clear();
        window.draw(win);
        view.reset(sf::FloatRect(0, 0, 800, 600));
        mojaPunktacja.saveToFile(wyniki);
        window.setView(view);
        sf::Text textw(std::to_string(wynik), font, 30);

        music.stop();
        music2.setVolume(vol);
        music2.setLoop(true);
        if (!gra) {
            gra = true;
            music2.play();
        }

        textw.setFillColor(sf::Color::Green);
        textw.setStyle(sf::Text::Bold);
        textw.setPosition(470.f, 500.f);
        window.draw(textw);

        text.setString("Wynik:");
        text.setCharacterSize(30);
        text.setFillColor(sf::Color::Green);
        text.setStyle(sf::Text::Bold);
        text.setPosition(230.f, 500.f);

        sf::Text textwn(std::to_string(wynikk), font, 30);
        sf::Text textn;
        textn.setFont(font);
        textn.setString("Najlepszy wynik:");
        textn.setCharacterSize(30);
        textn.setFillColor(sf::Color::Green);
        textn.setStyle(sf::Text::Bold);
        textn.setPosition(230.f, 550.f);

        textwn.setFillColor(sf::Color::Green);
        textwn.setStyle(sf::Text::Bold);
        textwn.setPosition(470.f, 550.f);
        window.draw(textn);
        window.draw(textwn);
        window.draw(text);
        blokady(true);
    }
    else {
        /**
* @brief Instrukcja warunkowa if odpowiadaj¹ca za tracenie punktów z czasem.
*
*/
        if (elapsed1.asSeconds() >= 1.0)  // Sprawdzanie, czy minê³a 1 sekunda
        {
            gra = false;
            wynik -= 10;

            clock1.restart();
            // Resetowanie zegara
        }
        /**
* @brief Instrukcja camera.setCenter odpowiadaj¹ca za ustawienie kamery na obiekcie gracza.
*
*/
        camera.setCenter(player.getPosition().x, camera.getCenter().y + 50);
        window.setView(camera);
    }
    window.draw(punkty);
}
#endif