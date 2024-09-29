# Write your MySQL query statement below
-- A CROSS JOIN in SQL is a type of join that returns the Cartesian product of two tables. This means it combines each row from the first table with every row from the second table, resulting in a potentially large number of rows.
--
select x.student_id , x.student_name , y.subject_name, count(z.student_id) as attended_exams
from students x cross join subjects y left join examinations z on x.student_id = z.student_id and y.subject_name = z.subject_name group by x.student_id, x.student_name, y.subject_name order by
x.student_id , y.subject_name;
