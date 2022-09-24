create table order2(ord_no int,purch_amt float,ord_date date,
customer_id int,salesman_id int)
insert into order2 values(70001,150.5,'2012-10-05',3005,5002),
(70009,270.65,'2012-09-10',3001,5005),
(70002,65.26,'2012-10-05',3002,5001),
(70004,110.5,'2012-08-17',3009,5003),
(70007,948.5,'2012-09-10',3005,5002),
(70005,2400.6,'2012-07-27',3007,5001)

select ord_date,salesman_id,ord_no,purch_amt from order2

SELECT DISTINCT salesman_id FROM order2
