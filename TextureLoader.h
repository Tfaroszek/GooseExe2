#ifndef TextureLoader_H
#define TextureLoader_H


/**
 * @brief Klasa odpowiadaj¹ca za ³adowanie grafiki.
 *
 * Ta klasa jest odpowiedzialna za ³adowanie grafiki. Zawiera metodê
 * do tworzenia obiektu z grafik¹.
 */
class TextureLoader {
public:
    /**
 * @brief Pobiera grafikê.
 *
 * @param filename Nazwa grafiki.
 * @return Zmienna z przypisan¹ grafik¹.
 */
    static sf::Texture load(const std::string& filename) {
        sf::Texture texture;
        if (!texture.loadFromFile(filename)) {
            // handle error loading texture
            throw std::runtime_error("Failed to load texture from file: " + filename);
        }
        return texture;
    }
};
/**
     * @brief Tworzy obiekt z grafik¹.
     *
     * @param size Wielkoœæ danego obiektu.
     * @param position Pozycja danego obiektu.
     * @param texture Grafika nak³adana na dany obiekt.
     * @return Obiekt z grafik¹.
     */
sf::RectangleShape createRectangleWithTexture(const sf::Vector2f& size, const sf::Vector2f& position, const sf::Texture& texture) {
    sf::RectangleShape rectangle(size);
    rectangle.setTexture(&texture);
    rectangle.setPosition(position);
    return rectangle;
}
#endif