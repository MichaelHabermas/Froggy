#include <array>
#include <SFML/Graphics.hpp>

namespace hcc
{
    class Frog
    {
        public:
            Frog();

            bool Is_dead() const;
            unsigned short X() const;
            unsigned short Y() const;

            void Move(char val);
            void Reset();
            void Update();
            void Draw(sf::RenderWindow& window);
            void SetDead();
            sf::IntRect getHitArea() const;

        private:
            unsigned short x, y;
            std::array<bool, 4> m_controlKeys;

            sf::Sprite m_sprite;
            sf::Texture m_texture;

            bool m_dead;
            unsigned char m_direction;
    };
}