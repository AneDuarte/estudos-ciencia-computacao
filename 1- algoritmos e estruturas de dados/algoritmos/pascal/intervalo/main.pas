program intervalo;
var
    x, y, z: integer;

begin
    write('Digite x: ');
    read(x);
    write('Digite y: ');
    read(y);
    write('Digite z: ');
    read(z);
    
    if ((x < y) OR (x = y)) AND (y < z) then
        writeln('Está no intervalo.')
    else
        writeln('Não está no intervalo');
end.