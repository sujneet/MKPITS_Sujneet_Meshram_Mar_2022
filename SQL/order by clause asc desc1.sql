create table cust1(id int primary key,sname varchar(20),coursename varchar(20),city varchar(20))
insert into cust1 values(1,'rohit','dot net','nagpur')
insert into cust1 values(2,'rohite','dot net','nagpur')
insert into cust1 values(3,'rohito','dot net','mumbai')
insert into cust1 values(4,'rohi','java','nagpur')

select * from cust1

select city,sname from cust1 order by city,sname;

select city,sname from cust1 order by city desc,sname asc;

