<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="bbs.bbsDAO" %>
<%@ page import="bbs.bbs" %>
<%@ page import = "java.io.PrintWriter" %>
<% request.setCharacterEncoding("UTF-8"); %>

<!DOCTYPE html>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>DeleteAction Page</title>
</head>
<body>
    <%
    	String userID = null;
    	if (session.getAttribute("userID") != null){
            userID = (String) session.getAttribute("userID");
    	}
    	if (userID == null){
            PrintWriter script = response.getWriter();
            script.println("<script>");
            script.println("alert('로그인하세요.')");
            script.println("location.href = 'login.jsp'");    // 메인 페이지로 이동
            script.println("</script>");
    	}
    	int bbsID = 0;
    	if (request.getParameter("bbsID") != null){
    		bbsID = Integer.parseInt(request.getParameter("bbsID"));
    	}
    	if (bbsID == 0)
        {
            PrintWriter script = response.getWriter();
            script.println("<script>");
            script.println("alert('유효하지 않은 글입니다')");
            script.println("location.href = 'bbs.jsp'");
            script.println("</script>");
        }
        bbs bbs = new bbsDAO().getbbs(bbsID);
        if (!userID.equals(bbs.getuserID())){
        	PrintWriter script = response.getWriter();
            script.println("<script>");
            script.println("alert('권한이 없습니다.')");
            script.println("location.href = 'bbs.jsp'");
            script.println("</script>");
        }else{
    		
      		bbsDAO bbsDAO = new bbsDAO();
            int result = bbsDAO.delete(bbsID);
            if (result == -1){ // 글삭제 실패시
                PrintWriter script = response.getWriter();
                script.println("<script>");
                script.println("alert('글삭제에 실패했습니다.')");
                script.println("history.back()");    // 이전 페이지로 사용자를 보냄
                script.println("</script>");
            }else{ // 글삭제 성공시
              	PrintWriter script = response.getWriter();
                script.println("<script>");
                script.println("alert('글삭제에 성공하였습니다.')");
                script.println("location.href = 'post.jsp'");    // 메인 페이지로 이동
                script.println("</script>");    
            }
        }	
    %>
 
</body>
</html>