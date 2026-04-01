package bbs;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;

public class bbsDAO {
	private Connection conn;
	private ResultSet rs; 
	
	public bbsDAO() {
		try {
			String dbUrl = ""; //mysql에 있는 내 db에 접근하는 경로 
			String dbId = ""; // id
			String dbPassword = ""; //pw
			Class.forName("com.mysql.jdbc.Driver"); // driver
			conn = DriverManager.getConnection(dbUrl, dbId, dbPassword);
		}catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public String getDate() {
		String SQL = "SELECT NOW()";
		try {
			PreparedStatement pstmt = conn.prepareStatement(SQL);
			rs = pstmt.executeQuery();
			if (rs.next()) {
				return rs.getString(1);
			}
		}catch(Exception e) {
			e.printStackTrace();
		}
		return ""; //DB 오류 
	}
	
	public int getNext() {
		String SQL = "SELECT bbsID FROM BBS ORDER BY bbsID DESC";
		try {
			PreparedStatement pstmt = conn.prepareStatement(SQL);
			rs = pstmt.executeQuery();
			if (rs.next()) {
				return rs.getInt(1) + 1;
			}
			return 1;
		}catch(Exception e) {
			e.printStackTrace();
		}
		return -1; //DB 오류 
	}

	public int write(String bbsTitle, String userName, String userMajor, String bbsContent, String userID){
		String SQL = "INSERT INTO BBS VALUES (?, ?, ?, ?, ?, ?, ?, ?)";
		try {
			PreparedStatement pstmt = conn.prepareStatement(SQL);
//			pstmt.setInt(1, getNext());
			pstmt.setInt(1, getNext());
			pstmt.setInt(2, 1);
			pstmt.setString(3, bbsTitle);
			pstmt.setString(4, userName);
			pstmt.setString(5, userMajor);
			pstmt.setString(6, getDate());
			pstmt.setString(7, bbsContent);
			pstmt.setString(8, userID);
//			pstmt.setInt(6, 1);
			return pstmt.executeUpdate();
		}catch(Exception e) {
			e.printStackTrace();
		}
		return -1; //DB 오류 
	}
	
	public ArrayList<bbs> getList(int pageNumber){
		String SQL = "SELECT * FROM BBS WHERE bbsID < ? AND bbsAvailable = 1 ORDER BY bbsID DESC LIMIT 10";
		ArrayList<bbs> list = new ArrayList<bbs>();
		try {
			PreparedStatement pstmt = conn.prepareStatement(SQL);
			pstmt.setInt(1, getNext()-(pageNumber -1)*10);
			rs = pstmt.executeQuery();
			while (rs.next()) {
				bbs bbs = new bbs();
				bbs.setbbsID(rs.getInt(1));
				bbs.setbbsAvailable(rs.getInt(2));
				bbs.setbbsTitle(rs.getString(3));
				bbs.setuserName(rs.getString(4));
				bbs.setuserMajor(rs.getString(5));
				bbs.setbbsDate(rs.getString(6));
				bbs.setbbsContent(rs.getString(7));
				bbs.setuserID(rs.getString(8));
				list.add(bbs);
			}
		}catch(Exception e) {
			e.printStackTrace();
		}
		return list; 
	}
	// 해당 페이지로 넘어갈 수 있는지 검사 
	public boolean nextPage(int pageNumber){
		String SQL = "SELECT * FROM BBS WHERE bbsID < ? AND bbsAvailable = 1";
		try {
			PreparedStatement pstmt = conn.prepareStatement(SQL);
			pstmt.setInt(1, getNext()-(pageNumber -1)*10);
			rs = pstmt.executeQuery();
			while (rs.next()) {
				return true;
			}
		}catch(Exception e) {
			e.printStackTrace();
		}
		return false; 
	}
	
	public bbs getbbs(int bbsID)
    {
		String SQL = "SELECT * FROM BBS WHERE bbsID = ?"; 
        try {
				PreparedStatement pstmt = conn.prepareStatement(SQL);
				pstmt.setInt(1, bbsID);
				rs = pstmt.executeQuery();
				if (rs.next())
					{
		                bbs bbs = new bbs();
		                bbs.setbbsID(rs.getInt(1));
						bbs.setbbsAvailable(rs.getInt(2));
						bbs.setbbsTitle(rs.getString(3));
						bbs.setuserName(rs.getString(4));
						bbs.setuserMajor(rs.getString(5));
						bbs.setbbsDate(rs.getString(6));
						bbs.setbbsContent(rs.getString(7));
						bbs.setuserID(rs.getString(8));
		                return bbs;
			        }
        } catch (Exception e) {
        	e.printStackTrace();
        }
        return null; 
    }
	
	public int update(int bbsID, String bbsTitle, String bbsContent) {	
		String SQL = "UPDATE BBS SET bbsTitle = ?, bbsContent = ? WHERE bbsID = ?";
		try {
			PreparedStatement pstmt = conn.prepareStatement(SQL);
			pstmt.setString(1, bbsTitle);
			pstmt.setString(2, bbsContent);
			pstmt.setInt(3, bbsID);
			return pstmt.executeUpdate();
		}catch(Exception e) {
			e.printStackTrace();
		}
		return -1; //DB 오류 
	}

	public int delete(int bbsID) {
		String SQL = "UPDATE BBS SET bbsAvailable = 0 WHERE bbsID = ?";
		try {
			PreparedStatement pstmt = conn.prepareStatement(SQL);
			pstmt.setInt(1, bbsID);
			return pstmt.executeUpdate();
		}catch(Exception e) {
			e.printStackTrace();
		}
		return -1; //DB 오류 
	}
}