program tabuada;
var
    num, contador: integer;

begin
    write('Digite o numero: ');
    read(num);
    
    for contador:= 1 to 10 do
    begin
        write(num);
        write(' x ');
        write(contador);
        write(' = ');
        writeln(num*contador);
    end;
end.


