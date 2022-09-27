# Write your MySQL query statement below
select distinct a.num as consecutiveNums
from Logs a, logs b,logs c
where a.num=b.num and a.id=b.id+1 and b.num=c.num and b.id=c.id+1;