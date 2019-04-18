#include "Tea.h"
#include <iostream>
using namespace std;

Tea::Tea(double prixTea, int codeTea) : prixTea(prixTea), codeTea(codeTea)
{
}


bool Tea::accepterPaiement(double monaie)
{
    if ((monaie>= this->prixTea) ){
            cout << "Paiement accepter"<<endl;
            return true;
    }else{
        cout << "Monaie insuffissant pour prendre tea"<<endl;
        return false;
    }
}

double Tea::change(double monaie)
{
    if (monaie>= this->prixTea){
            cout << "Prendre votre monaie restant " <<monaie - this->prixTea <<endl;
            return monaie - this->prixTea;
    }else{
        cout << "Monaie insuffissant pour prendre tea"<<endl;
        return monaie;
    }
}

bool Tea::selectionner(int code){
    if (code == this->codeTea){
            cout << "Tea selectionner"<<endl;
        return true;
    }else{
        cout << "Veuillez selectionner tea"<<endl;
        return false;
    }
}

void Tea::serveTea(){
    cout << "Serving tea..."<<endl;
}

void Tea::ouvrireCompartement(){
    cout << "Ouverture du compartement..."<<endl;
}

void Tea::fermerCompartement(){
    cout << "Fermeture du compartement..."<<endl;
}

void Tea::setPrixTea(double prix)
{
    this->prixTea = prix;
}


double Tea::getPrixTea()
{
    return this->prixTea;
}

void Tea::setCodeTea(int code)
{
    this->codeTea = code;
}


int Tea::getCodeTea()
{
    return this->codeTea;
}
