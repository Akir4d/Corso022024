<?php
if (isset($_POST['Submit'])){
	$username = $_POST['username'];
	$password = $_POST['password'];

	$vuser = "admin2";
	$vpass = "napoli123";
	$stat = "";

	if ($username == $vuser && $password == $vpass) {
		header("Location: benvenuto.php");
		exit();
	} else {
		$stat = " - Username o Password errati";
	}
}
?>
<!DOCTYPE html>
<html>
<head>
    <title>Login</title>
</head>
<body>
    <h1>Login <?=$stat?></h1>
    <form method="POST">
	<input name="username" placeholder="Username">
	<input type="password" name="password" placeholder="Password">
	<input type="submit" name="Submit" value="Submit">
    </form>
</body>
</html>
