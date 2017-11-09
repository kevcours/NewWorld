<?php
session_start();
?>
<!doctype html>
<html>
	<head>
		<meta charset="utf-8">
		<link rel="stylesheet" type="text/css" href="NewWorld.css">
		<title>New World</title>
		<script type="text/javascript" src="Nw.js"></script>
	</head>
	<body>


	<?php include "head.php" ?>
	<?php include "menu.php" ?>
	<div class="corps">
	<?php include "bas.php" ?>

		<?php
			$link=mysqli_connect('localhost', "kevinc", "ini01", "newworld");

			if(!$link){
				die('connexion impossible');
			} 
		?>
		<p>
	<?php
			$req = mysqli_query($link,"select count(*) as nb, idUser, NomUser from user where Adresse='".$_POST['mail']."' and Passwd='".$_POST['paswd']."'");

			if ((!isset($_POST['mail'])) or (!isset($_POST['paswd']))){
				die ("Veuillez saisir toute les donnée demandé");
			}
			while($row = mysqli_fetch_assoc($req)){
			 	if($row['nb']==1){
					$_SESSION['id']=$row['idUser'];
					$_SESSION['nom']=$row['NomUser'];
					header("location:./");
			 	} else {
			 		echo "Echec connexion";
				}
			}
			?>
		</p>
	</div>


	<script type="text/javascript" src="Nw.js">
	</script>

	</body>
</html>
