# Write your MySQL query statement below
SELECT a.name AS Employee,Salary,Department.name AS Department
FROM employee a
JOIN Department
ON a.departmentId=Department.id
WHERE salary=(SELECT MAX(salary)
              FROM Employee
              WHERE departmentId=a.departmentId
);