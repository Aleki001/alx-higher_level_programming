-- creates the MySQL server user user_0d_1.
CREATE USER IF NOT EXISTS user_0d_1@localhost BY user_0d_1_pwd;
GRANT ALL PRIVELEGES ON *.* TO user_0d_1@localhost;
FLUSH PRIVELEGES;