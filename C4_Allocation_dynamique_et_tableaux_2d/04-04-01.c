#include <stdio.h>
#include <stdarg.h>

/**
 * Exercice: Produit matriciel et affichage
 * 
 * Instructions:
 * Complétez le programme pour qu'il compile sans warning et affiche:
 * [[1, 2, 3], [4, 5, 6], [7, 8, 9]] * [1, 2, 3] = [14, 32, 50]
 * 
 * Pour cela, vous devez:
 * 1. Définir les alias de type `mat3x3` et `vec3` de sorte que les déclarations
 *    de `m` et `v` soient équivalentes à `double m[3][3]; double v[3];`
 * 2. Définir la fonction `mat_vec_mult` qui calcule le produit de la `mat3x3` reçue
 *    en premier paramètre par le `vec3` reçu en second paramètre, et stocke le résultat
 *    dans le `vec3` reçu en dernier paramètre
 * 3. Définir la fonction variadique `print_mat` qui fonctionne de manière similaire à `printf`
 *    avec un premier paramètre qui spécifie le format à afficher, et les suivants qui sont
 *    soit des `mat3x3`, soit des `vec3`. La chaine de format utilise `%m` pour indiquer
 *    l'emplacement d'une `mat3x3`, et `%v` pour celui d'un `vec3`.
 */

// Définir les alias de type vec3 et mat3x3
// Votre code ici

#define mat3x3 double m[3][3]
#define vec3 v[3];

// Fonction de multiplication matrice-vecteur
// Votre code ici

void mat_vec_mult(mat3x3 mat, vec3 vec, vec3 result){

}

// Fonctions d'affichage
// Votre code ici

void print_mat(const char *, )

int main() {
    mat3x3 m = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vec3 v = { 1, 2, 3 };
    vec3 w = {};

    mat_vec_mult(m, v, w);
    print_mat("%m * %v = %v\n", m, v, w);
    
    return 0;
}
