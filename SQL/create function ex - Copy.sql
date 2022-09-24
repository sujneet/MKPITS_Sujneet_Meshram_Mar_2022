

create function f1() returns table as return (select*from Product1)

select*from Product1
select*from f1()
