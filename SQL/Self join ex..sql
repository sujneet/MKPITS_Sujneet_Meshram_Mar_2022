create table Customer6 (cust_id int , cust_name varchar(20),
state varchar(20) not null,city varchar(20) not null)

insert into Customer6 values(1,'Amit','Maha','Nagpur'),(2,'Pooja','Maha','Nagpur'),(2,'Raj','Mp','Bhopal'),
(4,'Amit','Maha','Nagpur'),(5,'Bharti','Mp','Bhopal'),(6,'Deepti','Mp','Indore')

select*from Customer6

select s1.cust_name,s2.state,s2.city from Customer6 s1,Customer6 s2 where s1.cust_id
<>s2.cust_id and s1.city=s2.city order by s2.city;