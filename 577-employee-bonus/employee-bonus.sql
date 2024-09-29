# Write your MySQL query statement below
select e.name , p.bonus from employee e left join bonus p on e.empId =p.empId where p.bonus<1000 or bonus is null;