#include "recursos.hpp"

bool Recursos::recursos[7];

bool Recursos::Pode_alocar(bool recursos_in[7])
{
    for(int i=0;i<7;i++)
    {
        if(recursos_in[i] == true && recursos[i] == true)
        {
            return false;
        }
    }
    return true;
}

void Recursos::Aloca(bool recursos_in[7])
{
    for(int i=0;i<7;i++)
    {
        if(recursos_in[i] == true)
        {
            recursos[i] = true;
        }
    }
}

void Recursos::Desaloca(bool recursos_in[7])
{
    for(int i=0;i<7;i++)
    {
        if(recursos_in[i] == true)
        {
            recursos[i] = false;
        }
    }
}