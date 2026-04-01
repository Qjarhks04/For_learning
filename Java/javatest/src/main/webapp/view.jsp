<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.io.PrintWriter" %>
<%@ page import="bbs.bbsDAO" %>
<%@ page import="bbs.bbs" %>
<%@ page import="java.util.ArrayList" %>
<!DOCTYPE html>
<html lang="ko">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <script src="https://unpkg.com/@phosphor-icons/web"></script>
    <link rel="stylesheet" href="css/home.css" />

    <title>View Page</title>
    
  </head>
  <body>
  	<%
	    String userID = null; // 로그인이 된 사람들은 로그인정보를 담을 수 있도록한다
	    if (session.getAttribute("userID") != null)
	    {
	        userID = (String)session.getAttribute("userID");
	    }
	    
	    int bbsID = 0;
	    if (request.getParameter("bbsID") != null)
	    {
	        bbsID = Integer.parseInt(request.getParameter("bbsID"));
	    }
	    
	    if (bbsID == 0)
	    {
	        PrintWriter script = response.getWriter();
	        script.println("<script>");
	        script.println("alert('유효하지 않은 글입니다')");
	        script.println("location.href = 'post.jsp'");
	        script.println("</script>");
	    }
	    
	    bbs bbs = new bbsDAO().getbbs(bbsID);
    %>
	
    <div class="container">
      <div class="sidebar">
        <div class="menu-btn">
          <i class="ph-bold ph-caret-left"></i>
        </div>
        <div class="head">
          <div class="user-img">
             <i class="ph ph-user"></i>
          </div>
          <%
          	if(userID == null) {
          %>
          <div class="user-details">
            <p class="title"></p>
            <p class="name">로그인 후 이용</p>
          </div>
          <%
          	} else {
          %>
          <div class="user-details">
            <p class="title"></p>
            <p class="name"><%=userID %>님 </p>
          </div>
          <%} %>
        </div>
        <%
          	if(userID != null) {
        %>
        <div class="nav">
          <div class="menu">
            <p class="title">Main</p>
            <ul>
              <li>
                <a href="home.jsp">
                  <i class="icon ph-bold ph-house-simple"></i>
                  <span class="text">메인</span>
                </a>
              </li>
              <li>
                <a href="#">
                  <i class="icon ph-bold ph-chart-bar"></i>
                  <span class="text">게시판</span>
                  <i class="arrow ph-bold ph-caret-down"></i>
                </a>
                <ul class="sub-menu">
                  <li>
                    <a href="post.jsp">
                      <span class="text">게시물 보기</span>
                    </a>
                  </li>
                  <li>
                    <a href="write.jsp">
                      <span class="text">게시물 작성</span>
                    </a>
                  </li>
                </ul>
              </li>
              <li>
                <a href="#">
                  <i class="icon ph-bold ph-user"></i>
                  <span class="text">친구</span>
                  <i class="arrow ph-bold ph-caret-down"></i>
                </a>
                <ul class="sub-menu">
                  <li>
                    <a href="#">
                      <span class="text">목록</span>
                    </a>
                  </li>
                  <li>
                    <a href="#">
                      <span class="text">채팅</span>
                    </a>
                  </li>
                </ul>
              </li>
            </ul>
          </div>
          <div class="menu">
            <p class="title">App</p>
            <ul>
              <li>
                <a href="https://discord.gg/YpF5xjq">
                  <i class="icon ph-bold ph-discord-logo"></i>
                  <span class="text">Discord</span>
                </a>
              </li>
            </ul>
          </div>
        </div>
        <%
          	}
        %>
        <div class="menu">
          <p class="title">계정</p>
          <ul>
            <%
            	if(userID == null) {
            %>
            <li>
              <a href="login.jsp">
               	<i class="icon ph-bold ph-sign-in"></i>
                <span class="text">로그인</span>
              </a>
            </li>
            <%
            	} else {
            %>
            <li>
              <a href="MemberData.jsp">
               	<i class="icon ph-bold ph-gear"></i>
                <span class="text">설정</span>
              </a>
            </li>
            <li>
              <a href="logout_action.jsp">
                <i class="icon ph-bold ph-sign-out"></i>
                <span class="text">로그아웃</span>
              </a>
            </li>
            <%	
            	}
            %>
          </ul>
        </div>
      </div>
      
	<div class="container">
        <div class="row">
            <table class="table table-striped" style="text-align:center; border:1px solid #dddddd">
                <thead>
                    <tr>
                        <th colspan="3" style="background-color:#eeeeee; text-align:center;">게시판 글보기</th>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <td style="width:20%;">제목</td>
                        <td colspan="2"><%=bbs.getbbsTitle().replaceAll("","&nbsp;").replaceAll("<","&lt;").replaceAll(">","&gt;").replaceAll("\n","<br>") %></td>                  
                    </tr>
                    <tr>
                        <td>작성자</td>
                        <td colspan="2"><%=bbs.getuserID().replaceAll("","&nbsp;").replaceAll("<","&lt;").replaceAll(">", "&gt;").replaceAll("\n","<br>")%></td>
                    </tr>
                    <tr>
                        <td>등록일</td>
                        <td colspan="2"><%=bbs.getbbsDate().substring(0,11) + bbs.getbbsDate().substring(11, 13) + "시" + bbs.getbbsDate().substring(14,16) + "분"%></td>
                    </tr>
                    <tr>
                        <td>내용</td>
                        <td colspan="2" style="min-height:200px; text-align:left;">
                        <!-- 특수문자 출력위해서 & 악성스크립트 방지 -->
                        <%=bbs.getbbsContent().replaceAll("","&nbsp;").replaceAll("<","&lt;").replaceAll(">", "&gt;").replaceAll("\n","<br>")%></td>    
                    </tr>
                </tbody>
            </table> 
             <a href="post.jsp" class="btn btn-primary">목록</a>
            		<%
                		if(userID != null && userID.equals(bbs.getuserID())) {
            		%>
                		<a href="update.jsp?bbsID=<%=bbsID %>" class="btn btn-primary">수정</a>
                		<a href="delete.jsp?bbsID=<%=bbsID %>" class="btn btn-primary">삭제</a>
                
		            <%     
		                }
		            %>       
        </div>
    </div>
    <script
      src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.7.0/jquery.js"
      integrity="sha512-8Z5++K1rB3U+USaLKG6oO8uWWBhdYsM3hmdirnOEWp8h2B1aOikj5zBzlXs8QOrvY9OxEnD2QDkbSKKpfqcIWw=="
      crossorigin="anonymous"
    ></script>
    <script src="js/home.js"></script>
  </body>
</html>