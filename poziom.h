#ifndef poziom_H
#define poziom_H
void poziom() {




// ladowanie txt postaci gracza
sf::Texture player_prawo = TextureLoader::load("grafiki/gaskaPrawo.png");
sf::Texture player_lewo = TextureLoader::load("grafiki/gaskaLewo.png");
sf::Texture bieg1lewo = TextureLoader::load("grafiki/bieg1lewo.png");
sf::Texture bieg2lewo = TextureLoader::load("grafiki/bieg2lewo.png");
sf::Texture bieg1prawo = TextureLoader::load("grafiki/bieg1prawo.png");
sf::Texture bieg2prawo = TextureLoader::load("grafiki/bieg2prawo.png");

//ladowanie grafik drzwi startowych i koncowych
sf::Texture StartDoor = TextureLoader::load("grafiki/StartCage.png");
sf::Texture EndDoor = TextureLoader::load("grafiki/MetaDrzwi.png");

//³adowanie grafiki tla
sf::Texture Tlo_Laka = TextureLoader::load("grafiki/TloLaka.png");
sf::RectangleShape tloL(sf::Vector2f(7000.0f, 1700.0f));
tloL.setTexture(&Tlo_Laka);
tloL.setPosition(-700.0f, -460.0f);

//ladowanie grafik blokow
sf::Texture flowerLaka = TextureLoader::load("grafiki/trawa_laka_kwiat.png");
sf::Texture flowerLakaL = TextureLoader::load("grafiki/trawa_laka_kwiat_lewa.png");
sf::Texture flowerLakaP = TextureLoader::load("grafiki/trawa_laka_kwiat_prawa.png");

sf::Texture grassLaka = TextureLoader::load("grafiki/trawa_laka.png");
sf::Texture grassLakaL = TextureLoader::load("grafiki/trawa_laka_lewa.png");
sf::Texture grassLakaP = TextureLoader::load("grafiki/trawa_laka_prawa.png");

//kolce
sf::Texture kolce = TextureLoader::load("grafiki/ziemia_kolce.png");
sf::Texture kolceWS = TextureLoader::load("grafiki/kolce_wall_short.png");

//ziemia
sf::Texture ziemiaL = TextureLoader::load("grafiki/ziemia_lewo.png");
sf::Texture ziemiaP = TextureLoader::load("grafiki/ziemia_prawo.png");
sf::Texture ziemia = TextureLoader::load("grafiki/ziemia.png");

//ozdoby
sf::Texture grassL = TextureLoader::load("grafiki/OzdobaGrassLakaL.png");
sf::Texture grassP = TextureLoader::load("grafiki/OzdobaGrassLakaP.png");
sf::Texture deadA1 = TextureLoader::load("grafiki/dead1.png");
sf::Texture deadA2 = TextureLoader::load("grafiki/dead2.png");

//drzwi startowe
sf::Texture tree1 = TextureLoader::load("grafiki/Drzewo.png");
sf::Texture tree2 = TextureLoader::load("grafiki/Drzewo2.png");

sf::Texture tablicaKill = TextureLoader::load("grafiki/Tablica_Kill.png");
sf::Texture tablicaLeft = TextureLoader::load("grafiki/Tablica_Left.png");
sf::Texture tablicaRight = TextureLoader::load("grafiki/Tablica_Right.png");
sf::Texture tablicaJump = TextureLoader::load("grafiki/Tablica_Skok.png");
sf::Texture tablicaPower = TextureLoader::load("grafiki/Tablica_Power_UP.png");

sf::Texture bagetue = TextureLoader::load("grafiki/baguette.png");
sf::Texture kawa = TextureLoader::load("grafiki/dash1.png");

sf::RectangleShape Grass6(sf::Vector2f(40.0f, 40.0f));
Grass6.setTexture(&grassL);
Grass6.setPosition(39.0f, 370.0f);
//drzwi startowe
sf::RectangleShape StartDoorLaka(sf::Vector2f(122.0f, 135.0f));
StartDoorLaka.setTexture(&StartDoor);
StartDoorLaka.setPosition(39.0f, 300.0f);
//tworzenie podloza
sf::RectangleShape Floor1L(sf::Vector2f(13.0f, 44.0f));
Floor1L.setTexture(&flowerLakaL);
Floor1L.setPosition(37.0f, 400.0f);
sf::RectangleShape Floor11(sf::Vector2f(50.0f, 44.0f));
Floor11.setTexture(&flowerLaka);
Floor11.setPosition(50.0f, 400.0f);
sf::RectangleShape Floor12(sf::Vector2f(50.0f, 44.0f));
Floor12.setTexture(&flowerLaka);
Floor12.setPosition(100.0f, 400.0f);
sf::RectangleShape Floor13(sf::Vector2f(50.0f, 44.0f));
Floor13.setTexture(&grassLaka);
Floor13.setPosition(150.0f, 400.0f);
sf::RectangleShape Floor14(sf::Vector2f(50.0f, 44.0f));
Floor14.setTexture(&grassLaka);
Floor14.setPosition(200.0f, 400.0f);
sf::RectangleShape Floor15(sf::Vector2f(50.0f, 44.0f));
Floor15.setTexture(&flowerLaka);
Floor15.setPosition(250.0f, 400.0f);
sf::RectangleShape Floor16(sf::Vector2f(50.0f, 44.0f));
Floor16.setTexture(&grassLaka);
Floor16.setPosition(300.0f, 400.0f);
sf::RectangleShape Floor1P(sf::Vector2f(13.0f, 44.0f));
Floor1P.setTexture(&flowerLakaP);
Floor1P.setPosition(350.0f, 400.0f);

sf::RectangleShape tablica1(sf::Vector2f(75.0f, 48.0f));
tablica1.setTexture(&tablicaJump);
tablica1.setPosition(207.5f, 314.0f);
sf::RectangleShape tablica2(sf::Vector2f(75.0f, 48.0f));
tablica2.setTexture(&tablicaLeft);
tablica2.setPosition(170.0f, 362.0f);
sf::RectangleShape tablica3(sf::Vector2f(75.0f, 48.0f));
tablica3.setTexture(&tablicaRight);
tablica3.setPosition(245.0f, 362.0f);

sf::RectangleShape Drzewo1(sf::Vector2f(177.0f, 307.0f));
Drzewo1.setTexture(&tree1);
Drzewo1.setPosition(430.0f, 53.0f);

sf::RectangleShape Grass1(sf::Vector2f(40.0f, 40.0f));
Grass1.setTexture(&grassL);
Grass1.setPosition(450.0f, 320.0f);
sf::RectangleShape Grass3(sf::Vector2f(40.0f, 40.0f));
Grass3.setTexture(&grassP);
Grass3.setPosition(600.0f, 320.0f);

sf::RectangleShape Floor2L(sf::Vector2f(13.0f, 44.0f));
Floor2L.setTexture(&grassLakaL);
Floor2L.setPosition(437.0f, 350.0f);
sf::RectangleShape Floor21(sf::Vector2f(50.0f, 44.0f));
Floor21.setTexture(&grassLaka);
Floor21.setPosition(450.0f, 350.0f);
sf::RectangleShape Floor22(sf::Vector2f(50.0f, 44.0f));
Floor22.setTexture(&grassLaka);
Floor22.setPosition(500.0f, 350.0f);
sf::RectangleShape Floor23(sf::Vector2f(50.0f, 44.0f));
Floor23.setTexture(&flowerLaka);
Floor23.setPosition(550.0f, 350.0f);
sf::RectangleShape Floor24(sf::Vector2f(50.0f, 44.0f));
Floor24.setTexture(&flowerLaka);
Floor24.setPosition(600.0f, 350.0f);
sf::RectangleShape Floor25(sf::Vector2f(50.0f, 44.0f));
Floor25.setTexture(&flowerLaka);
Floor25.setPosition(650.0f, 350.0f);
sf::RectangleShape Floor26(sf::Vector2f(50.0f, 44.0f));
Floor26.setTexture(&grassLaka);
Floor26.setPosition(700.0f, 350.0f);
sf::RectangleShape Floor2P(sf::Vector2f(13.0f, 44.0f));
Floor2P.setTexture(&grassLakaP);
Floor2P.setPosition(750.0f, 350.0f);

sf::RectangleShape Grass2(sf::Vector2f(40.0f, 40.0f));
Grass2.setTexture(&grassL);
Grass2.setPosition(1000.0f, 270.0f);

sf::RectangleShape Floor3L(sf::Vector2f(13.0f, 44.0f));
Floor3L.setTexture(&flowerLakaL);
Floor3L.setPosition(937.0f, 300.0f);
sf::RectangleShape Floor31(sf::Vector2f(50.0f, 44.0f));
Floor31.setTexture(&flowerLaka);
Floor31.setPosition(950.0f, 300.0f);
sf::RectangleShape Floor32(sf::Vector2f(50.0f, 44.0f));
Floor32.setTexture(&flowerLaka);
Floor32.setPosition(1000.0f, 300.0f);
sf::RectangleShape Floor33(sf::Vector2f(50.0f, 44.0f));
Floor33.setTexture(&flowerLaka);
Floor33.setPosition(1050.0f, 300.0f);
sf::RectangleShape Floor34(sf::Vector2f(50.0f, 44.0f));
Floor34.setTexture(&flowerLaka);
Floor34.setPosition(1100.0f, 300.0f);
sf::RectangleShape Floor35(sf::Vector2f(50.0f, 44.0f));
Floor35.setTexture(&flowerLaka);
Floor35.setPosition(1150.0f, 300.0f);
sf::RectangleShape Floor36(sf::Vector2f(50.0f, 44.0f));
Floor36.setTexture(&flowerLaka);
Floor36.setPosition(1200.0f, 300.0f);
sf::RectangleShape Floor3P(sf::Vector2f(13.0f, 44.0f));
Floor3P.setTexture(&flowerLakaP);
Floor3P.setPosition(1250.0f, 300.0f);

sf::RectangleShape Grass4(sf::Vector2f(40.0f, 40.0f));
Grass4.setTexture(&grassL);
Grass4.setPosition(1100.0f, 270.0f);

sf::RectangleShape tablica5(sf::Vector2f(75.0f, 48.0f));
tablica5.setTexture(&tablicaJump);
tablica5.setPosition(1175.0f, 262.0f);

sf::RectangleShape Grass7(sf::Vector2f(40.0f, 40.0f));
Grass7.setTexture(&grassL);
Grass7.setPosition(1430.0f, 270.0f);

sf::RectangleShape Floor4L(sf::Vector2f(13.0f, 44.0f));
Floor4L.setTexture(&flowerLakaL);
Floor4L.setPosition(1387.0f, 300.0f);
sf::RectangleShape Floor41(sf::Vector2f(50.0f, 44.0f));
Floor41.setTexture(&flowerLaka);
Floor41.setPosition(1400.0f, 300.0f);
sf::RectangleShape Floor4P(sf::Vector2f(13.0f, 44.0f));
Floor4P.setTexture(&flowerLakaP);
Floor4P.setPosition(1450.0f, 300.0f);

sf::RectangleShape Grass5(sf::Vector2f(40.0f, 40.0f));
Grass5.setTexture(&grassL);
Grass5.setPosition(1710.0f, 270.0f);

sf::RectangleShape Drzewo2(sf::Vector2f(177.0f, 307.0f));
Drzewo2.setTexture(&tree2);
Drzewo2.setPosition(1630.0f, 3.0f);

sf::RectangleShape Floor5L(sf::Vector2f(13.0f, 44.0f));
Floor5L.setTexture(&grassLakaL);
Floor5L.setPosition(1687.0f, 300.0f);
sf::RectangleShape Floor51(sf::Vector2f(50.0f, 44.0f));
Floor51.setTexture(&grassLaka);
Floor51.setPosition(1700.0f, 300.0f);
sf::RectangleShape Floor5P(sf::Vector2f(13.0f, 44.0f));
Floor5P.setTexture(&grassLakaP);
Floor5P.setPosition(1750.0f, 300.0f);

sf::RectangleShape Grass8(sf::Vector2f(40.0f, 40.0f));
Grass8.setTexture(&grassP);
Grass8.setPosition(1900.0f, 270.0f);
sf::RectangleShape Floor6L(sf::Vector2f(13.0f, 44.0f));
Floor6L.setTexture(&flowerLakaL);
Floor6L.setPosition(1887.0f, 300.0f);
sf::RectangleShape Floor61(sf::Vector2f(50.0f, 44.0f));
Floor61.setTexture(&flowerLaka);
Floor61.setPosition(1900.0f, 300.0f);
sf::RectangleShape Floor6P(sf::Vector2f(13.0f, 44.0f));
Floor6P.setTexture(&flowerLakaP);
Floor6P.setPosition(1950.0f, 300.0f);
//////////////////////
sf::RectangleShape Floor7L(sf::Vector2f(13.0f, 44.0f));
Floor7L.setTexture(&ziemiaL);
Floor7L.setPosition(2237.0f, 500.0f);
sf::RectangleShape Floor71(sf::Vector2f(50.0f, 44.0f));
Floor71.setTexture(&ziemia);
Floor71.setPosition(2250.0f, 500.0f);
sf::RectangleShape Floor7P(sf::Vector2f(13.0f, 44.0f));
Floor7P.setTexture(&ziemiaP);
Floor7P.setPosition(2300.0f, 500.0f);

sf::RectangleShape Floor8L(sf::Vector2f(13.0f, 44.0f));
Floor8L.setTexture(&ziemiaL);
Floor8L.setPosition(2487.0f, 500.0f);
sf::RectangleShape Floor81(sf::Vector2f(50.0f, 44.0f));
Floor81.setTexture(&ziemia);
Floor81.setPosition(2500.0f, 500.0f);
sf::RectangleShape Floor8P(sf::Vector2f(13.0f, 44.0f));
Floor8P.setTexture(&ziemiaP);
Floor8P.setPosition(2550.0f, 500.0f);

sf::RectangleShape tablica4(sf::Vector2f(75.0f, 48.0f));
tablica4.setTexture(&tablicaKill);
tablica4.setPosition(2700.0f, 462.0f);

sf::RectangleShape Drzewo3(sf::Vector2f(177.0f, 307.0f));
Drzewo3.setTexture(&tree1);
Drzewo3.setPosition(2420.0f, 203.0f);
sf::RectangleShape Drzewo4(sf::Vector2f(177.0f, 307.0f));
Drzewo4.setTexture(&tree2);
Drzewo4.setPosition(2850.0f, 203.0f);
sf::RectangleShape Drzewo5(sf::Vector2f(177.0f, 307.0f));
Drzewo5.setTexture(&tree1);
Drzewo5.setPosition(3100.0f, 203.0f);

sf::RectangleShape Floor9L(sf::Vector2f(13.0f, 44.0f));
Floor9L.setTexture(&ziemiaL);
Floor9L.setPosition(2687.0f, 500.0f);
sf::RectangleShape Floor91(sf::Vector2f(50.0f, 44.0f));
Floor91.setTexture(&ziemia);
Floor91.setPosition(2700.0f, 500.0f);
sf::RectangleShape Floor92(sf::Vector2f(50.0f, 44.0f));
Floor92.setTexture(&ziemia);
Floor92.setPosition(2750.0f, 500.0f);
sf::RectangleShape Floor93(sf::Vector2f(50.0f, 44.0f));
Floor93.setTexture(&ziemia);
Floor93.setPosition(2800.0f, 500.0f);
////////////////
sf::RectangleShape Kolce94(sf::Vector2f(50.0f, 44.0f));
Kolce94.setTexture(&kolce);
Kolce94.setPosition(2850.0f, 500.0f);
/////////////////
sf::RectangleShape Floor95(sf::Vector2f(50.0f, 44.0f));
Floor95.setTexture(&ziemia);
Floor95.setPosition(2900.0f, 500.0f);
sf::RectangleShape Floor96(sf::Vector2f(50.0f, 44.0f));
Floor96.setTexture(&ziemia);
Floor96.setPosition(2950.0f, 500.0f);
sf::RectangleShape Floor97(sf::Vector2f(50.0f, 44.0f));
Floor97.setTexture(&ziemia);
Floor97.setPosition(3000.0f, 500.0f);
sf::RectangleShape Floor98(sf::Vector2f(50.0f, 44.0f));
Floor98.setTexture(&ziemia);
Floor98.setPosition(3050.0f, 500.0f);
sf::RectangleShape Floor99(sf::Vector2f(50.0f, 44.0f));
Floor99.setTexture(&ziemia);
Floor99.setPosition(3100.0f, 500.0f);
sf::RectangleShape Floor910(sf::Vector2f(50.0f, 44.0f));
Floor910.setTexture(&ziemia);
Floor910.setPosition(3150.0f, 500.0f);
sf::RectangleShape Floor9P(sf::Vector2f(13.0f, 44.0f));
Floor9P.setTexture(&ziemiaP);
Floor9P.setPosition(3200.0f, 500.0f);

sf::RectangleShape EndDoorLaka(sf::Vector2f(84.0f, 93.0f));
EndDoorLaka.setTexture(&EndDoor);
EndDoorLaka.setPosition(3100.0f, 416.0f);

sf::RectangleShape player(sf::Vector2f(53.0f, 73.0f));
player.setTexture(&player_prawo);
player.setPosition(50.0f, Floor12.getPosition().y - player.getSize().y / 2 - Floor12.getSize().y / 2);
sf::RectangleShape jumpboost2(sf::Vector2f(41.0f, 57.0f));
jumpboost2.setTexture(&bagetue);
jumpboost2.setPosition(1400.0f, 266.0f);

sf::Texture winn = TextureLoader::load("grafiki/WinMenu.png");
sf::RectangleShape win(sf::Vector2f(800.0f, 600.0f));
win.setTexture(&winn);
win.setPosition(0.0f, 0.0f);
sf::Clock clock;//zegar


}

#endif