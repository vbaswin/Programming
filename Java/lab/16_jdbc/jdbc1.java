/*
    connect Java application with mysql database
*/

import java.sql.*;
class jdbc1 {
    public static void main(String args[]) {
        try {

        Class.forName("com.mysql.jdbc.driver");
        Connection con = 
        DriverManager.getConnection("jdbc:mysql://localhost:3306/sonoo","root","root");
        Statement st = con.createStatement();
        ResultSet rs = st.executeQuery("select* from emp");
        while(rs.next()) 
            System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3));
        con.close();

        }catch(Exception e) {System.out.println(e);}
    }
}
