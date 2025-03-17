#ifndef kolizjaAnimacja // Dyrektywa preprocesora, zapobiega wielokrotnemu w³¹czeniu pliku nag³ówkowego
#define kolizjaAnimacja

double characterSpeed = 200;
double jumpVelocity = 500;
float speed = 150.0f ;
bool isBoostActive = false;
float speeddog = 10;

bool isDragging = false;
bool valueChanged = false;
int vol = 100;
float sliderOffset = 0.f;
float sliderposition = 150;

bool lewo = false;
bool gra = false;

double gravity = 750;
bool isJumping = false;
double jumpHeight = 0;
bool lewituje = false;
bool  blokadalewa = false;
bool blokadaprawa = false;
bool reset = false;
bool blokadaspadania = false;
int wynikk, wynikk2;
bool zestaww;

sf::Clock clock1;  // Tworzenie zegara
sf::Time elapsed1;
sf::Clock clock3;
sf::Clock clock2;
sf::Time elapsed2;
sf::View view(sf::FloatRect(0, 0, 800, 600));

unsigned  int wynik = 5000;
unsigned  int wynik2 = 5000;
int isStart = 0;// 2-poziom,3-poziom2,5-back,4-ustawienia,1-przejscie do poziomow
std::vector<sf::RectangleShape> eggs;
/**
 * @brief Czêœæ kodu odpowiadaj¹ca za definiowanie shadera wierzcho³ków.
 *
 */
const std::string vertexShader = R"(
    void main() {
        gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
        gl_TexCoord[0] = gl_TextureMatrix[0] * gl_MultiTexCoord0;
        gl_FrontColor = gl_Color;
    }
)";
/**
 * @brief Czêœæ kodu odpowiadaj¹ca za definiowanie shadera fragmentów oraz manipulowanie kolorami pikseli renderowanych obiektów na ekranie.
 *
 */
const std::string fragmentShader = R"(
    uniform sampler2D texture;
    struct Light {
        vec2 position;
        vec3 color;
    };
    uniform Light lights[25]; // Tablica struktur œwiate³
    uniform int numLights;

    void main() {
        vec4 color = texture2D(texture, gl_TexCoord[0].xy);
        vec4 finalColor = vec4(0.0);

        for (int i = 0; i < numLights; ++i) { // Pêtla dla ka¿dego œwiat³a
            vec2 diff = gl_FragCoord.xy - lights[i].position;
            float distance = length(diff);
            float attenuation = 5.0 / (1.0 + 0.1 * distance);
            finalColor += color * vec4(lights[i].color, 1.0) * attenuation;
        }

        gl_FragColor = finalColor;
    }
)";



/**
 * @brief Funkcja odpowiedzialna za obs³ugê zdarzenia kolizji z pu³apkami.
 *
 * Funkcja ta jest odpowiedzialna za obs³ugê zdarzenia kolizji z pu³apkami.
 *
 * @param pulapka Obiekt pu³apki.
 * @param player Obiekt gracza.
 * 
 */
void kolizjapulapka(const sf::RectangleShape& pulapka, const sf::RectangleShape& player)
{
    if (player.getPosition().y + player.getSize().y / 2 <= pulapka.getPosition().y && player.getPosition().x + player.getSize().x / 2 >= pulapka.getPosition().x && player.getPosition().x + 5 - player.getSize().x / 2 <= pulapka.getPosition().x && player.getPosition().y - player.getSize().y / 2 != pulapka.getPosition().y + pulapka.getSize().y / 2)
        reset = true;
}
/**
 * @brief Funkcja odpowiedzialna za sprawdzenie czy zasz³a kolizja z pu³apkami.
 *
 * Funkcja ta jest odpowiedzialna za sprawdzenie czy zasz³a kolizja z pu³apkami.
 *
 * @param trap Obiekt pu³apki.
 * @param player Obiekt gracza.
 *
 */
void checkTrapCollision(const std::vector<std::vector<sf::RectangleShape>>& trap, const sf::RectangleShape& player) {
    for (size_t i = 0; i < trap.size(); ++i) {
        for (const auto& floorObj : trap[i]) {
            if (player.getGlobalBounds().intersects(floorObj.getGlobalBounds())) {
                kolizjapulapka(floorObj, player);
            }
        }
    }
}
/**
 * @brief Funkcja odpowiedzialna za sprawdzenie wzmocnienia skoku.
 *
 * Funkcja ta jest odpowiedzialna za sprawdzenie wzmocnienia skoku.
 *
 * @param jboost Obiekt wzmocnienia.
 * @param player Obiekt gracza.
 *
 */
void checkJumpBoost(const std::vector<std::vector<sf::RectangleShape>>& jboost, const sf::RectangleShape& player) {
    bool collided = false; 

    for (size_t i = 0; i < jboost.size(); ++i) {
        for (const auto& floorObj : jboost[i]) {
            if (player.getGlobalBounds().intersects(floorObj.getGlobalBounds())) {
                gravity = 100;
                collided = true;
            }
        }
    }

    if (!collided) {
        gravity = 750;
    }
}


/**
 * @brief Funkcja odpowiedzialna za sprawdzenie kolizji z sciana z kolcami.
 *
 * Funkcja ta jest odpowiedzialna za sprawdzenie kolizji z sciana z kolcami.
 *
 * @param pulapka Obiekt pu³apki.
 * @param player Obiekt gracza.
 *
 */
void kolizjapulapka2(sf::RectangleShape& pulapka, sf::RectangleShape& player)
{
    if (player.getPosition().x - 10 + player.getSize().x / 4 <= pulapka.getPosition().x - pulapka.getSize().x / 2 || player.getPosition().x - player.getSize().x / 2 >= pulapka.getPosition().x) {
        lewituje = true;
        isJumping = false;
    }
    else
    {
        if (player.getPosition().y + player.getSize().y / 2 >= pulapka.getPosition().y + 20 - pulapka.getSize().y / 2) {
            player.setPosition(player.getPosition().x, player.getPosition().y + 20 - player.getSize().y / 2);
            isJumping = false;
            jumpVelocity = 500;
            lewituje = false;
        }
    }
    if (player.getPosition().y + player.getSize().y / 2 > pulapka.getPosition().y + 20 - pulapka.getSize().y / 2 && (player.getPosition().x - 10 + player.getSize().x / 4 <= pulapka.getPosition().x - pulapka.getSize().x / 2 || player.getPosition().x - player.getSize().x / 2 >= pulapka.getPosition().x) && player.getPosition().y - player.getSize().y / 2 != pulapka.getPosition().y + pulapka.getSize().y / 2) {
        reset = true;
    }
}
/**
 * @brief Funkcja odpowiedzialna za sprawdzanie kolizji.
 *
 * Funkcja ta jest odpowiedzialna za sprawdzanie kolizji miêdzy obiektem, a obiektem gracza.
 *
 * @param prawa Prawa czêœæ obiektu.
 * @param lewa Lewa czêœæ obiektu.
 * @param player Obiekt gracza.
 *
 */
void kolizja(const sf::RectangleShape& prawa, const sf::RectangleShape& lewa, sf::RectangleShape& player)
{
    const auto playerX = player.getPosition().x;
    const auto playerSizeX = player.getSize().x;
    const auto lewaX = lewa.getPosition().x;
    const auto lewaSizeX = lewa.getSize().x;
    const auto prawaX = prawa.getPosition().x;
    const auto prawaSizeX = prawa.getSize().x;
    const auto playerY = player.getPosition().y;
    const auto playerSizeY = player.getSize().y;
    const auto prawaY = prawa.getPosition().y;
    const auto prawaSizeY = prawa.getSize().y;

    if (playerX + playerSizeX / 2 <= lewaX - lewaSizeX / 2 || playerX >= prawaX)
    {
       
        if (playerX + playerSizeX / 2 <= lewaX - lewaSizeX / 2 && playerY <= prawaY + playerSizeY / 2)
        {
            blokadaprawa = true;
            isJumping = false;
            lewituje = true;
        }
        else {
            if (playerY >= prawaY + playerSizeY / 2)
                blokadaprawa = false;
        }
        if (playerX >= prawaX && playerY <= prawaY + playerSizeY / 2)
        {
            blokadalewa = true;
            isJumping = false;
            lewituje = true;
        }
        else {
            if (playerY >= prawaY + playerSizeY / 2)
                blokadalewa = false;
        }

    }
    else
    {
        if (playerY + playerSizeY / 2 >= prawaY - prawaSizeY / 2 && playerY < prawaY + playerSizeY / 2)
        {
            jumpVelocity = 500;
            lewituje = false;
            isJumping = false;
            player.setPosition(playerX, prawaY - prawaSizeY / 2 - playerSizeY / 2);
        }
        else {
            if (playerY >= prawaY - prawaSizeY / 2)
            {
                isJumping = false;
                lewituje = true;
            }
        }
        blokadaprawa = false;
        blokadalewa = false;
    }
}
/**
 * @brief Funkcja odpowiedzialna za rysowanie grafiki na oknie.
 *
 * Funkcja ta jest odpowiedzialna za rysowanie grafiki na oknie.
 *
 * @param draww Wektor z wielkoœciami okna.
 * @param window Obiekt okna.
 * @param shader Zmienna dla cieniowania.
 *
 */
void windraw(const std::vector<std::vector<sf::RectangleShape>>& draww, sf::RenderWindow& window,sf::Shader& shader) {

    for (size_t i = 0; i < draww.size(); ++i) {
        for (size_t j = 0; j < draww[i].size(); ++j) {

            window.draw(draww[i][j], &shader);
        }
    }
}

/**
 * @brief Funkcja odpowiedzialna, z któr¹ platform¹ koliduje obiekt gracza.
 *
 * Funkcja ta jest odpowiedzialna za kolizjê z platform¹, po której porusza siê gracz.
 *
 * @param floors Wektor z obiektami platform.
 * @param player Obiekt gracza.
 * 
 */
void checkFloorCollision(const std::vector<std::vector<sf::RectangleShape>>& floors, sf::RectangleShape& player) {
    bool stoi = false;
    for (size_t i = 0; i < floors.size(); ++i) {
        for (const auto& floorObj : floors[i]) {
            if (player.getGlobalBounds().intersects(floorObj.getGlobalBounds())) {
 
                kolizja(floors[i][0], floors[i][1], player);
                stoi = true;
            }
        }
    }
    if (!stoi) {
        blokadalewa = false;
        blokadaprawa = false;
    }
}
/**
 * @brief Funkcja odpowiedzialna za dwuklatkow¹ animacjê.
 *
 * Funkcja ta jest odpowiedzialna za dwuklatkow¹ animacjê.
 *
 * @param player Obiekt do animacji.
 * @param playerTexture1 Pierwsza grafika obiektu.
 * @param playerTexture2 Druga grafika obiektu.
 *
 */
void animateCharacter(sf::RectangleShape& player, const sf::Texture& playerTexture1, const sf::Texture& playerTexture2)
{
    static std::map<sf::RectangleShape*, int> currentFrames; // Mapa œledz¹ca stan animacji dla ka¿dego obiektu

    // SprawdŸ, czy istnieje zmienna œledz¹ca dla tego obiektu
    if (currentFrames.find(&player) == currentFrames.end()) {
        // Jeœli nie ma, utwórz now¹
        currentFrames[&player] = 0;
    }

    const int frameInterval = 10;  // co ile klatek zmienia siê tekstura
    if (currentFrames[&player] / frameInterval % 2 == 0)
    {
        sf::Vector2u textureSize = playerTexture1.getSize();
        player.setSize(sf::Vector2f(textureSize.x, textureSize.y));
        player.setTexture(&playerTexture1, true);
    }
    else {
        sf::Vector2u textureSize = playerTexture2.getSize();
        player.setSize(sf::Vector2f(textureSize.x, textureSize.y));
        player.setTexture(&playerTexture2, true);
    }
    ++currentFrames[&player];
}
/**
 * @brief Funkcja odpowiedzialna za blokady.
 *
 * Funkcja ta jest odpowiedzialna za blokady.
 *
 * @param warunek Sprawdzenie wydarzenia.
 *
 */
void blokady(bool warunek) {

    blokadalewa = warunek;
    blokadaprawa = warunek;
    lewituje = warunek;
}
/**
 * @brief Funkcja odpowiedzialna za muzykê.
 *
 * Funkcja ta jest odpowiedzialna za muzykê, za jej g³oœnoœæ i za odtwarzanie w pêtli.
 *
 * @param warunek Sprawdzenie wydarzenia.
 *
 */
void muzyka(sf::Music& music) {

    music.setVolume(10);//glosnosc muzyki
    music.setLoop(true);//muzyka odwarzana w petli
    music.play();
}
/**
 * @brief Funkcja odpowiedzialna za wzmocnienie przyœpieszenia.
 *
 * Funkcja ta jest odpowiedzialna za wzmocnienie przyœpieszenia.
 *
 */
void boost() {
    if (isBoostActive) {
        speed = 1000 * clock3.getElapsedTime().asSeconds();
        if (clock3.getElapsedTime().asSeconds() >= 1.0)
        {
            speed = 150;
            clock3.restart();
            isBoostActive = false;
        }
    }
}

sf::Sound menuu;
sf::SoundBuffer skok1;
sf::Sound skok;
sf::SoundBuffer krok1;
sf::Sound krok;
sf::SoundBuffer dead1;
sf::Sound dead;
sf::SoundBuffer honk;
sf::Sound honkk;
sf::SoundBuffer menu;
sf::Music music;
sf::Music music2;
/**
 * @brief Funkcja odpowiedzialna za g³oœnoœæ gry.
 *
 * Funkcja ta jest odpowiedzialna za g³oœnoœæ gry.
 *
 */
void gloscnos() {

    menuu.setVolume(vol);

    skok.setVolume(vol);

    krok.setVolume(vol);

    dead.setVolume(vol);

    honkk.setVolume(vol);

    music.setVolume(vol);
    music2.setVolume(vol);
}
/**
 * @brief Funkcja odpowiedzialna za oœwietlenie.
 *
 * Funkcja ta jest odpowiedzialna za oœwietlenie dla niektórych obiektów.
 *
 * @param window Obiekt okna.
 * @param ozdoby Wektor obiektów dla oœwietlenia.
 * @param player Obiekt gracza.
 * @param playerPosition Wektor z pozycj¹ gracza.
 * @return Pozycja oœwietlenia.
 */
std::vector<sf::Vector2f> oswietlenie(sf::RenderWindow& window, const std::vector<sf::RectangleShape>& ozdoby , sf::RectangleShape& player, sf::Vector2f& playerPosition) {
    std::vector<sf::Vector2f> lightPositions;
    ButtonStorage buttonStorage;
    sf::Vector2f viewPosition = window.getView().getCenter();
    /**
     * @brief Pêtla for odpowiadaj¹ca za obliczanie pozycji œwiate³ dla pochodni.
     *
     */
    for (const auto& ozdoba : ozdoby) {
        sf::Vector2f pointPosition(ozdoba.getPosition().x + ozdoba.getSize().x / 2, 400.f);
        lightPositions.push_back(sf::Vector2f(window.mapCoordsToPixel(pointPosition).x,viewPosition.y +280 - ozdoba.getPosition().y));
        }
    /**
     * @brief Instrukcja warunkowa if odpowiadaj¹ca za obliczanie pozycji œwiat³a dla gracza.
     *
     */
    if (sf::Keyboard::isKeyPressed(buttonStorage.leftButton)) {

        playerPosition.y = viewPosition.y + 280 - player.getPosition().y;
        playerPosition.x = window.mapCoordsToPixel(player.getPosition()).x + player.getSize().x-5;
    }
    else if (sf::Keyboard::isKeyPressed(buttonStorage.rightButton)) {

        playerPosition.y = viewPosition.y + 280 - player.getPosition().y;
        playerPosition.x = window.mapCoordsToPixel(player.getPosition()).x +5;
    }
    else  if (lewituje || isJumping) {

        playerPosition.y = viewPosition.y + 280 - player.getPosition().y;

    }
    else {
        playerPosition.y = viewPosition.y + 280 - player.getPosition().y;
    }

    lightPositions.push_back(playerPosition);

    return lightPositions;
}

#endif