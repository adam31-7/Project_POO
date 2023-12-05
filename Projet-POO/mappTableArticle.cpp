#include "mappTableArticle.h"
namespace NS_Composants
{
	mappTableArticle::mappTableArticle(void)
	{
		this->ref = "RIEN";
		this->Couleur = "RIEN";
		this->Nature = "RIEN";
		this->Nom = "RIEN";
		this->Quantite_Stock = -1;
		this->TauxTVA = -1;
		this->PrixHT = -1;
	}
	String^ mappTableArticle::SELECT(void)
	{
		return "SELECT * FROM Article";
	}
	String^ mappTableArticle::INSERT(void)
	{
		return "INSERT INTO Article " +
			"(Ref_article, Couleur_article, Nature_article, Nom_article, Quantite_stock, Taux_TVA, Prix_HT) " +
			"VALUES('" + this->getRef() + "', '" + this->getCouleur() + "', '" + this->getNature() + "', '" + this->getNom() + "', '" + this->getQuantite_Stock() + "', '" + this->getTauxTVA() + "', '" + this->getPrixHT() + "');SELECT @@IDENTITY; ";
	}
	String^ mappTableArticle::UPDATE(void)
	{
		return "UPDATE Article " +
			"SET Couleur_article = '" + this->getCouleur() + "', Nature_article = '" + this->getNature() + "', Nom_article = '" + this->getNom() + "', Quantite_stock = '" + this->getQuantite_Stock() + "', Taux_TVA = '" + this->getTauxTVA() + "', Prix_HT = '" + this->getPrixHT() + "' " +
			"WHERE(Ref_article = '" + this->getRef() + ");";
	}
	String^ mappTableArticle::DELETE(void)
	{
		return "DELETE FROM Article WHERE (Ref_article = '" + this->getRef() + ");";
	}
	void mappTableArticle::setRef(String^ Ref_article)
	{
		if (Ref_article != "")
		{
			this->ref = Ref_article;
		}
	}
	void mappTableArticle::setCouleur(String^ Couleur_article)
	{
		if (Couleur_article != "")
		{
			this->Couleur = Couleur_article;
		}
	}
	void mappTableArticle::setNature(String^ Nature_article)
	{
		if (Nature_article != "")
		{
			this->Nature = Nature_article;
		}
	}
	void mappTableArticle::setNom(String^ Nom_article)
	{
		if (Nom_article != "")
		{
			this->Nom = Nom_article;
		}
	}
	void mappTableArticle::setQuantite_Stock(int Quantite_stock)
	{
		if (Quantite_stock > 0)
		{
			this->Quantite_Stock = Quantite_stock;
		}
	}
	void mappTableArticle::setTauxTVA(float Taux_TVA)
	{
		if (Taux_TVA > 0)
		{
			this->TauxTVA = Taux_TVA;
		}
	}
	void mappTableArticle::setPrixHT(float Prix_HT)
	{
		if (Prix_HT > 0)
		{
			this->PrixHT = Prix_HT;
		}
	}
	String^ mappTableArticle::getRef(void)
	{
		return this->ref;
	}
	String^ mappTableArticle::getCouleur(void)
	{
		return this->Couleur;
	}
	String^ mappTableArticle::getNature(void)
	{
		return this->Nature;
	}
	String^ mappTableArticle::getNom(void)
	{
		return this->Nom;
	}
	int mappTableArticle::getQuantite_Stock(void)
	{
		return this->Quantite_Stock;
	}
	float mappTableArticle::getTauxTVA(void)
	{
		return this->TauxTVA;
	}
	float mappTableArticle::getPrixHT(void)
	{
		return this->PrixHT;
	}
}