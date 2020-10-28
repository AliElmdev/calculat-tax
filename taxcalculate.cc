/******************************************************************************
 * 
 *                             By AliDev
 *                         Calculat tax added 
 * 
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"\t\t\t\t\t Calcul des intérêts"<<endl;
    int cont = 0;
    do{
    double montant;
    double taux;
    double S;
    cout<<"Quelle est le montant à rembourser ?"<<endl;
    cin>>montant;
    while(montant<0){
        cout<<"veuillez saisir un montant supérieur a 0"<<endl;
        cin>>montant;
    }
    cout<<"Et pour le taux d'intérêt combien?"<<endl;
    cin>>taux;
    S=(taux/100*montant)+montant;
    cout<<"\t\t\t\t\tMerci,Alors votre paiement mensuel est :"<<S<<endl;
    cout<<"\n\n\n";
    cout<<"1-continue"<<endl;
    cout<<"2-exit\n\n\n"<<endl;
    cout<<"(1/2):";
    cin>>cont;
    }while(cont==1);
    cout<<"Merci pour utiliser notre application";
    return 0; 
}
