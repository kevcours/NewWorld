<?
			include "head.php";
?>
			<div class="corps">                	
    <div style="background color: red;  float: left; margin-left: 1%; width: 48%; margin-right: 1% ">

                   
<!--Carousel Wrapper-->
<div id="carousel-example-1z" class="carousel slide carousel-fade" data-ride="carousel" style="height: 500px">
    <!--Indicators-->
    <ol class="carousel-indicators">
        <li data-target="#carousel-example-1z" data-slide-to="0" class="active">Bienvenue</li>
        <li data-target="#carousel-example-1z" data-slide-to="1"></li>
        <li data-target="#carousel-example-1z" data-slide-to="2"></li>
    </ol>
    <!--/.Indicators-->
    <!--Slides-->
    <div class="carousel-inner" role="listbox">
        <!--First slide-->
        <div class="carousel-item active">
            <div class="carousel-caption">
                <h3 style=" color: black; font-size: 300%"><strong>Bienvenue sur le site de New World!</strong></h3><h4 style="margin-bottom: 60%; color:black">Site de redistribution de produit entre Producteur et particulier</h4>
            </div>
            <img class="d-block w-100" height="585" src="./image/backgroung.jpg" alt="First slide">
           
        </div>
        <!--/First slide-->
        <!--Second slide-->
        <div class="carousel-item">
            <div class="carousel-caption">
                <h4 style="margin-bottom: 60%; color: black; font-size: 300%">De nombreux produits frais de votre region a portée de mains!</h4>
            </div>
            <img class="d-block w-100"  height="585" src="./image/fruit.jpg" alt="Second slide">
        </div>
        <!--/Second slide-->
        <!--Third slide-->
        <div class="carousel-item">
            <div class="carousel-caption">
                <h4 style="margin-bottom: 4 0%;margin-left: 50%; color: black; font-size: 300%">Avec de nombreux producteurs pour vous servir !</h4>
            </div>
            <img class="d-block w-100"  height="585" src="./image/papy.jpg" alt="Third slide">
        </div>
        <!--/Third slide-->
    </div>
    <!--/.Slides-->
    <!--Controls-->
    <a class="carousel-control-prev" href="#carousel-example-1z" role="button" data-slide="prev">
        <span class="carousel-control-prev-icon" aria-hidden="true"></span>
        <span class="sr-only">Previous</span>
    </a>
    <a class="carousel-control-next" href="#carousel-example-1z" role="button" data-slide="next">
        <span class="carousel-control-next-icon" aria-hidden="true"></span>
        <span class="sr-only">Next</span>
    </a>
    <!--/.Controls-->
</div>
<!--/.Carousel Wrapper-->
                         

    </div>
                    
           
                
        <section class="form-elegant" ">

                    <!--Form without header-->
            <div class="card" style="width: 49%; height: 585px; margin-top: 1%; margin-left: 1%; margin-right: 1%"  style="float: left">
                   
            <div id="formContact">

        <!-- Form contact -->
        <form method="GET" action="contact.php">
        <br>
            <p class="h5 text-center mb-4">Nous Contacter !</p>

            <div class="md-form">
                <i class="fa fa-envelope prefix grey-text"></i>
                <input type="email" id="form2" name="email" class="form-control">
                <label for="form2">Votre email: </label>
            </div>
            <br>
            <div class="md-form">
                <i class="fa fa-tag prefix grey-text"></i>
                <input type="text" id="form32" name="sujet" class="form-control">
                <label for="form34">Sujet: </label>
            </div>
            <br>

            <div class="md-form">
                <i class="fa fa-pencil prefix grey-text"></i>
                <textarea type="text" id="form8" name="message" class="md-textarea" style="height: 100px"></textarea>
                <label for="form8">Votre message: </label>
            </div>
            <br><br>
            <div class="text-center">
                <input type="submit" class="btn btn-unique" name="envoyer" value="Envoyer" >
            </div>

        </form>
        <?
            if (isset($_GET["envoyer"])) 
            {
                if ((empty($_GET["email"])) or (empty($_GET["sujet"])) or (empty($_GET["message"])))
                {
                ?>
    				<p style="margin-left: 10%; color:red; font-size: 120%">Erreur , Champ(s) incomplet(s)</p>
                <?

                }
                else
                {	
                	$header="FROM: ".$_GET["email"];
                	$mail="kevin05000@outlook.fr";
                	$sujet=$_GET["sujet"];
                	$message=$_GET["message"];
                	if(mail($mail,$sujet,$message,$header))
                	{
                		?>
                		<p style="margin-left: 10%; color:red; font-size: 120%">Email bien envoyer</p>
                		<?
                	}
                	else
                	{
                		?>
                		<p style="margin-left: 10%; color:red; font-size: 120%">Erreur lors de l'envoie</p>
                		<?
                	}


                }
                
            }
                
        ?>
        <!-- Form contact -->
            
    </div>
              
            </div>
                    
                       
        </section>
<?
	include "bas.php";

?>