#include "./Headers/Frog.hpp";

namespace hcc
{
    Frog::Frog()

    {
        Reset();
    };

    sf::Sprite m_sprite;
    sf::Texture m_texture;

    bool Frog::Is_dead() const
    {
        return this->m_dead;
    };
    unsigned short Frog::X() const
    {
        return this->x;
    };
    unsigned short Frog::Y() const
    {
        return this->y;
    };
    
    sf::IntRect Frog::getHitArea() const
    {

    };

    void Frog::Move(char val)
    {

    };

    void Frog::Reset()
    {
        m_dead = false;
        m_direction = 0;
        x = 1; // fix
        y = 1; // fix
        m_controlKeys[0] = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
        m_controlKeys[1] = sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
        m_controlKeys[2] = sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
        m_controlKeys[3] = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);
    };

    void Frog::Update()
    {

    };

    void Frog::Draw(sf::RenderWindow& window)
    {
        m_texture.loadFromFile("Resources/frog.png");
        m_sprite.setTexture(m_texture);
        m_sprite.setPosition(x, y);
        window.draw(m_sprite);
    };

    void Frog::SetDead()
    {

    };

};