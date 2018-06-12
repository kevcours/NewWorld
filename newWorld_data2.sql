
DELETE FROM livraison;
DELETE FROM gerant;	
DELETE FROM ligneDeCde;
DELETE FROM listeParPDV;
DELETE FROM ouverture;
DELETE FROM pointDeVente;
DELETE FROM jourDansSemaine;
DELETE FROM lot;
DELETE FROM producteur;
DELETE FROM commande;
DELETE FROM utilisateur;
DELETE FROM unite;
DELETE FROM role;
DELETE FROM question;
DELETE FROM variete;
DELETE FROM produit;
DELETE FROM rayon;
DELETE FROM parametre;
DELETE FROM modeProduction;
DELETE FROM employer;

--
-- Dumping data for table employer
--

INSERT INTO employer VALUES(1, 'vergniez', 'pierre', NULL, NULL);
INSERT INTO employer VALUES(2, 'courtial', 'kevin', NULL, NULL);
INSERT INTO employer VALUES(3, 'rostain', 'peterson', NULL, NULL);

--
-- Dumping data for table modeProduction
--

INSERT INTO modeProduction VALUES(1, 'Agriculture conventionnel', 'Fortement mécanisée, cette agriculture tend à atteindre un rendement maximum des cultures');
INSERT INTO modeProduction VALUES(2, 'Agriculture raisonnée', 'Forme d’agriculture qui correspond à des démarches globales de gestion d’exploitation qui visent, au-delà du respect de la réglementation, à renforcer les impacts positifs des pratiques agricoles sur ');
INSERT INTO modeProduction VALUES(3, 'Agriculture durable', 'Forme d’agriculture qui concilie des pratiques respectueuses de l’environnement et des préoccupations économiques. La fertilisation est pratiquée au plus juste. ');
INSERT INTO modeProduction VALUES(4, 'Agriculture biologique', 'Forme d’agriculture qui rejette totalement l\'emploi de produit chimique de synthèse. La culture d’Organisme Génétiquement Modifié (0,OGM) est proscrite. ');
INSERT INTO modeProduction VALUES(5, 'Agriculture conventionnel', 'Fortement mécanisée, cette agriculture tend à atteindre un rendement maximum des cultures');
INSERT INTO modeProduction VALUES(6, 'Agriculture raisonnée', 'Forme d’agriculture qui correspond à des démarches globales de gestion d’exploitation qui visent, au-delà du respect de la réglementation, à renforcer les impacts positifs des pratiques agricoles sur ');
INSERT INTO modeProduction VALUES(7, 'Agriculture durable', 'Forme d’agriculture qui concilie des pratiques respectueuses de l’environnement et des préoccupations économiques. La fertilisation est pratiquée au plus juste. ');
INSERT INTO modeProduction VALUES(8, 'Agriculture biologique', 'Forme d’agriculture qui rejette totalement l\'emploi de produit chimique de synthèse. La culture d’Organisme Génétiquement Modifié (0,OGM) est proscrite. ');

--
-- Dumping data for table parametre
--

INSERT INTO parametre VALUES(1, 'nbArticleParPage', '25');
INSERT INTO parametre VALUES(2, 'email_serviceCommunication', 'peterson.rostain@gmail.com');

--
-- Dumping data for table rayon
--

INSERT INTO rayon VALUES(1, 'Fruits et légumes', 'img/rayon/fruitLegume',1, '');
INSERT INTO rayon VALUES(2, 'Viandes et poissons', 'img/rayon/viandePoisson',1, '');
INSERT INTO rayon VALUES(3, 'Céréales', 'img/rayon/cereale',1, '');
INSERT INTO rayon VALUES(4, 'Produits frais', 'img/rayon/produitFrais',1, '');
INSERT INTO rayon VALUES(5, 'Boissons', 'img/rayon/boisson',0, '');

--
-- Dumping data for table produit
--

INSERT INTO produit VALUES(1, 'Pomme', 'img/produit/pomme', 1, '', 1);
INSERT INTO produit VALUES(2, 'Poire', 'img/produit/poire', 1, '', 1);
INSERT INTO produit VALUES(3, 'Raisin', 'img/produit/raisin', 1, '', 1);
INSERT INTO produit VALUES(4, 'Orange', 'img/produit/orange', 1, '', 1);
INSERT INTO produit VALUES(5, 'Pamplemousse', 'img/produit/pamplemo', 1, '', 1);
INSERT INTO produit VALUES(6, 'Pomme', 'img/produit/pomme', 0, '', 1);
INSERT INTO produit VALUES(7, 'Poire', 'img/produit/poire', 0, '', 1);
INSERT INTO produit VALUES(8, 'Raisin', 'img/produit/raisin', 0, '', 1);
INSERT INTO produit VALUES(9, 'Orange', 'img/produit/orange', 0, '', 1);
INSERT INTO produit VALUES(11, 'Poisson', 'img/produit/poisson', 1, '', 2);
INSERT INTO produit VALUES(12, 'Boeuf', 'img/produit/boeuf', 1, '', 2);
INSERT INTO produit VALUES(13, 'Porc', 'img/produit/porc', 1, '', 2);

--
-- Dumping data for table variete
--

INSERT INTO variete VALUES(1, 'Golden', 'Idéale pour la cuisine', 1, '/home/kcourtial/Github/NewWorld/AppliPDF/cataloguePDF/catalogueNWpdf/golden.jpg',1.0,1);
INSERT INTO variete VALUES(2, 'Gala', 'Idéale pour se désaltérer', 1, '/home/kcourtial/Github/NewWorld/AppliPDF/cataloguePDF/catalogueNWpdf/gala.jpg',0.8, 1);
INSERT INTO variete VALUES(3, 'Reinette grise', 'Un goût acidulé', 1, '/home/kcourtial/Github/NewWorld/AppliPDF/cataloguePDF/catalogueNWpdf/reinete.jpg',0.5, 1);
INSERT INTO variete VALUES(4, 'Truite', 'A cuisiner en sauce', 1, '/home/kcourtial/Github/NewWorld/AppliPDF/cataloguePDF/catalogueNWpdf/truite.jpeg',4.0,11);

--
-- Dumping data for table question
--

INSERT INTO question VALUES(1, 'Quelle est votre couleur ');
INSERT INTO question VALUES(2, 'Quelle est votre ville fa');
INSERT INTO question VALUES(3, 'Quelle est votre équipe s');
INSERT INTO question VALUES(4, 'Quelle était le nom de vo');
INSERT INTO question VALUES(5, 'Quel est le nom de votre ');
INSERT INTO question VALUES(6, 'Quelle était le nom de vo');
INSERT INTO question VALUES(7, 'Quelle est votre couleur ');
INSERT INTO question VALUES(8, 'Quelle est votre ville fa');
INSERT INTO question VALUES(9, 'Quelle est votre équipe s');
INSERT INTO question VALUES(10, 'Quelle était le nom de vo');
INSERT INTO question VALUES(11, 'Quel est le nom de votre ');
INSERT INTO question VALUES(12, 'Quelle était le nom de vo');

--
-- Dumping data for table role
--

INSERT INTO role VALUES(1, 'administrateur');
INSERT INTO role VALUES(2, 'modérateur');
INSERT INTO role VALUES(3, 'client');
INSERT INTO role VALUES(4, 'producteur');
INSERT INTO role VALUES(5, 'artisan');
INSERT INTO role VALUES(6, 'gerant');

--
-- Dumping data for table unite
--

INSERT INTO unite VALUES(1, 'kg');
INSERT INTO unite VALUES(2, 'g');
INSERT INTO unite VALUES(3, 'l');
INSERT INTO unite VALUES(4, 'cl');
INSERT INTO unite VALUES(5, 'u.');
INSERT INTO unite VALUES(6, 'kg');
INSERT INTO unite VALUES(7, 'g');
INSERT INTO unite VALUES(8, 'l');
INSERT INTO unite VALUES(9, 'cl');

--
-- Dumping data for table utilisateur
--

INSERT INTO utilisateur VALUES(9, 'pierre','vergniez','2018-03-27 14:19:00','p.vergniez@laposte.net','*08F8F439977967B8968EF240132A69A745970D4F',0,'109.208.130.145',NULL,'12 rue bon hotel','gap','05000','0666252940', NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 6, 'c72597a0890804436840653bb531d743');
INSERT INTO utilisateur VALUES(44, 'peterson', 'rostain', '2018-03-12 01:36:27', 'peterson.rostain@gmail.com', '46f94c8de14fb36680850768ff1b7f2a', 0, '109.208.130.149', NULL, 'Chemin du Colombier', 'La Roche-des-Arnauds', '05400', '0681605231', NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, 4, 'ca670be010fd052d35a8841cd3fbf1d8');
INSERT INTO utilisateur VALUES(45, 'jérémy', 'altero', '2018-03-13 18:40:41', 'jeremy.altero@gmail.com', '46f94c8de14fb36680850768ff1b7f2a', 0, '109.208.130.147', NULL, 'Rue du Cheval Blanc', 'Gap', '05000', '0762880826', NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, '44.558', '6.07955', 4, 'c72597a0890804436840653bb531d743');
INSERT INTO utilisateur VALUES(46, 'pitou', 'sanchez', '2018-03-12 01:36:27', 'peterson.rostain@gmail.com', '*08F8F439977967B8968EF240132A69A745970D4F', 0, '109.208.130.148', NULL, 'Chemin du Colombier', 'La Roche-des-Arnauds', '05400', '0681605231', NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, 4, 'ca670be010fd052d35a8841cd3fbf1d8');

--
-- Dumping data for table commande
--

INSERT INTO commande VALUES(1,'2018-07-03 14:00:00','2018-03-26 15:39:00',44);
INSERT INTO commande VALUES(2,'2018-07-29 16:30:00','2018-03-26 15:41:00',44);
INSERT INTO commande VALUES(3,'2018-08-15 09:00:00','2018-03-26 15:42:00',44);

--
-- Dumping data for table producteur
--

INSERT INTO producteur VALUES(1,'2018-03-26',45);
INSERT INTO producteur VALUES(2,'2018-02-01',46);

--
-- Dumping data for table lot
--

INSERT INTO lot VALUES(1,'lot n°1','lot de pomme',15,30,'2018-06-20','2018-03-26',1,2,1);
INSERT INTO lot VALUES(2,'lot n°2','lot de golden',50,150,'2018-05-29','2018-03-26',1,1,2);

--
-- Dumping data for table jourDansSemaine
--

INSERT INTO jourDansSemaine VALUES(1,'lundi');
INSERT INTO jourDansSemaine VALUES(2,'mardi');
INSERT INTO jourDansSemaine VALUES(3,'mercredi');
INSERT INTO jourDansSemaine VALUES(4,'jeudi');
INSERT INTO jourDansSemaine VALUES(5,'vendredi');
INSERT INTO jourDansSemaine VALUES(6,'samedi');
INSERT INTO jourDansSemaine VALUES(7,'dimanche');

--
-- Dumping data for table pointDeVente
--

INSERT INTO pointDeVente VALUES(1,'12 rue du saint','05000','Gap','vegies&co','44.560640','6.076315');

--
-- Dumping data for table ouverture
--

INSERT INTO ouverture VALUES(1,1,'09:00:00','12:00:00','14:00:00','18:00:00');
INSERT INTO ouverture VALUES(1,2,'09:00:00','12:00:00','14:00:00','18:00:00');

--
-- Dumping data for table listeParPDV
--

INSERT INTO listeParPDV VALUES(1,'les pommes golden',45,1,2);

--
-- Dumping data for table ligneDeCde
--

INSERT INTO ligneDeCde VALUES(4,2,1,'en préparation',2);

--
-- Dumping data for table gerant
--

INSERT INTO gerant VALUES(1,9);

--
-- Dumping data for table livraison
--

INSERT INTO livraison VALUES(1,'2018-04-09 15:39:00',1,1);
INSERT INTO livraison VALUES(2,'2018-04-09 18:00:00',2,1);
--
-- Dumping data for table Employe
--

INSERT INTO Employe VALUES(1,"k","k","kevin","courtial");

--