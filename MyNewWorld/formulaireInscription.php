<?
include "head.php";
?>

<div style="background-color: white; margin-top: 1%; margin-bottom: 1%; width: 98%;margin-left: 1%" id="inscription" >
<!-- Form register -->
<form  ">
    <p class="h5 text-center mb-4" style="font-size: 200%"><i>Inscription</i></p>

    <div class="md-form">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="text" id="name" style=" width: 90%">
        <label for="name">Nom: </label>
    </div>
    <div class="md-form">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="text" id="surname" style=" width: 90%" >
        <label for="surname">Prenom: </label>
    </div>
    <div class="md-form">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="date" id="birthdate" style=" width: 90%" >
        <label for="birthdate">Date de naissance: </label>
    </div>
    <div class="md-form">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="text" id="adress" datalist="datalistAdresse" value="" required style=" width: 90%">
        <label for="adress">Adresse: </label>
    </div>
    <div class="md-form">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="text" id="cp" style=" width: 90%" >
        <label for="cp">Code Postal: </label>
    </div>
      <div class="md-form">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="text" id="rue" style=" width: 90%" >
        <label for="rue">Rue: </label>
    </div>
    <div class="md-form">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="text" id="ville" style=" width: 90%" >
        <label for="ville">Ville: </label>
    </div>
    <div class="md-form" style="display: none">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="text" id="latitude" style=" width: 90%" >
        <label for="latitude">Latitude: </label>
    </div>
    <div class="md-form" style="display: none">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="text" id="longitude" style=" width: 90%" >
        <label for="longitude">Longitude: </label>
    </div>
    <div class="md-form">
        <i class="fa fa-envelope prefix grey-text"></i>
        <input type="text" id="mail" style=" width: 90%" >
        <label for="mail">Mail: </label>
    </div>

    <div class="md-form">
        <i class="fa fa-lock prefix grey-text"></i>
        <input type="password" id="mdp" style=" width: 90%" >
        <label for="mdp">Mot de passe: </label>
    </div>
    <div class="md-form">
        <i class="fa fa-user prefix grey-text"></i>
        <input type="text" id="confMdp" style=" width: 90%" >
        <label for="confMdp">Confirmer Mot de passe: </label>
    </div>
    


    <div class="text-center">
        <button class="btn btn-deep-orange indigo">S'inscrire</button>
    </div>

</form>
<!-- Form register -->
</div>




<?
include "bas.php";
?>