

function initMap() {
        var uluru = {lat: 3.139003, lng: 101.68685499999992};
        var map = new google.maps.Map(document.getElementById('map'), {
          zoom: 10,
          center: uluru
        });
        var marker = new google.maps.Marker({
          position: uluru,
          map: map
        });
      }







<p id="demo"></p>

<script>
var directerName1 = "Dr RUBAITE RUKHSANA";
var directerName2 = 'Dr.WAHEEDA OSMANI';
var directerName3 = "Dr. TABASSUM TAHERA";

document.getElementById("demo").innerHTML =
directerName1 + "<br>" + 
directerName2 + "<br>" + 
directerName3 + "<br>" ;
</script>
   