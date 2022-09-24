create table stores(store_id int primary key,store_name varchar(50),phone int,email varchar(60),
street varchar(50),city varchar(50),state varchar(50),zip_code int)

insert into stores values(1,'kirana',54567887,'fdguihyru','happy_street','ngp','mah',26),
(2,'ana',2368348,'hbjkbn','sad_street','ngp','mah',26),
(3,'medical',7907,'togij','wanted','mumbai','mah',27)

create table staffs(staff_id int primary key,fname varchar(50),lname varchar(50),
email varchar(50),phone int,active tinyint,store_id int foreign key references stores(store_id),
manager_id int)

insert into staffs values(01,'neet','kaur','dffbgf',56676,1,1,1)
insert into staffs values(02,'nee','aur','dffbgf',56676,1,2,1)
insert into staffs values(03,'eet','kau','dffbgf',56676,1,3,1)

create table customers(customer_id int primary key,fmane varchar(50),
lname varchar(50),phone int,email varchar(50),street varchar(50),city varchar(50),
state varchar(50),zip_code varchar(50))
insert into customers values(110,'sanam','gill',5647676,'fgfbggf','bhandara','varthi',
'mah','3556')
insert into customers values(120,'saam','chill',5676,'xcc','gondia','varthi',
'mp','4554')
insert into customers values(130,'nam','fill',5647676,'mnnmb','bhandara','varthi',
'mah','3556')

create table orders(order_id int primary key,customer_id int foreign key references customers(customer_id),
order_status varchar(50),order_date date,shipping_date date,store_id int foreign key references stores(store_id),
staff_id int foreign key references staffs(staff_id))

insert into orders values(0001,110,'out for delivery','2022-09-08','2022-09-09',1,01)
insert into orders values(0002,120,'delivered','2022-09-10','2022-09-10',2,02)
insert into orders values(0003,130,'shipment','2022-09-08','2022-09-09',3,03)

create table categories(category_id int primary key,category_name varchar(50))
insert into categories values(111,'honda'),(222,'suzuki')
insert into categories values(333,'bmw')

create table brands(brand_id int primary key,brand_name varchar(50))
insert into brands values(1122,'spice'),(3344,'air')
insert into brands values(5566,'tim')

create table products(product_id int primary key,product_name varchar(50),
brand_id int foreign key references brands(brand_id),
category_id int foreign key references categories(category_id),
model_year int,list_price int)
insert into products values(11111,'city',1122,111,2020,1200000)
insert into products values(22222,'brezza',3344,222,2021,1500000)
insert into products values(33333,'s6',5566,333,2022,1600000)

create table stocks(store_id int foreign key references stores(store_id),
product_id int foreign key references products(product_id),quantiyt int)
insert into stocks values(1,11111,10),(2,22222,5),(3,33333,7)

create table order_items(order_id int foreign key references orders(order_id),
item_id int primary key,quantity int,list_price int,discount int)

insert into order_items values(0001,07,1,130000,1000)
insert into order_items values(0002,08,1,150000,1000)
insert into order_items values(0003,09,1,190000,1000)

alter table order_items add product_id int foreign key references products(product_id)




select * from stores
select * from staffs
select * from customers
select * from orders
select * from categories
select * from products
select * from stocks
select * from brands
select * from order_items


