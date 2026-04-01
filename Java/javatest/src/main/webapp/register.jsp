<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html lang='ko'>

<head>
	<meta charset="UTF-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=device-width,
	initial-scale=1.0">
	<title>회원가입</title>
	<link rel="stylesheet" href="css/register.css">
	<link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
</head>

<body>

	<div class="wrapper">
		<form action="join_ok.jsp">
			<h1>회원가입</h1>
			
			<div class="input-box">
				<input type="text" name="userID" placeholder="아이디" required>
				<i class='bx bxs-user'></i>
			</div>
			<div class="input-box">
				<input type="password" name="userPassword" placeholder="비밀번호" required>
				<i class='bx bxs-lock-alt'></i>
			</div>
			<div class="input-box">
				<input type="text" name="userName" placeholder="이름" required>
				<i class='bx bxs-user'></i>
			</div>
			<div class="input-box">
				<input type="text" name="userMajor" placeholder="전공" required>
				<i class='bx bxs-id-card'></i>
			</div>
			<div class="input-box">
				<input type="text" name="userEmail" placeholder="이메일" required>
				<i class='bx bx-envelope'></i>
			</div>
			<div class="input-box">
				<input type="text" name="userAge" maxlength="10" placeholder="생년월일 8자리" required>
				<i class='bx bxs-calendar'></i>
			</div>
			
			<button type="submit" class="btn">회원가입</button>
		</forrm>
	</div>
</body>
</html>
