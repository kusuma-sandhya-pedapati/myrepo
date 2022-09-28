# Write your MySQL query statement below
SELECT department.name as department,a.name as employee,a.salary
from department
join employee a
on department.id=a.departmentId
where 3> (select
         count(distinct c.salary)
         from employee c
         where c.salary>a.salary
         and a.departmentId=c.departmentId)
;