/**
*script newWorld
*@author Courtial Kevin
*08/12/17
*newWorld
*/

drop database if exists dbKCnw;
CREATE database dbKCnw;
use dbKCnw;
-- --------------------------------------------------------

--
-- Table structure for table employer--
--

CREATE TABLE Employe (
  employeId int(11) NOT NULL,
  employeLogin varchar(25) DEFAULT NULL,
  employeMdp varchar(25) DEFAULT NULL,
  employeNom varchar(25) DEFAULT NULL,
  employePrenom varchar(25) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table commande--
--

CREATE TABLE commande (
  idCommande int(11) NOT NULL,
  dateHeureLivraisonPrevuee datetime DEFAULT NULL,
  dateCreation datetime DEFAULT NULL,
  idUser int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table control
--

CREATE TABLE control (
  idControl int(11) NOT NULL,
  dateControl datetime DEFAULT NULL,
  idTesteur int(11) NOT NULL DEFAULT '0',
  idProducteur int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table gerant
--

CREATE TABLE gerant (
  idPoint int(11) NOT NULL DEFAULT '0',
  idUser int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table jourDansSemaine
--

CREATE TABLE jourDansSemaine (
  idJour int(11) NOT NULL,
  nomJour varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table ligneDeCde
--

CREATE TABLE ligneDeCde (
  quantiteCommandee int DEFAULT NULL,
  livreeParProducteur tinyint(1) DEFAULT NULL,
  idListeParPDV int(11) NOT NULL DEFAULT '0',
  etatLDC ENUM('en préparation','livraison en cours','au point de vente','annulée','recupéré'),
  idLot int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table listeParPDV
--

CREATE TABLE listeParPDV (
  idListeParPDV int(11) NOT NULL,
  libellelisteParPDV varchar(25) DEFAULT NULL,
  retireeParClient int(11) DEFAULT NULL,
  idPoint int(11) NOT NULL DEFAULT '0',
  idCommande int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table livraison
--

CREATE TABLE livraison (
  idLivraison int(11) NOT NULL,
  dateLivraison datetime DEFAULT NULL,
  idProducteur int(11) NOT NULL DEFAULT '0',
  idPoint int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table lot--
--

CREATE TABLE lot (
  idLot int(11) NOT NULL,
  nomLot varchar(25) DEFAULT NULL,
  descLot varchar(100) DEFAULT NULL,
  prix float DEFAULT NULL,
  quantite int(11) DEFAULT NULL,
  dateLimite date DEFAULT NULL,
  dateRecolte date DEFAULT NULL,
  idUnite int(11) NOT NULL DEFAULT '0',
  idVariete int(11) NOT NULL DEFAULT '0',
  idProducteur int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table modeProduction--
--

CREATE TABLE modeProduction (
  idProduction int(11) NOT NULL,
  ModeProduction varchar(25) DEFAULT NULL,
  descModeProduction varchar(200) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;


-- --------------------------------------------------------

--
-- Table structure for table ouverture
--

CREATE TABLE ouverture (
  idPoint int(11) NOT NULL,
  idJour int(11) NOT NULL,
  heureOuvertureMatin time DEFAULT NULL,
  heureFermetureMatin time DEFAULT NULL,
  heureOuvertureApresMidi time DEFAULT NULL,
  heureFermetureApresMidi time DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table parametre--
--

CREATE TABLE parametre (
  idParametre int(11) NOT NULL,
  libelleParametre varchar(30) COLLATE utf8_unicode_ci NOT NULL,
  valueParametre varchar(50) COLLATE utf8_unicode_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;


-- --------------------------------------------------------

--
-- Table structure for table parcelles
--

CREATE TABLE parcelles (
  idParcelle int(11) NOT NULL,
  commune varchar(25) DEFAULT NULL,
  latitude varchar(50) DEFAULT NULL,
  photoParcelle varchar(80) DEFAULT NULL,
  longitude varchar(50) DEFAULT NULL,
  idProducteur int(11) NOT NULL DEFAULT '0',
  idProduction int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table pointDeVente
--

CREATE TABLE pointDeVente (
  idPoint int(11) NOT NULL,
  ruePoint varchar(25) DEFAULT NULL,
  cpPoint varchar(5) DEFAULT NULL,
  villePoint varchar(25) DEFAULT NULL,
  nomPoint varchar(20) DEFAULT NULL,
  latitude varchar(50) DEFAULT NULL,
  longitude varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table producteur--
--

CREATE TABLE producteur (
  idProducteur int(11) NOT NULL,
  derniereVerif date DEFAULT NULL,
  idUser int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table produit--
--

CREATE TABLE produit (
  idProduit int(11) NOT NULL,
  libelleProduit varchar(20) DEFAULT NULL,
  photoProduit varchar(20) DEFAULT NULL,
  accept boolean DEFAULT '0',
  descProduit varchar(200) DEFAULT NULL,
  idRayon int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table proposerA
--

CREATE TABLE proposerA (
  idLot int(11) NOT NULL DEFAULT '0',
  idPoint int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table question--
--

CREATE TABLE question (
  idQuestion int(11) NOT NULL,
  libelleQuestion varchar(25) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table questRep
--

CREATE TABLE questRep (
  reponse varchar(200) DEFAULT NULL,
  idUser int(11) NOT NULL DEFAULT '0',
  idQuestion int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table rayon--
--

CREATE TABLE rayon (
  idRayon int(11) NOT NULL,
  libelleRayon varchar(25) DEFAULT NULL,
  photo varchar(80) DEFAULT NULL,
  accept boolean DEFAULT '0',
  DescRayon varchar(200) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table role--
--

CREATE TABLE role (
  idRole int(11) NOT NULL,
  libelleRole varchar(25) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table testeur
--

CREATE TABLE testeur (
  idTesteur int(11) NOT NULL,
  idUser int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table unite--
--

CREATE TABLE unite (
  idUnite int(11) NOT NULL,
  libelleUnite varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table utilisateur--
--

CREATE TABLE utilisateur (
  idUser int(11) NOT NULL,
  prenom varchar(25) DEFAULT NULL,
  nom varchar(25) DEFAULT NULL,
  dateIns timestamp NULL DEFAULT CURRENT_TIMESTAMP,
  email varchar(50) DEFAULT NULL,
  password varchar(60) DEFAULT NULL,
  etatIns tinyint(1) DEFAULT NULL,
  ipUser varchar(25) DEFAULT NULL,
  nbConnect int(11) DEFAULT NULL,
  rue varchar(25) DEFAULT NULL,
  ville varchar(25) DEFAULT NULL,
  cp varchar(25) DEFAULT NULL,
  tel varchar(10) DEFAULT NULL,
  photoUser varchar(80) DEFAULT NULL,
  descUser int(11) DEFAULT NULL,
  dateNaissance varchar(25) DEFAULT NULL,
  validationCompte int(11) DEFAULT NULL,
  compteFacebook varchar(80) DEFAULT NULL,
  compteGoogle varchar(80) DEFAULT NULL,
  compteInstagram varchar(80) DEFAULT NULL,
  compteTweeter varchar(80) DEFAULT NULL,
  latitude varchar(50) DEFAULT NULL,
  longitude varchar(50) DEFAULT NULL,
  idRole int(11) DEFAULT NULL,
  confirmKey varchar(50) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table vacance
--

CREATE TABLE vacance (
  idVacance int(11) NOT NULL,
  dateDebut datetime DEFAULT NULL,
  dateFin datetime DEFAULT NULL,
  idPoint int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- --------------------------------------------------------

--
-- Table structure for table variete--
--

CREATE TABLE variete (
  idVariete int(11) NOT NULL,
  libelleVariete varchar(25) DEFAULT NULL,
  descVariete varchar(500) DEFAULT NULL,
  accept boolean DEFAULT '0',
  photo varchar(80) DEFAULT NULL,
  puVariete float DEFAULT NULL,
  idProduit int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Indexes for dumped tables
--

--
-- Indexes for table commande
--
ALTER TABLE commande
  ADD PRIMARY KEY (idCommande),
  ADD KEY idUser (idUser);

--
-- Indexes for table control
--
ALTER TABLE control
  ADD PRIMARY KEY (idControl),
  ADD KEY idTesteur (idTesteur),
  ADD KEY idProducteur (idProducteur);

--
-- Indexes for table employer
--
ALTER TABLE employer
  ADD PRIMARY KEY (idEmployer);

--
-- Indexes for table gerant
--
ALTER TABLE gerant
  ADD PRIMARY KEY (idPoint,idUser),
  ADD KEY idUser (idUser);

--
-- Indexes for table jourDansSemaine
--
ALTER TABLE jourDansSemaine
  ADD PRIMARY KEY (idJour);

--
-- Indexes for table ligneDeCde
--
ALTER TABLE ligneDeCde
  ADD PRIMARY KEY (idListeParPDV,idLot),
  ADD KEY idLot (idLot);

--
-- Indexes for table listeParPDV
--
ALTER TABLE listeParPDV
  ADD PRIMARY KEY (idListeParPDV),
  ADD KEY idPoint (idPoint),
  ADD KEY idCommande (idCommande);

--
-- Indexes for table livraison
--
ALTER TABLE livraison
  ADD PRIMARY KEY (idLivraison),
  ADD KEY idProducteur (idProducteur),
  ADD KEY idPoint (idPoint);

--
-- Indexes for table lot
--
ALTER TABLE lot
  ADD PRIMARY KEY (idLot),
  ADD KEY idUnite (idUnite),
  ADD KEY idVariete (idVariete),
  ADD KEY idProducteur (idProducteur);

--
-- Indexes for table modeProduction
--
ALTER TABLE modeProduction
  ADD PRIMARY KEY (idProduction);

--
-- Indexes for table ouverture
--
ALTER TABLE ouverture
  ADD PRIMARY KEY (idPoint,idJour);

--
-- Indexes for table parametre
--
ALTER TABLE parametre
  ADD PRIMARY KEY (idParametre);

--
-- Indexes for table parcelles
--
ALTER TABLE parcelles
  ADD PRIMARY KEY (idParcelle),
  ADD KEY idProducteur (idProducteur),
  ADD KEY idProduction (idProduction);

--
-- Indexes for table pointDeVente
--
ALTER TABLE pointDeVente
  ADD PRIMARY KEY (idPoint);

--
-- Indexes for table producteur
--
ALTER TABLE producteur
  ADD PRIMARY KEY (idProducteur),
  ADD KEY idUser (idUser);

--
-- Indexes for table produit
--
ALTER TABLE produit
  ADD PRIMARY KEY (idProduit),
  ADD KEY idRayon (idRayon);

--
-- Indexes for table proposerA
--
ALTER TABLE proposerA
  ADD PRIMARY KEY (idLot,idPoint),
  ADD KEY idPoint (idPoint);

--
-- Indexes for table question
--
ALTER TABLE question
  ADD PRIMARY KEY (idQuestion);

--
-- Indexes for table questRep
--
ALTER TABLE questRep
  ADD PRIMARY KEY (idUser,idQuestion),
  ADD KEY idQuestion (idQuestion);

--
-- Indexes for table rayon
--
ALTER TABLE rayon
  ADD PRIMARY KEY (idRayon);

--
-- Indexes for table role
--
ALTER TABLE role
  ADD PRIMARY KEY (idRole);

--
-- Indexes for table testeur
--
ALTER TABLE testeur
  ADD PRIMARY KEY (idTesteur),
  ADD KEY idUser (idUser);

--
-- Indexes for table unite
--
ALTER TABLE unite
  ADD PRIMARY KEY (idUnite);

--
-- Indexes for table utilisateur
--
ALTER TABLE utilisateur
  ADD PRIMARY KEY (idUser),
  ADD KEY idRole (idRole);

--
-- Indexes for table vacance
--
ALTER TABLE vacance
  ADD PRIMARY KEY (idVacance),
  ADD KEY idPoint (idPoint);

--
-- Indexes for table variete
--
ALTER TABLE variete
  ADD PRIMARY KEY (idVariete),
  ADD KEY idProduit (idProduit);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table commande
--
ALTER TABLE commande
  MODIFY idCommande int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table control
--
ALTER TABLE control
  MODIFY idControl int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table employer
--
ALTER TABLE employer
  MODIFY idEmployer int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT for table jourDansSemaine
--
ALTER TABLE jourDansSemaine
  MODIFY idJour int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table listeParPDV
--
ALTER TABLE listeParPDV
  MODIFY idListeParPDV int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table livraison
--
ALTER TABLE livraison
  MODIFY idLivraison int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table lot
--
ALTER TABLE lot
  MODIFY idLot int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table modeProduction
--
ALTER TABLE modeProduction
  MODIFY idProduction int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT for table parametre
--
ALTER TABLE parametre
  MODIFY idParametre int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table parcelles
--
ALTER TABLE parcelles
  MODIFY idParcelle int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table pointDeVente
--
ALTER TABLE pointDeVente
  MODIFY idPoint int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table producteur
--
ALTER TABLE producteur
  MODIFY idProducteur int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table produit
--
ALTER TABLE produit
  MODIFY idProduit int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table question
--
ALTER TABLE question
  MODIFY idQuestion int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;

--
-- AUTO_INCREMENT for table rayon
--
ALTER TABLE rayon
  MODIFY idRayon int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table role
--
ALTER TABLE role
  MODIFY idRole int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT for table testeur
--
ALTER TABLE testeur
  MODIFY idTesteur int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table unite
--
ALTER TABLE unite
  MODIFY idUnite int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT for table utilisateur
--
ALTER TABLE utilisateur
  MODIFY idUser int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=46;

--
-- AUTO_INCREMENT for table vacance
--
ALTER TABLE vacance
  MODIFY idVacance int(11) NOT NULL AUTO_INCREMENT;

--
-- AUTO_INCREMENT for table variete
--
ALTER TABLE variete
  MODIFY idVariete int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- Constraints for dumped tables
--


--
-- Constraints for table produit
--
ALTER TABLE produit
  ADD FOREIGN KEY (idRayon) REFERENCES rayon (idRayon);

--
-- Constraints for table produit
--
ALTER TABLE variete
  ADD FOREIGN KEY (idProduit) REFERENCES produit (idProduit);

--
-- Constraints for table commande
--
ALTER TABLE commande
  ADD FOREIGN KEY (idUser) REFERENCES utilisateur (idUser);

--
-- Constraints for table control
--
ALTER TABLE control
  ADD FOREIGN KEY (idTesteur) REFERENCES testeur (idTesteur),
  ADD FOREIGN KEY (idProducteur) REFERENCES producteur (idProducteur);

--
-- Constraints for table gerant
--
ALTER TABLE gerant
  ADD FOREIGN KEY (idPoint) REFERENCES pointDeVente (idPoint),
  ADD FOREIGN KEY (idUser) REFERENCES utilisateur (idUser);

--
-- Constraints for table ligneDeCde
--
ALTER TABLE ligneDeCde
  ADD FOREIGN KEY (idListeParPDV) REFERENCES listeParPDV (idlisteParPDV),
  ADD FOREIGN KEY (idLot) REFERENCES lot (idLot);

--
-- Constraints for table listeParPDV
--
ALTER TABLE listeParPDV
  ADD FOREIGN KEY (retireeParClient) REFERENCES utilisateur (idUser),
  ADD FOREIGN KEY (idPoint) REFERENCES pointDeVente (idPoint),
  ADD FOREIGN KEY (idCommande) REFERENCES commande (idCommande);

--
-- Constraints for table livraison
--
ALTER TABLE livraison
  ADD FOREIGN KEY (idProducteur) REFERENCES producteur (idProducteur),
  ADD FOREIGN KEY (idPoint) REFERENCES pointDeVente (idPoint);

--
-- Constraints for table ouverture
--
ALTER TABLE ouverture
  ADD FOREIGN KEY (idJour) REFERENCES jourDansSemaine (idJour),
  ADD FOREIGN KEY (idPoint) REFERENCES pointDeVente (idPoint);
COMMIT;
