/**
 * @file poziom.cpp
 * @brief Plik zawierający grafikę i obiekty poziomu 2.
 *
 * Ten plik zawiera wywołanie ładowania grafik, muzyki i tworzenia obiektów dla poziomu 2.
 *
 */

if (!music.openFromFile("Plan_B_Wave.wav"))
{
    return 0;
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
sf::Texture deadA1 = TextureLoader::load("grafiki/dead1.png");

sf::Texture StartDoor = TextureLoader::load("grafiki/StartCage.png");
sf::Texture EndDoor = TextureLoader::load("grafiki/MetaDrzwi.png");

sf::Texture TloLas = TextureLoader::load("grafiki/TloLas.png");
sf::RectangleShape tloL(sf::Vector2f(12000.0f, 1700.0f));
tloL.setTexture(&TloLas);
tloL.setPosition(-700.0f, -350.0f);

sf::Texture flowerLaka = TextureLoader::load("grafiki/trawa_las_kwiat.png");
sf::Texture flowerLakaL = TextureLoader::load("grafiki/trawa_las_kwiat_lewa.png");
sf::Texture flowerLakaP = TextureLoader::load("grafiki/trawa_las_kwiat_prawa.png");

sf::Texture grassLaka = TextureLoader::load("grafiki/trawa_las.png");
sf::Texture grassLakaL = TextureLoader::load("grafiki/trawa_las_lewa.png");
sf::Texture grassLakaP = TextureLoader::load("grafiki/trawa_las_prawa.png");

sf::Texture kolce = TextureLoader::load("grafiki/ziemia_kolce.png");
sf::Texture kolceWS = TextureLoader::load("grafiki/kolce_wall_short.png");

sf::Texture ziemiaL = TextureLoader::load("grafiki/ziemia_lewo.png");
sf::Texture ziemiaP = TextureLoader::load("grafiki/ziemia_prawo.png");
sf::Texture ziemia = TextureLoader::load("grafiki/ziemia.png");

sf::Texture grassL = TextureLoader::load("grafiki/OzdobaGrassLakaL.png");
sf::Texture grassP = TextureLoader::load("grafiki/OzdobaGrassLakaP.png");
sf::Texture tree1 = TextureLoader::load("grafiki/Obelisk1.png");
sf::Texture tree2 = TextureLoader::load("grafiki/Obelisk2.png");

sf::Texture bagetue = TextureLoader::load("grafiki/baguette.png");
sf::Texture kawa = TextureLoader::load("grafiki/dash1.png");

sf::Texture piesL = TextureLoader::load("grafiki/dog/Dog1Lewo.png");
sf::Texture piesP = TextureLoader::load("grafiki/dog/Dog1Prawo.png");
sf::Texture piesL1 = TextureLoader::load("grafiki/dog/Dog2Lewo.png");
sf::Texture piesP1 = TextureLoader::load("grafiki/dog/Dog2Prawo.png");

sf::RectangleShape StartDoorLaka = createRectangleWithTexture(sf::Vector2f(122.0f, 135.0f), sf::Vector2f(39.0f, 280.0f), StartDoor);

sf::RectangleShape Floor1L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(37.0f, 400.0f), flowerLakaL);
sf::RectangleShape Floor11 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(50.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor12 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(100.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor13 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(150.0f, 400.0f), grassLaka);
sf::RectangleShape Floor14 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(200.0f, 400.0f), grassLaka);
sf::RectangleShape Floor15 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(250.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor16 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(300.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(350.0f, 400.0f), flowerLakaP);

sf::RectangleShape Drzewo1 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(250.0f, 103.0f), tree1);
sf::RectangleShape Drzewo2 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(430.0f, 53.0f), tree2);
sf::RectangleShape Drzewo3 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(600.0f, 53.0f), tree1);

sf::RectangleShape Floor2L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(487.0f, 350.0f), flowerLakaL);
sf::RectangleShape Floor21 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(500.0f, 350.0f), flowerLaka);
sf::RectangleShape Floor22 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(550.0f, 350.0f), flowerLaka);
sf::RectangleShape Floor23 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(600.0f, 350.0f), grassLaka);
sf::RectangleShape Floor24 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(650.0f, 350.0f), grassLaka);
sf::RectangleShape Floor25 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(700.0f, 350.0f), flowerLaka);
sf::RectangleShape Floor26 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(750.0f, 350.0f), grassLaka);
sf::RectangleShape Floor2P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(800.0f, 350.0f), flowerLakaP);

sf::RectangleShape jumpboost = createRectangleWithTexture(sf::Vector2f(41.0f, 57.0f), sf::Vector2f(800.0f, 300.0f), bagetue);

sf::RectangleShape Dash1 = createRectangleWithTexture(sf::Vector2f(30.0f, 50.0f), sf::Vector2f(1230.0f, 180.0f), kawa);

sf::RectangleShape Floor2polowaL = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1167.0f, 250.0f), ziemiaL);
sf::RectangleShape Floor2polowa = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1180.0f, 250.0f), ziemia);
sf::RectangleShape Floor2polowaP = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1230.0f, 250.0f), ziemiaP);

sf::RectangleShape Drzewo4 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(1460.0f, -47.0f), tree2);
sf::RectangleShape Drzewo5 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(1640.0f, -47.0f), tree2);

sf::RectangleShape Floor3L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1487.0f, 250.0f), flowerLakaL);
sf::RectangleShape Floor31 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1500.0f, 250.0f), flowerLaka);
sf::RectangleShape Floor32 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1550.0f, 250.0f), flowerLaka);
sf::RectangleShape Floor33 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1600.0f, 250.0f), grassLaka);
sf::RectangleShape Floor34 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1650.0f, 250.0f), grassLaka);
sf::RectangleShape Floor35 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1700.0f, 250.0f), flowerLaka);
sf::RectangleShape Floor36 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(1750.0f, 250.0f), grassLaka);
sf::RectangleShape Floor3P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1800.0f, 250.0f), flowerLakaP);

sf::RectangleShape Floor4L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(1987.0f, 250.0f), flowerLakaL);
sf::RectangleShape Floor41 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2000.0f, 250.0f), flowerLaka);
sf::RectangleShape Floor42 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2050.0f, 250.0f), flowerLaka);
sf::RectangleShape Floor43 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2100.0f, 250.0f), grassLaka);
sf::RectangleShape Floor44 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2150.0f, 250.0f), grassLaka);
sf::RectangleShape Floor45 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2200.0f, 250.0f), flowerLaka);
sf::RectangleShape Floor46 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2250.0f, 250.0f), grassLaka);
sf::RectangleShape Floor4P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(2300.0f, 250.0f), flowerLakaP);

sf::RectangleShape jumpboost2 = createRectangleWithTexture(sf::Vector2f(41.0f, 57.0f), sf::Vector2f(2300.0f, 200.0f), bagetue);

sf::RectangleShape Floor5L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(2487.0f, 100.0f), flowerLakaL);
sf::RectangleShape Floor51 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2500.0f, 100.0f), flowerLaka);
sf::RectangleShape Floor52 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2550.0f, 100.0f), flowerLaka);
sf::RectangleShape Floor53 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2600.0f, 100.0f), grassLaka);
sf::RectangleShape Floor54 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2650.0f, 100.0f), grassLaka);
sf::RectangleShape Floor55 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2700.0f, 100.0f), flowerLaka);
sf::RectangleShape Floor56 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(2750.0f, 100.0f), grassLaka);
sf::RectangleShape Floor5P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(2800.0f, 100.0f), flowerLakaP);

sf::RectangleShape Dash2 = createRectangleWithTexture(sf::Vector2f(30.0f, 50.0f), sf::Vector2f(2800.0f, 55.0f), kawa);

sf::RectangleShape Floor6L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(3087.0f, 100.0f), ziemiaL);
sf::RectangleShape Floor61 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(3100.0f, 100.0f), ziemia);
sf::RectangleShape Floor6P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(3150.0f, 100.0f), ziemiaP);

sf::RectangleShape Floor7L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(3337.0f, 100.0f), ziemiaL);
sf::RectangleShape Floor71 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(3350.0f, 100.0f), ziemia);
sf::RectangleShape Floor7P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(3400.0f, 100.0f), ziemiaP);

sf::RectangleShape Floor8L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(3587.0f, 100.0f), ziemiaL);
sf::RectangleShape Floor81 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(3600.0f, 100.0f), ziemia);
sf::RectangleShape Floor8P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(3650.0f, 100.0f), ziemiaP);

sf::RectangleShape Floor9L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(3837.0f, 100.0f), ziemiaL);
sf::RectangleShape Floor91 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(3850.0f, 100.0f), ziemia);
sf::RectangleShape Floor9P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(3900.0f, 100.0f), ziemiaP);

sf::RectangleShape Floor10L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(4087.0f, 100.0f), ziemiaL);
sf::RectangleShape Floor10 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4100.0f, 100.0f), ziemia);
sf::RectangleShape Floor101 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4150.0f, 100.0f), ziemia);

sf::RectangleShape Kolce102 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4200.0f, 100.0f), kolce);

sf::RectangleShape Floor103 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4250.0f, 100.0f), ziemia);
sf::RectangleShape Floor104 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4300.0f, 100.0f), ziemia);

sf::RectangleShape Kolce105 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4350.0f, 100.0f), kolce);

sf::RectangleShape Floor106 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4400.0f, 100.0f), ziemia);
sf::RectangleShape Floor107 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4450.0f, 100.0f), ziemia);
sf::RectangleShape Floor10P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(4500.0f, 100.0f), ziemiaP);

sf::RectangleShape Floor11L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(4687.0f, 150.0f), ziemiaL);
sf::RectangleShape Floor110 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4700.0f, 150.0f), ziemia);
sf::RectangleShape Floor11P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(4750.0f, 150.0f), ziemiaP);

sf::RectangleShape Floor12L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(4887.0f, 100.0f), ziemiaL);
sf::RectangleShape Floor120 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(4900.0f, 100.0f), ziemia);
sf::RectangleShape Floor12P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(4950.0f, 100.0f), ziemiaP);

sf::RectangleShape Floor13L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(5087.0f, 50.0f), ziemiaL);
sf::RectangleShape Floor130 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5100.0f, 50.0f), ziemia);
sf::RectangleShape Floor13P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(5150.0f, 50.0f), ziemiaP);

sf::RectangleShape Dash3 = createRectangleWithTexture(sf::Vector2f(30.0f, 50.0f), sf::Vector2f(5150.0f, 5.0f), kawa);

sf::RectangleShape Floor14L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(5287.0f, 400.0f), ziemiaL);
sf::RectangleShape Floor140 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5300.0f, 400.0f), ziemia);
sf::RectangleShape Floor14P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(5350.0f, 400.0f), ziemiaP);

sf::RectangleShape Drzewo6 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(5460.0f, 103.0f), tree1);
sf::RectangleShape Drzewo7 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(5600.0f, 103.0f), tree1);
sf::RectangleShape Drzewo8 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(6590.0f, 103.0f), tree1);

sf::RectangleShape Floor15L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(5487.0f, 400.0f), flowerLakaL);
sf::RectangleShape Floor150 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5500.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor151 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5550.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor152 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5600.0f, 400.0f), grassLaka);
sf::RectangleShape Floor153 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5650.0f, 400.0f), grassLaka);
sf::RectangleShape Floor154 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5700.0f, 400.0f), flowerLaka);
sf::RectangleShape Floor155 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5750.0f, 400.0f), grassLaka);
sf::RectangleShape Floor156 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5800.0f, 400.0f), grassLaka);
sf::RectangleShape Floor157 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5850.0f, 400.0f), grassLaka);
sf::RectangleShape Floor158 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5900.0f, 400.0f), grassLaka);
sf::RectangleShape Floor159 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(5950.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1510 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6000.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1511 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6050.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1512 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6100.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1513 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6150.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1514 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6200.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1515 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6250.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1516 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6300.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1517 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6350.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1518 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6400.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1519 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6450.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1520 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6500.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1521 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6550.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1522 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6600.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1523 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6650.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1524 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6700.0f, 400.0f), grassLaka);
sf::RectangleShape Floor1525 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6750.0f, 400.0f), grassLaka);
sf::RectangleShape Floor15P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(6800.0f, 400.0f), flowerLakaP);

sf::RectangleShape Floor16L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(6087.0f, 270.0f), ziemiaL);
sf::RectangleShape Floor160 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6100.0f, 270.0f), ziemia);

sf::RectangleShape Kolce161 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6150.0f, 270.0f), kolce);

sf::RectangleShape Floor162 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(6200.0f, 270.0f), ziemia);
sf::RectangleShape Floor16P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(6250.0f, 270.0f), ziemiaP);

sf::RectangleShape KolceWall = createRectangleWithTexture(sf::Vector2f(55.0f, 60.0f), sf::Vector2f(6750.0f, 350.0f), kolceWS);

sf::RectangleShape Floor17L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(6987.0f, 270.0f), flowerLakaL);
sf::RectangleShape Floor171 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7000.0f, 270.0f), flowerLaka);
sf::RectangleShape Floor172 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7050.0f, 270.0f), flowerLaka);
sf::RectangleShape Floor173 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7100.0f, 270.0f), grassLaka);
sf::RectangleShape Floor174 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7150.0f, 270.0f), grassLaka);
sf::RectangleShape Floor175 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7200.0f, 270.0f), flowerLaka);
sf::RectangleShape Floor176 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7250.0f, 270.0f), grassLaka);
sf::RectangleShape Floor17P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(7300.0f, 270.0f), flowerLakaP);

sf::RectangleShape Drzewo9 = createRectangleWithTexture(sf::Vector2f(177.0f, 307.0f), sf::Vector2f(7500.0f, 83.0f), tree2);

sf::RectangleShape Floor18L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(7487.0f, 380.0f), flowerLakaL);
sf::RectangleShape Floor181 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7500.0f, 380.0f), flowerLaka);
sf::RectangleShape Floor182 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7550.0f, 380.0f), flowerLaka);
sf::RectangleShape Floor183 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7600.0f, 380.0f), grassLaka);
sf::RectangleShape Floor184 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7650.0f, 380.0f), grassLaka);
sf::RectangleShape Floor185 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7700.0f, 380.0f), flowerLaka);
sf::RectangleShape Floor186 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(7750.0f, 380.0f), grassLaka);
sf::RectangleShape Floor18P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(7800.0f, 380.0f), flowerLakaP);

sf::RectangleShape Floor19L = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(7987.0f, 320.0f), ziemiaL);
sf::RectangleShape Floor190 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(8000.0f, 320.0f), ziemia);

sf::RectangleShape Kolce191 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(8050.0f, 320.0f), kolce);

sf::RectangleShape Floor192 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(8100.0f, 320.0f), ziemia);
sf::RectangleShape Floor193 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(8150.0f, 320.0f), ziemia);
sf::RectangleShape Floor194 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(8200.0f, 320.0f), ziemia);
sf::RectangleShape Floor195 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(8250.0f, 320.0f), ziemia);
sf::RectangleShape Floor196 = createRectangleWithTexture(sf::Vector2f(50.0f, 44.0f), sf::Vector2f(8300.0f, 320.0f), ziemia);
sf::RectangleShape Floor19P = createRectangleWithTexture(sf::Vector2f(13.0f, 44.0f), sf::Vector2f(8350.0f, 320.0f), ziemiaP);

sf::RectangleShape EndDoorLaka = createRectangleWithTexture(sf::Vector2f(84.0f, 93.0f), sf::Vector2f(8200.0f, 237.0f), EndDoor);

sf::RectangleShape Pies = createRectangleWithTexture(sf::Vector2f(107.0f, 87.0f), sf::Vector2f(6000.0f, 323.0f), piesL);
 
sf::RectangleShape player = createRectangleWithTexture(sf::Vector2f(53.0f, 73.0f), sf::Vector2f(50.0f, Floor12.getPosition().y - player.getSize().y / 2 - Floor12.getSize().y / 2), player_prawo);

sf::Texture winn = TextureLoader::load("grafiki/WinMenu.png");
sf::RectangleShape win = createRectangleWithTexture(sf::Vector2f(800.0f, 600.0f), sf::Vector2f(0.0f, 0.0f), winn);


sf::Texture pochodniaatxt1 = TextureLoader::load("grafiki/torch1.png");
sf::Texture pochodniaatxt2 = TextureLoader::load("grafiki/torch2.png");



sf::Vector2f playerPosition(window.mapCoordsToPixel(player.getPosition()).x+355, Floor12.getPosition().y - player.getSize().y / 2 -10- Floor12.getSize().y / 2);


sf::RectangleShape pochodnia = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(140.0f, 345.0f), pochodniaatxt1);
sf::RectangleShape pochodnia3 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(1200.0f, 195.0f), pochodniaatxt1);
sf::RectangleShape pochodnia4 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(2100.0f, 195.0f), pochodniaatxt1);
sf::RectangleShape pochodnia5 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(3150.0f, 45.0f), pochodniaatxt1);
sf::RectangleShape pochodnia6 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(3360.0f, 45.0f), pochodniaatxt1);
sf::RectangleShape pochodnia7 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(3595.0f, 45.0f), pochodniaatxt1);
sf::RectangleShape pochodnia2 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(4300.0f, 45.0f), pochodniaatxt1);
sf::RectangleShape pochodnia8 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(4944.0f, 45.0f), pochodniaatxt1);
sf::RectangleShape pochodnia9 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(5345.0f, 345.0f), pochodniaatxt1);
sf::RectangleShape pochodnia10 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(6200.0f, 345.0f), pochodniaatxt1);
sf::RectangleShape pochodnia11 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(7000.0f, 214.0f), pochodniaatxt1);
sf::RectangleShape pochodnia12 = createRectangleWithTexture(sf::Vector2f(15.0f, 60.0f), sf::Vector2f(8100.0f, 265.0f), pochodniaatxt1);

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

sf::RectangleShape egg6 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(520.0f, 245.0f), egg1);
eggs.push_back(egg6);
sf::RectangleShape egg7 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(560.0f, 215.0f), egg1);
eggs.push_back(egg7);
sf::RectangleShape egg8 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(600.0f, 190.0f), egg1);
eggs.push_back(egg8);
sf::RectangleShape egg9 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(640.0f, 215.0f), egg1);
eggs.push_back(egg9);
sf::RectangleShape egg10 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(680.0f, 245.0f), egg1);
eggs.push_back(egg10);


sf::RectangleShape egg11 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(2260.0f, 115.0f), egg1);
eggs.push_back(egg11);
sf::RectangleShape egg12 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(2300.0f, 115.0f), egg1);
eggs.push_back(egg12);

sf::RectangleShape egg13 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(2690.0f, 75.0f), egg1);
eggs.push_back(egg13);
sf::RectangleShape egg14 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(2730.0f, 75.0f), egg1);
eggs.push_back(egg14);

sf::RectangleShape egg15 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3010.0f, 0.0f), egg1);
eggs.push_back(egg15);
sf::RectangleShape egg16 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3050.0f, 0.0f), egg1);
eggs.push_back(egg16);

sf::RectangleShape egg17 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3207.0f, 0.0f), egg1);
eggs.push_back(egg17);
sf::RectangleShape egg18 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3247.0f, 0.0f), egg1);
eggs.push_back(egg18);

sf::RectangleShape egg19 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3457.0f, 0.0f), egg1);
eggs.push_back(egg19);
sf::RectangleShape egg20 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3487.0f, 0.0f), egg1);
eggs.push_back(egg20);

sf::RectangleShape egg21 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3707.0f, 0.0f), egg1);
eggs.push_back(egg21);
sf::RectangleShape egg22 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(3747.0f, 0.0f), egg1);
eggs.push_back(egg22);

sf::RectangleShape egg23 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(4100.0f, 75.0f), egg1);
eggs.push_back(egg23);
sf::RectangleShape egg24 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(4140.0f, 75.0f), egg1);
eggs.push_back(egg24);

sf::RectangleShape egg25 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(1540.0f, 30.0f), egg1);
eggs.push_back(egg25);
sf::RectangleShape egg26 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(1720.0f, 30.0f), egg1);
eggs.push_back(egg26);


sf::RectangleShape egg27 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5500.0f, 330.0f), egg1);
eggs.push_back(egg27);
sf::RectangleShape egg28 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5540.0f, 330.0f), egg1);
eggs.push_back(egg28);
sf::RectangleShape egg29 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5580.0f, 330.0f), egg1);
eggs.push_back(egg29);
sf::RectangleShape egg30 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5620.0f, 330.0f), egg1);
eggs.push_back(egg30);
sf::RectangleShape egg31 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5660.0f, 330.0f), egg1);
eggs.push_back(egg31);
sf::RectangleShape egg32 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5700.0f, 330.0f), egg1);
eggs.push_back(egg32);
sf::RectangleShape egg33 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5740.0f, 330.0f), egg1);
eggs.push_back(egg33);
sf::RectangleShape egg34 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5780.0f, 330.0f), egg1);
eggs.push_back(egg34);
sf::RectangleShape egg35 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5820.0f, 330.0f), egg1);
eggs.push_back(egg35);
sf::RectangleShape egg36 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5860.0f, 330.0f), egg1);
eggs.push_back(egg36);
sf::RectangleShape egg37 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5900.0f, 330.0f), egg1);
eggs.push_back(egg37);
sf::RectangleShape egg38 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5940.0f, 330.0f), egg1);
eggs.push_back(egg38);
sf::RectangleShape egg39 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(5980.0f, 330.0f), egg1);
eggs.push_back(egg39);
sf::RectangleShape egg40 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6120.0f, 330.0f), egg1);
eggs.push_back(egg40);
sf::RectangleShape egg41 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6160.0f, 330.0f), egg1);
eggs.push_back(egg41);
sf::RectangleShape egg42 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6200.0f, 330.0f), egg1);
eggs.push_back(egg42);
sf::RectangleShape egg43 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6240.0f, 330.0f), egg1);
eggs.push_back(egg43);
sf::RectangleShape egg44 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6280.0f, 330.0f), egg1);
eggs.push_back(egg44);
sf::RectangleShape egg45 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6320.0f, 330.0f), egg1);
eggs.push_back(egg45);
sf::RectangleShape egg46 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6360.0f, 330.0f), egg1);
eggs.push_back(egg46);
sf::RectangleShape egg47 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6400.0f, 330.0f), egg1);
eggs.push_back(egg47);
sf::RectangleShape egg48 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6440.0f, 330.0f), egg1);
eggs.push_back(egg48);
sf::RectangleShape egg49 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6480.0f, 330.0f), egg1);
eggs.push_back(egg49);
sf::RectangleShape egg50 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6520.0f, 330.0f), egg1);
eggs.push_back(egg50);
sf::RectangleShape egg51 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6560.0f, 330.0f), egg1);
eggs.push_back(egg51);
sf::RectangleShape egg52 = createRectangleWithTexture(sf::Vector2f(14.0f, 18.0f), sf::Vector2f(6600.0f, 330.0f), egg1);
eggs.push_back(egg52);