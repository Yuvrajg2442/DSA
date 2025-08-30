# Write your MySQL query statement below
select e2.name
from Employee e1
Inner JOIN Employee e2
on e1.managerId = e2.id
group by e1.managerId
Having count(e1.id) >= 5
