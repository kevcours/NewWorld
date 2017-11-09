<!doctype html>
<html>
<head>
<meta charset="utf-8">
<link rel="stylesheet" type="text/css" href="NewWorld.css">
<title>New World</title>
</head>
<body>
	<?php include "head.php" ?>
	<?php include "menu.php" ?>
<div class="insc">
	<?php
			$link=mysqli_connect('localhost', "kevinc", "ini01", "newworld");

			if(!$link){
				die('connexion impossible');

			}
	?>
	<p>
	<?php
		$prenom=$_POST['prenom'];
		$nom=$_POST['nom'];
		$mail=$_POST['user_mail'];
		$pass=$_POST['user_password'];
		$tel=$_POST['user_tel'];

		if($_POST['user_password'] != $_POST['confuser_password']){
			?>
			<p>Les deux mots de passe doivent etre identique</p>;
			<?
		}
			$sql="INSERT INTO user( NomUser , NFamilleUser , Adresse , Passwd , Tel)
				VALUES($prenom,$nom,$mail,$pass,$tel)";	
				if (mysqli_query($sql)) {?>
	    			 <p>Vous etes bien Enregistré</p>;
	    		<?
				} else {
				?>
	    			<p>Error: </p>;
	    		<?
				}

	?>
	</p>
</div>

<?php include "bas.php" ?>
</body>
</html>
