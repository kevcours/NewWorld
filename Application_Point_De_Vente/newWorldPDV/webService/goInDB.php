<?php

session_start();
$host='localhost';
$user='pvergniez';
$pass='ini01';
$nomBase='newWorld';
/*
	base pour le ssh
	$nomBase='dbvergniez';
*/
if(mysql_connect($host,$user,$pass))
	var_dump('bien joué');
else
	var_dump('encore raté');

mysql_select_db($nomBase);
$base_url="http://172.16.63.116/~pvergniez/";
$base=mysqli_connect($host,$user,$pass,$nomBase);
//mysql_query($base,"");

?>