create table customer1(custname varchar(20),custid int,city varchar(20),state varchar(20))
insert into customer1 values('Amit',1,'Nagpur','Maha')
insert into customer1 values('Priya',2,'Delhi','Delhi')
insert into customer1 values('Shiva',6,'Nagpur','Maha')
insert into customer1 values('Amita',4,'Pune','Maha')
insert into customer1 values('Rutu',8,'Delhi','Delhi')
insert into customer1 values('Shital',9,'Surat','Gujrat')
insert into customer1 values('Aniket',10,'Nagpur','Maha')
select *from customer1
select *from customer1 where custname='Amita'
select *from customer1 where city='Delhi'
select *from customer1 where custid>2 and custid<=10
select *from customer1 where city='Nagpur'order by custname 
select *from customer1 where city='Nagpur'order by custname desc
select custname ,count(*) from customer1 where state='Maha'  group by custname
select city,count(*)from customer1 where state='Delhi' group by city
select city ,count(*)from customer1 where state='Maha' group by city having count(*)>2