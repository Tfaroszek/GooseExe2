#ifndef Porusznie_H
#define Poruszanie_H
/**
 * @brief Funkcja odpowiadaj¹ca za poruszanie i skakanie.
 *
 * Funkcja ta odpowiada za poruszanie siê obiektu gracza i skakanie. Odpowiada za dŸwiêk poruszania siê i skakania.
 * Odpowiada te¿ za obliczanie grawitacji i zachowania obiektu gracza podczas skoku.
 *
 * @param window Obiekt okna gry.
 * @param event Wydarzenie podczas gry.
 * @param player Obiekt gracza.
 * @param bieg1lewo Pierwsza grafika ruchu obiektu gracza w lewo.
 * @param bieg2lewo Druga grafika ruchu obiektu gracza w lewo.
 * @param bieg1prawo Pierwsza grafika ruchu obiektu gracza w prawo.
 * @param bieg2prawo Druga grafika ruchu obiektu gracza w prawo.
 * @param buttonStorage Ustawienia poruszania siê.
 * @param player_lewo Grafika obiektu gracza skierowana w lewo.
 * @param player_prawo Grafika obiektu gracza skierowana w prawo.
 * @param clock Zmienna odpowiadaj¹ca za czas gry.
 * 
 */
void Poruszanie(sf::RenderWindow& window, sf::Event& event, sf::RectangleShape& player, const sf::Texture& bieg1lewo, const sf::Texture& bieg2lewo, const sf::Texture& bieg1prawo, const sf::Texture& bieg2prawo, const ButtonStorage& buttonStorage, const sf::Texture& player_lewo, const sf::Texture& player_prawo, sf::Clock* clock) {
    static float deltaTime = 0.0;
    //dzwiek skoku
    if (!skok1.loadFromFile("Projekt_skok.wav"))
    {
        
    }

    skok.setBuffer(skok1);
    skok.setVolume(vol);

    //dzwiek krokow
    if (!krok1.loadFromFile("Projektkrok_v2.wav"))
    {
        
    }

    krok.setBuffer(krok1);
    krok.setVolume(vol + 10);
    krok.setLoop(true);
    deltaTime = clock->restart().asSeconds();

    while (window.pollEvent(event))
    {

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
            reset = true;
            isStart = 5;
            if (event.type == sf::Event::KeyReleased)
                isStart = 5;
            window.clear();
        }

        if (event.type == sf::Event::Closed)
            window.close();
       
    }

    if (!isJumping && !lewituje) {
    
        if (sf::Keyboard::isKeyPressed(buttonStorage.leftButton) && !blokadalewa) {//czesc odpowiedzialna za poruszanie sie w lewo
            if (event.type == sf::Event::KeyReleased)
                if (event.key.code == buttonStorage.leftButton && !blokadalewa) {
                    player.setTexture(&player_lewo, true);
                }
            player.move(static_cast <float>(-speed * deltaTime), 0.0f);//poruszanie sie gracza w lewo
            animateCharacter(player, bieg1lewo, bieg2lewo);//animacja krokow
            if (isJumping == false)
            {
                if (krok.getStatus() == sf::Sound::Stopped)//odwarzanie dzwieku krokow
                {
                    krok.play();
                }
            }
        }
        else if (sf::Keyboard::isKeyPressed(buttonStorage.rightButton) && !blokadaprawa) {//czesc odpowiedzialna za poruszanie sie w prawo
            if (event.type == sf::Event::KeyReleased)
                if (event.key.code == buttonStorage.rightButton && !blokadaprawa)
                {
                    player.setTexture(&player_prawo, true);
                }
            player.move(static_cast <float>(speed * deltaTime), 0.0f);//poruszanie sie gracza w prawo
            animateCharacter(player, bieg1prawo, bieg2prawo);//animacja krokow
            if (isJumping == false)
            {
                if (krok.getStatus() == sf::Sound::Stopped)//odwarzanie dzwieku krokow
                {
                    krok.play();
                }
            }
        }

        if (sf::Keyboard::isKeyPressed(buttonStorage.spaceButton ))//czesc kodu odpowiedzialna za skok
        {
            skok.play();//odwarzanie dzwieku skoku
            isJumping = true;
            jumpHeight = 0;
        }
        
    }

   


   

    // Obliczanie ruchu postaci zwi¹zanych z grawitacj¹ i skokiem
    if (isJumping)
    {

        if (sf::Keyboard::isKeyPressed(buttonStorage.leftButton) && !blokadalewa) {
            if (event.type == sf::Event::KeyReleased)
                if (event.key.code == buttonStorage.leftButton && !blokadalewa) {
                    player.setTexture(&player_lewo, true);
                }
            jumpHeight += jumpVelocity * deltaTime;
            player.move(static_cast <float>(-speed * deltaTime), static_cast <float>(-jumpHeight * deltaTime));
            jumpVelocity -= gravity * deltaTime;
            animateCharacter(player, bieg1lewo, bieg2lewo);
        }
        else  if (sf::Keyboard::isKeyPressed(buttonStorage.rightButton) && !blokadaprawa) {
            if (event.type == sf::Event::KeyReleased)
                if (event.key.code == buttonStorage.rightButton && !blokadaprawa)
                {
                    player.setTexture(&player_prawo, true);
                }
            jumpHeight += jumpVelocity * deltaTime;
            player.move(static_cast <float>(speed * deltaTime), static_cast <float>(-jumpHeight * deltaTime));
            jumpVelocity -= gravity * deltaTime;
            animateCharacter(player, bieg1prawo, bieg2prawo);
        }
        else {
            jumpHeight += jumpVelocity * deltaTime;
            player.move(0, static_cast <float>(-jumpHeight * deltaTime));
            jumpVelocity -= gravity * deltaTime;
        }
        if (player.getPosition().y + player.getSize().y > 650)
        {
            reset = true;
        }
    }
    /**
 * @brief Instrukcja warunkowa if odpowiadaj¹ca za spadanie obiektu gracza.
 * 
 */
    if (lewituje && !isJumping) {
        double gravity2 = 500;
        double Height = 0;
        Height += gravity2 * 0.5 * deltaTime;

        if (sf::Keyboard::isKeyPressed(buttonStorage.leftButton) && !blokadalewa) {
            if (event.type == sf::Event::KeyReleased)
                if (event.key.code == buttonStorage.leftButton && !blokadalewa) {
                    player.setTexture(&player_lewo, true);
                }
            player.move(static_cast <float>(-speed * deltaTime), static_cast <float>(Height));
            animateCharacter(player, bieg1lewo, bieg2lewo);
        }
        else  if (sf::Keyboard::isKeyPressed(buttonStorage.rightButton) && !blokadaprawa) {
            if (event.type == sf::Event::KeyReleased)
                if (event.key.code == buttonStorage.rightButton && !blokadaprawa)
                {
                    player.setTexture(&player_prawo, true);
                }
            player.move(static_cast <float>(speed * deltaTime),static_cast <float>(Height));
            animateCharacter(player, bieg1prawo, bieg2prawo);
        }
        else {
            player.move(0, static_cast <float>(Height));
        }
        if (player.getPosition().y > 650)//reset postaci po spadnieciu
        {
            reset = true;
        }
    }
}
#endif
