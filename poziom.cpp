/**
 * @file poziom.cpp
 * @brief Plik zawierający grafikę i obiekty poziomu 1.
 *
 * Ten plik zawiera wywołanie ładowania grafik, muzyki i tworzenia obiektów dla poziomu 1.
 * 
 */

if (!music.openFromFile("Plan_A_Wave.wav"))
{

}

music.setVolume(vol);
music.setLoop(true);
music.play();

sf::Texture player_prawo = TextureLoader::load("grafiki/gaskaPrawo.png");
sf::Texture player_lewo = TextureLoader::load("grafiki/gaskaLewo.png");
sf::Texture bieg1lewo = TextureLoader::load("grafiki/bieg1lewo.png");
sf::Texture bieg2lewo = TextureLoader::load("grafiki/bieg2lewo.png");
sf::Texture bieg1prawo = TextureLoader::load("grafiki/bieg1prawo.png");
sf::Texture bieg2prawo = TextureLoader::load("grafiki/bieg2prawo.png");

sf::Texture StartDoor = TextureLoader::load("grafiki/StartCage.png");
sf::Texture EndDoor = TextureLoader::load("grafiki/MetaDrzwi.png");

sf::Texture Tlo_Laka = TextureLoader::load("grafiki/TloLaka.png");

sf::Texture flowerLaka = TextureLoader::load("grafiki/trawa_laka_kwiat.png");
sf::Texture flowerLakaL = TextureLoader::load("grafiki/trawa_laka_kwiat_lewa.png");
sf::Texture flowerLakaP = TextureLoader::load("grafiki/trawa_laka_kwiat_prawa.png");

sf::Texture grassLaka = TextureLoader::load("grafiki/trawa_laka.png");
sf::Texture grassLakaL = TextureLoader::load("grafiki/trawa_laka_lewa.png");
sf::Texture grassLakaP = TextureLoader::load("grafiki/trawa_laka_prawa.png");

sf::Texture kolce = TextureLoader::load("grafiki/ziemia_kolce.png");

sf::Texture ziemiaL = TextureLoader::load("grafiki/ziemia_lewo.png");
sf::Texture ziemiaP = TextureLoader::load("grafiki/ziemia_prawo.png");
sf::Texture ziemia = TextureLoader::load("grafiki/ziemia.png");

sf::Texture grassL = TextureLoader::load("grafiki/OzdobaGrassLakaL.png");
sf::Texture grassP = TextureLoader::load("grafiki/OzdobaGrassLakaP.png");
sf::Texture deadA1 = TextureLoader::load("grafiki/dead1.png");
sf::Texture deadA2 = TextureLoader::load("grafiki/dead2.png");

sf::Texture tree1 = TextureLoader::load("grafiki/Drzewo.png");
sf::Texture tree2 = TextureLoader::load("grafiki/Drzewo2.png");

sf::Texture tablicaKill = TextureLoader::load("grafiki/Tablica_Kill.png");
sf::Texture tablicaLeft = TextureLoader::load("grafiki/Tablica_Left.png");
sf::Texture tablicaRight = TextureLoader::load("grafiki/Tablica_Right.png");
sf::Texture tablicaJump = TextureLoader::load("grafiki/Tablica_Skok.png");
sf::Texture tablicaPower = TextureLoader::load("grafiki/Tablica_Power_UP.png");



sf::RectangleShape tloL = createRectangleWithTexture(sf::Vector2f(7000.0f, 1700.0f), sf::Vector2f(-700.0f, -460.0f), Tlo_Laka);

sf::RectangleShape Grass6 = createRectangleWithTexture(sf::Vector2f(40.0f, 40.0f), sf::Vector2f(39.0f, 370.0f), grassL);

sf::RectangleShape StartDoorLaka = createRectangleWithTexture(sf::Vector2f(122.0f, 135.0f), sf::Vector2f(39.0f, 280.0f), StartDoor);

sf::RectangleShape Floor1L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(37.0f, 400.0f), flowerLakaL);
sf::RectangleShape Floor11 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(50.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor12 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(100.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor13 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(150.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor14 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(200.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor15 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(250.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor16 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(300.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor1P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(350.0f, 400.0f), flowerLakaP);

sf::RectangleShape tablica1 = createRectangleWithTexture(sf::Vector2f(75.0f, 48.0f), sf::Vector2f(207.5f, 314.0f), tablicaJump);
sf::RectangleShape tablica2 = createRectangleWithTexture(sf::Vector2f(75.0f, 48.0f), sf::Vector2f(170.0f, 362.0f), tablicaLeft);
sf::RectangleShape tablica3 = createRectangleWithTexture(sf::Vector2f(75.0f, 48.0f), sf::Vector2f(245.0f, 362.0f), tablicaRight);

sf::RectangleShape Drzewo1 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(430.0f, 53.0f), tree1);

sf::RectangleShape Grass1 = createRectangleWithTexture(sf::Vector2f(40.0f, 40.0f), sf::Vector2f(450.0f, 320.0f), grassL);
sf::RectangleShape Grass3 = createRectangleWithTexture(sf::Vector2f(40.0f, 40.0f), sf::Vector2f(600.0f, 320.0f), grassP);

sf::RectangleShape Floor2L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(437.0f, 350.0f), grassLakaL);
sf::RectangleShape Floor21 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(450.0f, 350.0f), grassLaka);
sf::RectangleShape Floor22 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(500.0f, 350.0f), grassLaka);
sf::RectangleShape Floor23 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(550.0f, 350.0f), grassLaka);
sf::RectangleShape Floor24 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(600.0f, 350.0f), grassLaka);
sf::RectangleShape Floor25 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(650.0f, 350.0f), grassLaka);
sf::RectangleShape Floor26 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(700.0f, 350.0f), grassLaka);
sf::RectangleShape Floor2P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(750.0f, 350.0f), grassLakaP);

sf::RectangleShape Grass2 = createRectangleWithTexture(sf::Vector2f(40.0f, 40.0f), sf::Vector2f(1000.0f, 270.0f), grassL);

sf::RectangleShape Floor3L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(937.0f, 300.0f), flowerLakaL);
sf::RectangleShape Floor31 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(950.0f, 300.0f), flowerLaka);
sf::RectangleShape Floor32 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1000.0f, 300.0f), flowerLaka);
sf::RectangleShape Floor33 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1050.0f, 300.0f), flowerLaka);
sf::RectangleShape Floor34 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1100.0f, 300.0f), flowerLaka);
sf::RectangleShape Floor35 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1150.0f, 300.0f), flowerLaka);
sf::RectangleShape Floor36 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1200.0f, 300.0f), flowerLaka);
sf::RectangleShape Floor3P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1250.0f, 300.0f), flowerLakaP);

sf::RectangleShape Grass4 = createRectangleWithTexture(sf::Vector2f(40.0f, 40.0f), sf::Vector2f(1100.0f, 270.0f), grassL);

sf::RectangleShape tablica5 = createRectangleWithTexture(sf::Vector2f(75.0f, 48.0f), sf::Vector2f(1175.0f, 262.0f), tablicaPower);


sf::RectangleShape Grass7 = createRectangleWithTexture(sf::Vector2f(40.0f, 40.0f), sf::Vector2f(1430.0f, 270.0f), grassL);

sf::RectangleShape Floor4L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1387.0f, 300.0f), flowerLakaL);
sf::RectangleShape Floor41 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1400.0f, 300.0f), flowerLaka);
sf::RectangleShape Floor4P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1450.0f, 300.0f), flowerLakaP);

sf::RectangleShape Grass5 = createRectangleWithTexture(sf::Vector2f(40.0f, 40.0f), sf::Vector2f(1710.0f, 270.0f), grassL);

sf::RectangleShape Drzewo2 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(1630.0f, 3.0f), tree2);

sf::RectangleShape Floor5L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1687.0f, 300.0f), grassLakaL);
sf::RectangleShape Floor51 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1700.0f, 300.0f), grassLaka);
sf::RectangleShape Floor5P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1750.0f, 300.0f), grassLakaP);

sf::RectangleShape Grass8 = createRectangleWithTexture(sf::Vector2f(40.0f, 40.0f), sf::Vector2f(1900.0f, 270.0f), grassP);

sf::RectangleShape Floor6L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1887.0f, 300.0f), flowerLakaL);
sf::RectangleShape Floor61 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1900.0f, 300.0f), flowerLaka);
sf::RectangleShape Floor6P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1950.0f, 300.0f), flowerLakaP);

sf::RectangleShape Floor7L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(2237.0f, 500.0f), ziemiaL);
sf::RectangleShape Floor71 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2250.0f, 500.0f), ziemia);
sf::RectangleShape Floor7P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(2300.0f, 500.0f), ziemiaP);

sf::RectangleShape Floor8L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(2487.0f, 500.0f), ziemiaL);
sf::RectangleShape Floor81 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2500.0f, 500.0f), ziemia);
sf::RectangleShape Floor8P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(2550.0f, 500.0f), ziemiaP);


sf::RectangleShape tablica4 = createRectangleWithTexture(sf::Vector2f(75.0f, 48.0f), sf::Vector2f(2700.0f, 462.0f), tablicaKill);

sf::RectangleShape Drzewo3 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(2420.0f, 203.0f), tree1);
sf::RectangleShape Drzewo4 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(2850.0f, 203.0f), tree2);
sf::RectangleShape Drzewo5 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(3100.0f, 203.0f), tree1);

sf::RectangleShape Floor9L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(2687.0f, 500.0f), ziemiaL);
sf::RectangleShape Floor91 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2700.0f, 500.0f), ziemia);
sf::RectangleShape Floor92 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2750.0f, 500.0f), ziemia);
sf::RectangleShape Floor93 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2800.0f, 500.0f), ziemia);
sf::RectangleShape Kolce94 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2850.0f, 500.0f), kolce);
sf::RectangleShape Floor95 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2900.0f, 500.0f), ziemia);
sf::RectangleShape Floor96 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2950.0f, 500.0f), ziemia);
sf::RectangleShape Floor97 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(3000.0f, 500.0f), ziemia);
sf::RectangleShape Floor98 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(3050.0f, 500.0f), ziemia);
sf::RectangleShape Floor99 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(3100.0f, 500.0f), ziemia);
sf::RectangleShape Floor910 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(3150.0f, 500.0f), ziemia);
sf::RectangleShape Floor9P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(3200.0f, 500.0f), ziemiaP);

sf::RectangleShape EndDoorLaka = createRectangleWithTexture(sf::Vector2f(84.0f, 93.0f), sf::Vector2f(3100.0f, 416.0f), EndDoor);

sf::RectangleShape player = createRectangleWithTexture(sf::Vector2f(53.0f, 73.0f), sf::Vector2f(50.0f, Floor12.getPosition().y - player.getSize().y / 2 - Floor12.getSize().y / 2), player_prawo);

sf::Texture winn = TextureLoader::load("grafiki/WinMenu.png");
sf::RectangleShape win = createRectangleWithTexture(sf::Vector2f(800.0f, 600.0f), sf::Vector2f(0.0f, 0.0f), winn);

sf::Texture bagetue = TextureLoader::load("grafiki/baguette.png");
sf::RectangleShape jumpboost2 = createRectangleWithTexture(sf::Vector2f(41.0f, 57.0f), sf::Vector2f(1400.0f, 266.0f), bagetue);


sf::Texture pochodniaatxt1 = TextureLoader::load("grafiki/torch1.png");
sf::Texture pochodniaatxt2 = TextureLoader::load("grafiki/torch2.png");


sf::RectangleShape pochodnia = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(140.0f, 345.0f), pochodniaatxt1);
sf::RectangleShape pochodnia2 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(340.0f, 345.0f), pochodniaatxt1);
sf::RectangleShape pochodnia3 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(1150.0f, 245.0f), pochodniaatxt1);
sf::RectangleShape pochodnia4 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(1890.0f, 245.0f), pochodniaatxt1);
sf::RectangleShape pochodnia5 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(2250.0f, 445.0f), pochodniaatxt1);
sf::RectangleShape pochodnia6 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(2780.0f, 445.0f), pochodniaatxt1);
sf::RectangleShape pochodnia7 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(3080.0f, 445.0f), pochodniaatxt1);
sf::Vector2f playerPosition(window.mapCoordsToPixel(player.getPosition()).x + 355, Floor12.getPosition().y - player.getSize().y / 2 -10- Floor12.getSize().y / 2);
sf::Texture egg1 = TextureLoader::load("grafiki/egg.png");
sf::RectangleShape egg = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(160.0f, 345.0f), egg1);
eggs.push_back(egg);
sf::RectangleShape egg2 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(120.0f, 345.0f), egg1);
eggs.push_back(egg2);
sf::RectangleShape egg3 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(200.0f, 345.0f), egg1);
eggs.push_back(egg3);
sf::RectangleShape egg4 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(240.0f, 345.0f), egg1);
eggs.push_back(egg4);
sf::RectangleShape egg5 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(280.0f, 345.0f), egg1);
eggs.push_back(egg5);

sf::RectangleShape egg6 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(560.0f, 265.0f), egg1);
eggs.push_back(egg6);
sf::RectangleShape egg7 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(520.0f, 265.0f), egg1);
eggs.push_back(egg7);
sf::RectangleShape egg8 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(600.0f, 265.0f), egg1);
eggs.push_back(egg8);
sf::RectangleShape egg9 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(640.0f, 265.0f), egg1);
eggs.push_back(egg9);
sf::RectangleShape egg10 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(680.0f, 265.0f), egg1);
eggs.push_back(egg10);

sf::RectangleShape egg11 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(2260.0f, 445.0f), egg1);
eggs.push_back(egg11);
sf::RectangleShape egg12 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(2300.0f, 445.0f), egg1);
eggs.push_back(egg12);
sf::RectangleShape egg13 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(2790.0f, 445.0f), egg1);
eggs.push_back(egg13);
sf::RectangleShape egg14 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(2830.0f, 445.0f), egg1);
eggs.push_back(egg14);
sf::RectangleShape egg15 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3010.0f, 445.0f), egg1);
eggs.push_back(egg15);
sf::RectangleShape egg16 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3050.0f, 445.0f), egg1);
eggs.push_back(egg16);