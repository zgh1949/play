package space.zgh1949.jdbc;

import java.sql.*;

/**
 * @author zgh
 * @date 2022/3/14
 */
public class TestJDBC {

    public static final String URL = "jdbc:mysql://121.4.164.83/test";
    public static final String USER = "root";
    public static final String PASSWORD = "@Redis2333";

    public static void main(String[] args) throws ClassNotFoundException, SQLException {
        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection connection = DriverManager.getConnection(URL, USER, PASSWORD);

        Statement statement = connection.createStatement();
        ResultSet resultSet = statement.executeQuery("select * from class");
        while (resultSet.next()) {
            System.out.println(resultSet.getInt("id") + "|"
                    + resultSet.getString("class_name") + "|"
                    + resultSet.getInt("class_no"));
        }

        String sql = "select * from class where id = ?";
        PreparedStatement preparedStatement = connection.prepareStatement(sql);
        preparedStatement.setInt(1, 3);
        ResultSet resultSet1 = preparedStatement.executeQuery();
        while (resultSet1.next()) {
            System.out.println(resultSet1.getInt("id") + "|"
                    + resultSet1.getString("class_name") + "|"
                    + resultSet1.getInt("class_no"));
        }

    }
}
