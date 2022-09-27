# Write your MySQL query statement below
select distinct b.num as consecutivenums
from logs a join logs b on a.num=b.num and a.id=b.id+1
join logs c on a.num=c.num and a.id=+c.id+2;