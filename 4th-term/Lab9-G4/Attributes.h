#pragma once

// klasa reprezentujaca kolory
class AttColor
{
    
public:
    // typ wyliczeniowy z kolorami
    enum Attribute
    {
        BLACK,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        GRAY,
        WHITE
    };
    
    // konstruktor przyjmujacy parametr att
    AttColor(AttColor::Attribute att) : m_color(att) {}
    
    // funkcja ustawiajaca aktualny kolor
    void setColor(AttColor::Attribute att) { m_color = att; }
    
    // funkcja pobierajaca aktualny kolor
    AttColor::Attribute getColor() const { return m_color; }
    
private:
    // zmienna przechowujaca aktualny kolor
    AttColor::Attribute m_color;
};

// klasa reprezentujaca format
class AttFormat
{
public:
    // typ wyliczeniowy z formatami
    enum Attribute
    {
        BOLD,
        DIM,
        UNDERLINED,
        NORMAL
    };
    
    // konstruktor przyjmujacy parametr att
    AttFormat(AttFormat::Attribute att) : m_format(att) {}
    
    // funkcja ustawiajaca aktualny format
    void setFormat(AttFormat::Attribute att) { m_format = att; }
    
    // funkcja pobierajaca aktualny format
    AttFormat::Attribute getFormat() const { return m_format; }
    
private:
    // zmienna przechowujaca aktualny format
    AttFormat::Attribute m_format;
    
};