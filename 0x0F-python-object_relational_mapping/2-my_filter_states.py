#!/usr/bin/python3
"""
Script that takes in an argument and displays all values in the states
table of hbtn_0e_0_usa where name matches the argument
"""
import MySQLdb
from sys import argv

# The code should not be executed when imported
if __name__ == '__main__':

    # connecting to the database
    db = MySQLdb.connect(host="localhost", port=3306, user=argv[1],
                         passwd=argv[2], db=argv[3])

    cur = db.cursor()
    query = "SELECT * FROM states WHERE name LIKE BINARY '{}'".format(argv[4])
    cur.execute(query)

    rows = cur.fetchall()
    for i in rows:
        print(i)
    # Clean up
    cur.close()
    db.close()

