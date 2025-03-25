/*
#include <iostream>
using namespace std;

int main()
{
    int ageUtilisateur(16);

    int nombreAmis(432);      //Le nombre d'amis de l'utilisateur

    double pi(3.14159);

    bool estMonAmi(true);    //Cet utilisateur est-il mon ami ?

    char lettre('a');

    return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // string nomUtilisateur("Albert Einstein");
    string prenom("Albert"), nom("Einstein");
    
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int ageUtilisateur(16);

    // cout << "Votre age est : ";
    // cout << ageUtilisateur;

    cout << "Votre age est : " << ageUtilisateur << endl;

    return 0;
}
*/
/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int qiUtilisateur(150);
    string nomUtilisateur("Albert Einstein");
    
    cout << "Vous vous appelez " << nomUtilisateur << " et votre QI vaut " << qiUtilisateur << endl;
    
    return 0;
}
*/

#include <iostream>
using namespace std;

int main()
{
    int ageUtilisateur(18); //Une variable pour contenir l'âge de l'utilisateur
    
    int& maReference(ageUtilisateur); //Et une référence sur la variable 'ageUtilisateur'

    //On peut utiliser à partir d'ici
    //'ageUtilisateur' ou 'maReference' indistinctement
    //Puisque ce sont deux étiquettes de la même case en mémoire

    cout << "Vous avez " << ageUtilisateur << "  ans. (via variable)" << endl;
    //On affiche, de la manière habituelle

    cout << "Vous avez " << maReference << " ans. (via reference)" << endl;
    //Et on affiche en utilisant la référence
    
    return 0;
}