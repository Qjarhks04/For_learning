<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"
    import="java.util.*"%>
<%@ page import="java.io.PrintWriter" %>
<%@ page import="user.User" %>
<%@ page import="user.UserDAO" %>
<!DOCTYPE html>
<html lang="ko">
  <head>
    <meta charset="UTF-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <script src="https://unpkg.com/@phosphor-icons/web"></script>
    <link rel="stylesheet" href="css/home.css" />

    <title>Main Page</title>
    
  </head>
  <body>
  	<% 
        String userID = null;
    	if (session.getAttribute("userID") != null){
            userID = (String) session.getAttribute("userID");
    	}
    	
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
                <span class="text" name="name">설정</span>
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
      <%
      	if(userID == null) {
      %>
      <div class="credits">
		<h3>Welcome!</h3>
      </div>
      <%
      	} else {
      %>
      <%
	    request.setCharacterEncoding("UTF-8");
	    String name_1 = userID;//request.getParameter("name");
	    User user = new User();
	    user.setUserID(name_1);
	    UserDAO dao = new UserDAO();
	    List membersList = dao.listmembers(user);
	  %>
      <table border=1 style="width:800px;align:center;background-color:rgba(0,0,0,0);">
	    <tr align=center><!-- bgcolor="rgba(0, 0, 0, 0);" -->
	        <th>아이디</th>
	        <th>비밀번호</th>
	        <th>이름</th>
	        <th>전공</th>
	        <th>이메일</th>
	        <th>생년월일 </th>
	    </tr>
	    <%
	        for (int i=0; i<membersList.size(); i++) {
	            User vo = (User) membersList.get(i);
	            String id = vo.getUserID();
	            String pw = vo.getUserPassword();
	            String name = vo.getUserName();
	            String major = vo.getUserMajor();
	            String email = vo.getUserEmail();
	            String age = vo.getUserAge(); 
	    %>
	    <tr align="center">
	        <td><%=id %></td>
	        <td><%=pw %></td>
	        <td><%=name %></td>
	        <td><%=major %></td>
	        <td><%=email %></td>
	        <td><%=age %></td>
	    </tr>
	    <%    
	        }
	    %>
	  </table>
	  <a href="update.jsp?bbsID=" class="btn btn-primary">수정</a>
      <a href="delete.jsp?bbsID=" class="btn btn-primary">삭제</a>
      <%	
      	}
      %>
    </div>
    <script
      src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.7.0/jquery.js"
      integrity="sha512-8Z5++K1rB3U+USaLKG6oO8uWWBhdYsM3hmdirnOEWp8h2B1aOikj5zBzlXs8QOrvY9OxEnD2QDkbSKKpfqcIWw=="
      crossorigin="anonymous"
    ></script>
    <script src="js/home.js"></script>
  </body>
</html>