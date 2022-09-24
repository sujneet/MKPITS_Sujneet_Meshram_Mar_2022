
create table student1(first_name varchar(20),last_name varchar(20),course varchar(20),city varchar(20))
insert into student1 values('Pranali','Nandankar','Python','Nagpur')
insert into student1 values('Pranu','Nandanwar','Python','Delhi')
insert into student1 values('Priya','Rajput','Python','Nagpur')
insert into student1 values('Riya ','Jhade','Python','Nagpur')
select*from student1
select first_name,last_name from student1 order by first_name
select first_name,last_name from student1 order by first_name desc
select first_name,last_name,course,city from student1 order by last_name ,city
