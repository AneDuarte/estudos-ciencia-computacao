program sim_nao;
var
    x, y, z: integer;

begin
    write('Digite x: ');
    read(x);
    write('Digite y: ');
    read(y);
    write('Digite z: ');
    read(z);
    
    if (x > y) OR (y < z) then
        writeln('Sim')
    else
        writeln('Não');
end.