# Write your MySQL query statement below
select distinct a.num as ConsecutiveNums from logs a
join logs b on a.id=b.id+1 and a.num=b.num
join logs c on a.id=c.id+2 and a.num=c.num;