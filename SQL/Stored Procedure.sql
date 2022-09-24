create procedure Prod1 as begin select*from Product1 end

exec Prod1

alter procedure prod1 as begin select name,price from Product1 order by price end;



create procedure prod2 (@minprice as decimal) as begin  select*from product1 where price>@minprice order by price end;

exec prod1
exec prod2 50
exec prod2 400 

create proc pp2(@pn as varchar(20)) as begin select*from Product1 where name=@pn end

exec pp2 'Mouse'
exec  pp2 'Pen drive'


---store Procedure With 2 parameters

create Procedure pp1(@Product_name as varchar(20),@price as decimal)
as begin select*from Product1
where name=@Product_name and price>=@price order by name end;

select*from Product1
exec  pp1 'Mouse',120
exec pp1 'Pen drive',200

create proc pp4(@minp as decimal,@maxp as decimal)
as
begin
select * from Product1
where price > @minp and price < @maxp
order by name
end;


exec pp4 40,650

exec pp4 @minp=400 ,@maxp=650

create proc pp5(@minp as decimal,@maxp as decimal,@pn as varchar(max))
as
begin
select * from product1
where price > @minp and price < @maxp
and name LIKE '%' + @pn + '%'

order by name
end;

select * from Product1
exec pp5 @minp=30,@maxp=650,@pn='pen'
exec pp5 @minp=30,@maxp=700,@pn='keyboard'
exec pp5 @minp=30,@maxp=700,@pn='drive'
exec pp5 @minp=30,@maxp=650,@pn='ouse'
