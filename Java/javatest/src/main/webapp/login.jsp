<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html lang='ko'>

<head>
	<meta charset="UTF-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width,
	initial-scale=1.0">
	<title>로그인</title>
	<link rel="stylesheet" href="css/login.css">
	<link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
</head>

<body>

	<div class="wrapper">
		<form action="login_ok.jsp">
			<h1>로그인</h1>
			<div class="input-box">
				<input type="text" name="userID" placeholder="아이디" required>
				<i class='bx bxs-user'></i>
			</div>
			<div class="input-box">
				<input type="password" name="userPassword" placeholder="비밀번호" required>
				<i class='bx bxs-lock-alt'></i>
			</div>
			
			<button type="submit" class="btn">로그인</button>
			
			<div class="register-link">
				<p>계정이 없습니까? <a href="register.jsp">계정생성</a></p>
			</div>
		</forrm>
	</div>
	

</body>

</html>
