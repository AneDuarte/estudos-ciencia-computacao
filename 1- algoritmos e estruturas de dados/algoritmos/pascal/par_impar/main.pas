program par_impar;
var
    num: integer;

begin
    write('Digite um numero: ');
    read(num);
    
    if (num MOD 2 = 0) then
        writeln('É par.')
    else
        writeln('É ímpar.');
end.
