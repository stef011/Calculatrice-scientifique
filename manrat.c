#ifndef manrat.h
#define manrat.h
#endif

float somme(float a, float b) {		// Fonction relative à la somme.
    float r;
    r = a + b;
    return r;
}

float difference(float a, float b) {//Fonction relative à la différence.
    float r;
    r = a - b;
    return r;
}

float produit(float a, float b) {	//Fonction relative au produit.
    float r;
    r = a*b;
    return r;
}

float quotient(float a, float b) {	//Fonction relative au quotient.
    float r;
    r = a / b;
    return r;
}

float factorielle(int n) { // fonction relative à la factorielle "a!".

    //*************Méthode par récursivité*****************

    int r;

    if (n == 0) {
        r = 1;
    }
    else {
        r = n*factorielle(n - 1);
    }
    return r;

    //*****************************************************


    //*****************Méthode for*************************

    /*a++;
    r = 1;
    for (size_t i = 1; i < a; i++)
    {
        r = i*r;
    }*/

    //****************************************************

}

float puissance(float a, float p) { // Fonction relative à la puissance p (utilisee dans la racine nieme).
    float r = 1;
    for (size_t i = 0; i < p; i++) {
        r = a*r;
    }
    return r;
}

float racine_carre(float A) {		//Fonction relative à la racine carrée.
    float r;
    r = 1;
    for (size_t i = 0; i < 152; i++) {
        r = ((r + (A / r)) / 2);
    }
    return r;
}

float racine_nieme(float A, float n) {	//Fonction relative à la racine nieme.
    float r;
    r = 1;
    int p = n - 1;
    for (size_t i = 0; i < 1500; i++) {
        r = (1 / n)*((n - 1)*r + A / puissance(r, p));
    }
    return r;
}
