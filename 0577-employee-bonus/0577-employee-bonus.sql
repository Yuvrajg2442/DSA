# Write your MySQL query statement below
select e.name, b.bonus from Employee e
Left Join Bonus b
on e.empId = B.empId
where bonus<1000 || Bonus IS NULL