# Write your MySQL query statement below
SELECT c.name AS Customers
FROM Customers c
WHERE c.id NOT IN(SELECT o.CustomerId
                      FROM Customers c1, Orders o
                      WHERE c1.Id=o.CustomerId
);