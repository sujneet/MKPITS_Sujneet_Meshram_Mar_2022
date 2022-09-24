create table info(id int primary key,fname varchar(20),lname varchar(20),sub varchar(20),city varchar(20),state varchar(20))
insert into info values(1,'amit','shah','dotnet','nagpur','mah')
insert into info values(2,'rajesh','kumar','dotnet','mumbai','mah')
insert into info values(3,'dilip','sharma','java','nagpur','mah')
insert into info values(4,'arifa','shabnam','java','nagpur','mah')
insert into info values(5,'mayuri','meshram','dotnet','mumbai','mah')
select * from info

select city,count(*) from info where state ='mah' group by city

select city,count(*) from info where state ='mah' group by city having count(*)>2