<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = "user.UserDAO" %>
<%@ page import = "java.io.PrintWriter" %>
<% request.setCharacterEncoding("UTF-8"); %>
 
<jsp:useBean id="user" class="user.User" scope="page"></jsp:useBean>
<jsp:setProperty name="user" property="userID"/>
<jsp:setProperty name="user" property="userPassword"/>
<jsp:setProperty name="user" property="userName"/>
<jsp:setProperty name="user" property="userMajor"/>
<jsp:setProperty name="user" property="userEmail"/>
<jsp:setProperty name="user" property="userAge"/>
 
<head>
<meta http-equiv="Content-Type" content="text/html; c harset=UTF-8">
<title>회원가입 확인</title>
</head>
<body>
    <%
	    String userID = null;
		if (session.getAttribute("userID") != null){
	        userID = (String) session.getAttribute("userID");
		}
		if (userID != null){
	        PrintWriter script = response.getWriter();
	        script.println("<script>");
	        script.println("alert('이미 로그인되었습니다.')");
	        script.println("location.href = 'home.jsp'");    // 메인 페이지로 이동
	        script.println("</script>");
		}
    	if (user.getUserID() == null || user.getUserPassword() == null || user.getUserName() == null // 만약에 6개중 하나라도 값이 없을경우 실행
    		|| user.getUserMajor() == null || user.getUserEmail() == null || user.getUserAge() == null){ 
    		PrintWriter script = response.getWriter();              
            script.println("<script>");
            script.println("alert('모든 문항을 입력해주세요.')");
            script.println("history.back()");    // 이전 페이지로 이동 
            script.println("</script>");
    	}else{
    		UserDAO userDAO = new UserDAO();
            int result = userDAO.join(user);
            if (result == -1){ // 회원가입 실패 
                PrintWriter script = response.getWriter();
                script.println("<script>");
                script.println("alert('이미 존재하는 아이디입니다.')");
                script.println("history.back()");    // 이전 페이지로 이동 
                script.println("</script>");
            }else{ // 회원가입 성공
                PrintWriter script = response.getWriter();
                script.println("<script>");
                script.println("alert('회원가입이 완료되었습니다.')");
                script.println("location.href = 'login.jsp'");    // 로그인 창으로 이동 
                script.println("</script>");
            }
    	}
    %>
 
</body>
</html>