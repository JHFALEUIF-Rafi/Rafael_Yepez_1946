char calcularCategoria(float promedio)
{
    if (promedio >= 17)
        return 'A';
    if (promedio >= 13)
        return 'B';
    if (promedio >= 10)
        return 'C';
    return 'D';
}