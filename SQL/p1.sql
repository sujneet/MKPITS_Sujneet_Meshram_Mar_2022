create table salesman(salesman_id int,name varchar(50),
city varchar(50),commission float)
insert into salesman values(5001,'James Hoog','New York',0.15),
(5002,'Nail Knite','Paris',0.13),
(5005,'Pit Alex','London',0.11),
(5006,'Mc Lyon','Paris',0.14),
(5007,'Paul Adam','Rome',0.13),
(5003,'Lauson Hen','San Jose',0.12)

select * from salesman

select name,commission from salesman

select name,city from salesman where city='Paris'

create table customer(customer_id int,cust_name varchar(500),city varchar(500),grade int,salesman_id int)
insert into customer values(3002,'Nick Rimando','New York',100,5001),
(3007,'Brad Davis','New York',200,5001),
(3005,'Graham Zusi','California',200,5002),
(3008,'Julian Green','London',300,5002),
(3004,'Fabian Johnson','Paris',300,5006),
(3009,'Geoff Cameron','Berlin',100,5003),
(3003,'Jozy Altidor','Moscow',200,5007)

select * from customer

select * from customer where grade=200;

select * from order2

select ord_no, ord_date, purch_amt from order2 where salesman_id=5001;

create table nobel_prize(yr int,sub varchar(300),winner varchar(500),country varchar(500),category varchar(500))
insert into nobel_prize values(1970,'Physics','Hannes Alfven','Sweden','Scientist'),
(1970,'Physics','Louis Neel','France','Scientist'),
(1970,'Chemistry','Luis Federico Leloir','France','Scientist'),
(1970,'Physiology','Ulf von Euler','Sweden','Scientist'),
(1970,'Physiology','Bernard Katz','Germany','Scientist'),
(1970,'Literature','Aleksandr Solzhenitsyn','Russia','Linguist'),
(1970,'Economics','Paul Samuelson','USA','Economist')
insert into nobel_prize values(1971,'Economics','Paul Samuelson','USA','Economist')
insert into nobel_prize values(1950,'Physics','Louis Neel','France','Scientist')
insert into nobel_prize values(1974,'Physics','Louis Neel','France','Scientist')
insert into nobel_prize values(1975,'Physiology','Ulf von Euler','Sweden','Scientist')
insert into nobel_prize values(1975,'Physics','Ulf von Euler','france','Scientist')
insert into nobel_prize values(1971,'Economics','Paul Samuelson','USA','Economist'),
insert into nobel_prize values(1975,'Peace','Hannes Alfven','Sweden','Scientist')






select * from nobel_prize
  
select yr,sub,winner from nobel_prize where yr=1970;

select winner from nobel_prize where yr=1971

select yr,sub from nobel_prize where winner='Bernard Katz'

select winner from nobel_prize where yr=1950 and sub='physics'

SELECT yr, sub, winner, country FROM nobel_prize WHERE sub = 'Chemistry'AND yr>=1965 AND yr<=1975

SELECT *FROM nobel_prize WHERE yr>1972 and winner in('Louis Neel','Ulf von Euler')

select * from nobel_prize where winner like 'Louis %'

SELECT * FROM nobel_prize  WHERE (sub ='Physics' AND yr=1970)UNION (SELECT * FROM nobel_prize  WHERE (sub ='Economics' AND yr=1971));


select * from nobel_prize where yr=1970 and sub not in ('Physiology','Economics')


SELECT * FROM nobel_prize WHERE (sub ='Physiology' AND yr<1971) UNION (SELECT * FROM nobel_prize WHERE (sub ='Peace' AND yr>=1974));

select * from nobel_prize where winner='Louis Neel'

select * from nobel_prize where sub like 'p%' order by yr desc,winner

select yr,sub,winner,country,category from nobel_prize where yr=1970 order by sub












