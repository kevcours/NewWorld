	/*
	Nom du scripte: Compte.sql
	Nom de base : GestCompte
	Auteur: Courtial Kévin
	Date de création: 16/11/2017
	*/

	/*Suppression des tables existante*/
	Drop table if exists Operation;
	Drop table if exists Compte;
	Drop table if exists SousCompte;
	Drop table if exists Banque ;

	/*Creation des tables*/

	Create table Operation if not exists(
		opID int primarykey,
		opLib varchar(25),
		opDate date,
		opMontant float
		);
	Create table Compte if not exists(
		coID int primarykey,
		coLib varchar(25),
		coAvoirReel float
		);

