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

    <title>Post Page</title>
    
  </head>
  <body>
  	<% 
        String userID = null;
    	if (session.getAttribute("userID") != null){
            userID = (String) session.getAttribute("userID");
    	}
    	int pageNumber = 1;
        if (request.getParameter("pageNumber") != null){
        	pageNumber = Integer.parseInt(request.getParameter("pageNumber"));
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
      
      
	<div class="notice">
	  <div class="page-title">
	        <div class="credits1">
	            <h3>게시판</h3>
	        </div>
	    </div>
	    <div id="board-search">
	        <div class="credits1">
	            <div class="search-window">
	                <form action="">
	                    <div class="search-wrap">	                        
	                        <input id="search" type="search" name="" placeholder="검색어를 입력해주세요." value="">
	                        <button type="submit" class="btn btn-dark">검색</button>
	                    </div>
	                </form>
	            </div>
	        </div>
	    </div>
	    <div id="board-list">
	        <div class="credits1">
	            <table class="board-table">
	                <thead>
	                <tr>
	                  <a href="#">
	                    <th scope="col" class="th-num">번호</th>
	                    <th scope="col" class="th-title">제목</th>
	                    <th scope="col" class="th-name">이름</th>
	                    <th scope="col" class="th-major">전공</th>
	                    <th scope="col" class="th-date">등록일</th>
	                  </a>
	                </tr>
	                </thead>
	                <tbody>
	                <tr>
	                    <%
    	    				bbsDAO bbsDAO = new bbsDAO();
    	    				ArrayList<bbs> list = bbsDAO.getList(pageNumber);
    	    				for(int i =0; i<list.size(); i++) {
    	    			%>
    	    			<tr>
    	    				<td><%=list.get(i).getbbsID() %></td>
    	    				<td><a href="view.jsp?bbsID=<%=list.get(i).getbbsID()%>"><%=list.get(i).getbbsTitle()%></a></td>
    	    				<td><%=list.get(i).getuserID() %></td>
    	    				<td><%=list.get(i).getuserMajor() %></td>
    	    				<td><%=list.get(i).getbbsDate().substring(0, 11) + list.get(i).getbbsDate().substring(11, 13) + "시" + list.get(i).getbbsDate().substring(14, 16) + "분"%></td>
    	    			</tr>	
    	    			<%
    	    				}
    	    			%>
	                </tr>
	                </tbody>
	            </table>
	            <%
    	    		if(pageNumber != 1){
	    	    %>		
	    	    	<a href= "post.jsp?pageNumber=<%=pageNumber -1%>" class="btn btn-success btn-arraw-left">
	    	    		<span style="color: #fff; position: relative; top: 15px; left: 5px;">
	    	    			이전
	    	    		</span>
	    	    	</a>
	    	    <% 
	    	    	}if(bbsDAO.nextPage(pageNumber + 1)){
	    	    %>		
	    	    	<a href= "post.jsp?pageNumber=<%=pageNumber +1%>" class="btn btn-success btn-arraw-left">
		    	    	<span style="color: #fff; position: relative; top: 15px; left: 5px;">
		    	    		다음
		    	    	</span>
	    	    	</a>
	    	    <% 
	    	    	}
	    	    %>
	        </div>
	    </div>
		
		</div>
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