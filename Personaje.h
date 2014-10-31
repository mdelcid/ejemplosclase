#ifndef PERSONAJE_H
#define PERSONAJE_H


class Personaje
{
    public:
        int vida;
        int ataque;
        Personaje();
        Personaje(int vida, int ataque);
        virtual ~Personaje();
    protected:
    private:
};

#endif // PERSONAJE_H
