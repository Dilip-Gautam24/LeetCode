# Write your MySQL query statement below
select name as Employee from employee a where a.salary>(select salary from employee b where a.managerId=b.id);