create table Student(std_id int,sname varchar(20),semail varchar(40),course_id int)

create table course(course_id int,cname varchar(20),cfee decimal(6,2))

select*from Student
select*from course

select*from Student inner join course on Student.course_id=Course.course_id

select*from Student s left outer join course c on S.course_id=C.course_id