# Write your MySQL query statement below
-- inner join maybe
select e1.name from employee as e1 inner join employee as e2 on e1.id = e2.managerId group by e2.managerId having count(*) >=5;