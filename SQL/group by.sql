create table cust(id int primary key,sname varchar(20),coursename varchar(20),city varchar(20))
insert into cust values(1,'rohit','dot net','nagpur')
insert into cust values(2,'rohite','dot net','nagpur')
insert into cust values(3,'rohito','dot net','mumbai')
insert into cust values(4,'rohi','java','nagpur')
select * from cust
select coursename,count(*)from cust where city ='nagpur' group by coursename