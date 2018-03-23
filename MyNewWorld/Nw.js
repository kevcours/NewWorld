/*$("#adress").on('input',function()
{
	var adresse=document.getElementById("adress").value;
	var nbCarac=adresse.length;
	var resultat;
		if (nbCarac>=10)
	{

		alert(adresse);
		$.ajax(
		{
			url: 'https://api-adresse.data.gouv.fr/search/?limite=5',
			type: 'GET',
			data: { q: request.term },
			dataType: 'json',
			 success : function(code_json){
			 	resultat=code_json;
			 	
       		}
		});
	}

});*/



//auto complément de l'adresse ville et code postal
	$("#adress").autocomplete({
	source: function (request, response) {
		$.ajax({
			url: "https://api-adresse.data.gouv.fr/search/?limit=5",
			data: { q: request.term },
			dataType: "json",
			success: function (data) {
				response($.map(data.features, function (item) {
					return { label: item.properties.label, postcode: item.properties.postcode,city: item.properties.city, value: item.properties.label, street: item.properties.street, name: item.properties.name, latitude: item.geometry.coordinates[1],longitude: item.geometry.coordinates[0]};
				}));
			}
		});
	},
	select: function(event, ui) {
		$('#cp').val(ui.item.postcode);
		$('#ville').val(ui.item.city);
		if(ui.item.street)
		$('#rue').val(ui.item.street);
	    else
		$('#rue').val(ui.item.name);
	    $("#latitude").val(ui.item.latitude);
	    $("#longitude").val(ui.item.longitude);
	}
});