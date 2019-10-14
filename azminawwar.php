<?php

$angka = $_POST['angka'];

{
    if($angka % 2 == 0)
        {echo "<b> $angka Adalah Bilangan Genap<br></b>";}
    else
        {echo "<b> $angka Adalah Bilangan Ganjil<br></b>";}
}

echo "<h3>Looping</h3>";

if($angka % 2 == 0)
    for ($angka; $angka <= 100; $angka++) {
        if($angka % 2 == 0)
           {echo "$angka , &nbsp";}
        else
           {echo "&nbsp";}
        }        
else
    for ($angka; $angka <= 100; $angka++) {
        if($angka % 2 != 0)
           {echo "$angka , &nbsp";}
        else
           {echo "&nbsp";}
         }   

echo '<br><a href="cari.html">kembali</a>';


?>

<html>
    <head>
    </head>
    <body bgcolor="aquamarine">
    </body>    
</html>
