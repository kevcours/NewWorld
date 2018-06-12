<?php

include("goInDB.php");

$resultat=array();
$req="SELECT idUser, nom, prenom FROM utilisateur INNER JOIN role ON utilisateur.idRole =role.idRole WHERE role.idRole=4";
$res=mysqli_query($base,$req);
while($tabInfo=mysqli_fetch_assoc($res))
{
	$resultat[]=$tabInfo;
}
echo json_encode($resultat);

?>