<?php
session_start();
?>
<!doctype html>
<html>
	<head>
		<meta charset="utf-8">
		<!--<link rel="stylesheet" type="text/css" href="NewWorld.css">-->
		<link rel="stylesheet" type="text/css" href="bootstrap/MDBFree/css/mdb.css">
		<link rel="stylesheet" type="text/css" href="bootstrap/MDBFree/css/bootstrap.css">
		<title>New World</title>

	</head>
	<body class="indigo">
	<div class="haut">

<!-- Image and text -->
		<nav class="navbar navbar-indigo indigo">
    		<a class="navbar-brand" style="color:white;" href="index.php">
        		<img src="./image/logo.jpeg" height="30" class="d-inline-block align-top" alt="">
        New World
    		</a>
    		<div class="btn-group">
    			<button class="btn btn-primary dropdown-toggle" type="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">Langue/langage
    			</button>
					<div class="dropdown-menu">
        				<a class="dropdown-item" href="#">Français</a>
        				<a class="dropdown-item" href="#">English</a>
    				</div>
			</div>
                

	
	</div>
	<?php
		include("menu.php");
	?>
	