package user;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet; // 단축키 : ctrl + shift + 'o'
import java.util.List;
import java.util.ArrayList;
import java.util.Date;

public class UserDAO {
	private Connection conn; //db 접근 
	private PreparedStatement pstmt;
	private ResultSet rs; // db 결과 
	
	public UserDAO() { // dao에서 db 연결 
		try {
			String dbUrl = ""; //mysql에 있는 내 db에 접근하는 경로 
			String dbId = ""; // id
			String dbPassword = ""; // pw
			Class.forName("com.mysql.cj.jdbc.Driver"); //mysql 접속 드라이버 
			conn = DriverManager.getConnection(dbUrl, dbId, dbPassword);
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
	// 로그인 
	public int login(String userID, String userPassword) {
		String SQL = "SELECT userPassword FROM USER WHERE userID = ?";
		try {
			pstmt = conn.prepareStatement(SQL);
			pstmt.setString(1, userID); // sql Injection 방어 
			rs = pstmt.executeQuery(); // 쿼리 실행 
			if (rs.next()) {
				if (rs.getString(1).equals(userPassword))
					return 1; //로그인 성공
				else
					return 0; // 비번 다름 
			}
			return -1; // 아이디 X
		}catch(Exception e) {
			e.printStackTrace();
			
		}
		return -2; //DB 에러 
	}
	// 회원가입 
	public int join(User user) {
		String SQL = "INSERT INTO USER VALUES(?, ?, ?, ?, ?, ?)"; // 내 db에 값을 넣는다.
		try {
			pstmt = conn.prepareStatement(SQL);
			pstmt.setString(1, user.getUserID()); // id
			pstmt.setString(2, user.getUserPassword()); // pw
			pstmt.setString(3, user.getUserName()); // name
			pstmt.setString(4, user.getUserMajor()); // major
			pstmt.setString(5, user.getUserEmail()); // email
			pstmt.setString(6, user.getUserAge()); // age 
			return pstmt.executeUpdate(); // 0이 아닌 값이 리턴되면 성공  
		}catch(Exception e) {
			e.printStackTrace();
			
		}
		return -1; //DB 에러 
	}
	
	public List listmembers(User User) {
        List<User> membersList = new ArrayList<User>();
        String name_1 = User.getUserID();
        try {
            //conn = dataFactory.getConnection();
            String query = "SELECT * FROM USER";
            
            if((name_1 != null && name_1.length() != 0)) {
                query += " WHERE userName=?";
                pstmt = conn.prepareStatement(query);
                pstmt.setString(1, name_1);
            }else {
                pstmt = conn.prepareStatement(query);
            }
            ResultSet rs = pstmt.executeQuery();
            while(rs.next()) {
                String id = rs.getString("userID");
                String pw = rs.getString("userPassword");
                String name = rs.getString("userName");
                String major = rs.getString("userMajor");
                String email = rs.getString("userEmail");
                String age = rs.getString("userAge");
                //Date joinDate = rs.getDate("joinDate");
                
                User user = new User();
                user.setUserID(id);
                user.setUserPassword(pw);
                user.setUserName(name);
                user.setUserEmail(email);
                user.setUserMajor(major);
                user.setUserAge(age);
                
                membersList.add(user);
            }
            rs.close();
            pstmt.close();
            conn.close();
        }catch (Exception e) {
            e.printStackTrace();
        }
        return membersList;
    }
}