#ifndef Tea_H
#define Tea_H


class Tea {
public:
	// Constructeurs
	Tea(double prixTea, int codeTea);

	// méthodes
	bool accepterPaiement(double monaie);
	double change(double monaie);
	bool selectionner(int code);
	void serveTea();
	void ouvrireCompartement();
	void fermerCompartement();


	//Accesseurs et mutateurs


	void setPrixTea(double prixTea);
	double getPrixTea();

	void setCodeTea(int codeTea);
	int getCodeTea();


private:

	double prixTea = 0;
	int codeTea = 0;


};
#endif
