create table product1(id int,name varchar(20),price int,quantity int)
insert into product1 values(1,'mouse',120,7)
insert into product1 values(2,'keyboard',220,7)
insert into product1 values(3,'desktop',12200,7)
insert into product1 values(1,'mouse',120,7)

select * from product1

select top 2 name,price from product1 order by price desc

select top 50 percent name,price from product1 order by price desc


