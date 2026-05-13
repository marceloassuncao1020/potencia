long calcularPotencia(int base, int expoente) {
    long resultado = 1;

    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }

    return resultado;
}