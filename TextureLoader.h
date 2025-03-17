#ifndef TextureLoader_H
#define TextureLoader_H


/**
 * @brief Klasa odpowiadaj�ca za �adowanie grafiki.
 *
 * Ta klasa jest odpowiedzialna za �adowanie grafiki. Zawiera metod�
 * do tworzenia obiektu z grafik�.
 */
class TextureLoader {
public:
    /**
 * @brief Pobiera grafik�.
 *
 * @param filename Nazwa grafiki.
 * @return Zmienna z przypisan� grafik�.
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
     * @brief Tworzy obiekt z grafik�.
     *
     * @param size Wielko�� danego obiektu.
     * @param position Pozycja danego obiektu.
     * @param texture Grafika nak�adana na dany obiekt.
     * @return Obiekt z grafik�.
     */
sf::RectangleShape createRectangleWithTexture(const sf::Vector2f& size, const sf::Vector2f& position, const sf::Texture& texture) {
    sf::RectangleShape rectangle(size);
    rectangle.setTexture(&texture);
    rectangle.setPosition(position);
    return rectangle;
}
#endif