function inscription()
{
	var connection=document.getElementById("connecter");
	var inscription=document.getElementById("inscription");
	var leCodeHtmlDeInscription =$(inscription).html();
	$(connection).html(leCodeHtmlDeInscription);
}