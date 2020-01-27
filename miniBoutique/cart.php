<?PHP
	require("./include/include.php");
	if ($_GET['action']) {
		if ($_GET['action'] =="vider") {
			$_SESSION['cart'] = null;
		}
		if ($_GET['action'] == "add" && $_GET['uuid'] && $_GET['quantity']) {
			$sql = "SELECT uuid, name, img, price, stock FROM articles WHERE uuid='".$_GET['uuid'] . "'";
			$result = mysqli_query($connect, $sql);
			if ($result !== false && mysqli_num_rows($result) > 0) {
				$result = mysqli_fetch_assoc($result);
				$result['quantity'] = $_GET['quantity'];
				if ($_SESSION['cart'] == null)
					$_SESSION['cart'] = array();
				$compteur = 0;
				foreach ($_SESSION['cart'] as $key => $value) {
					$compteur = $compteur + 1;
					if ($value['uuid'] === $result['uuid']) {
						if (($value['quantity'] + $_GET['quantity']) <= $value['stock']) {
							$_SESSION['cart'][$compteur - 1]['quantity'] = $_SESSION['cart'][$compteur - 1]['quantity'] + $_GET['quantity'];
						}
						header('Location: ' . $_SESSION['current']);
						return ;
					}
				}
				array_push($_SESSION['cart'], $result);
				header('Location: ' . $_SESSION['current']);
				return ;
			}
			else {
				header('Location: ' . $_SESSION['current']);
				return ;
			}
		}
		else if ($_GET['action'] == "set_quantity" && $_GET['uuid']) {
			if ($_GET['quantity'] == "0") {
				$i = 0;
				$found = false;
				foreach($_SESSION['cart'] as $key => $value) {
					if ($_GET['uuid'] == $value['uuid']) {
						$found = true;
						break ;
					}
					$i++;
				}
				if ($found) {
					unset($_SESSION['cart'][$i]);
					$_SESSION['cart'] = array_values($_SESSION['cart']);
					header('Location: ' . $_SESSION['current'] . "?return=success");
				}
				else {
					header('Location: ' . $_SESSION['current'] . "?return=error");
				}
				return ;
			}
			else {
				$i = 0;
				$found = false;
				foreach($_SESSION['cart'] as $key => $value) {
					if ($_GET['uuid'] == $value['uuid']) {
						if ($value['stock'] < $_GET['quantity']) {
							break ;
						}
						$found = true;
						break ;
					}
					$i++;
				}
				if ($found) {
					$_SESSION['cart'][$i]['quantity'] = $_GET['quantity'];
					header('Location: ' . $_SESSION['current'] . "?return=success");
					return ;
				} else {
					header('Location: ' . $_SESSION['current'] . "?return=error");
				}
				return ;
			}
		}
	}

	require("./header.php");
	$_SESSION['current'] = "cart.php";
?>
<div id="body">
	<div id="title">Panier</div>
	<?php
		if (count($_SESSION['cart']) > 0) {
			$price = 0;
		foreach ($_SESSION['cart'] as $key => $value) {
	?>
		<div class="box">
			<div class="left">
				<img class="img" src="<?php echo "img/".$value['img']; ?>" />
			</div>
			<div class="right">
				<div class="name"><?php echo htmlspecialchars($value['name']); ?></div>
				<div class="price">
					Prix : <span><?php echo htmlspecialchars($value['price']); ?> &euro;</span>
				</div>
				<div class="cart_stock">
					<a href="cart.php?action=set_quantity&uuid=<?php echo $value['uuid'] ?>&quantity=<?php echo ($value['quantity'] - 1); ?>" />
						<div class="less">-</div>
					</a>
					<div class="cart_val">
						<?php echo $value['quantity']; ?>
					</div>
					<a href="cart.php?action=set_quantity&uuid=<?php echo $value['uuid']; ?>&quantity=<?php echo ($value['quantity'] + 1); ?>">
						<div class="more">+</div>
					</a>
					<?php $price = $price + ($value['price'] * $value['quantity']); ?>
				</div>
			</div>
		</div>
		<div class="clear"></div>
	<?php
		}
	?>
		<div class="total">
			<?php echo $price; ?> &euro;
		</div>
		<a href="commande.php"><div class="cart_buy">Valider la commande</div></a>
		<a href="cart.php?action=vider"><div class="cart_empty">Vider le panier</div></a>
	<?php
	}
	else {
		echo "<center>Vous n'avez aucun article dans votre panier.</center>";
	}
	?>
</div>
<?php
	include 'footer.php';
?>
