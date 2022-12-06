program menor_maior_igual;
var
    num1, num2: integer;

begin
    write('Digite o 1° numero: ');
    read(num1);
    write('Digite o 2° numero: ');
    read(num2);
    
    if (num1 > num2) then
        writeln('O primeiro é maior')
    else
        writeln('O segundo é maior ou igual');
end.