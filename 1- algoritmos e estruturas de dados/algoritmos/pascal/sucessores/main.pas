program sucessores;
type
    vector = array[1..100] of integer;
var
    resposta, contador: integer;
    lista: vector;

begin
    write('Digite os numeros: ');
    read(resposta);
    
    contador:= 1;
    
    while resposta <> 0 do
    begin
        lista[contador]:= resposta;
        write(resposta);
        write(' ');
        writeln(resposta + 2);
        contador:= contador + 1;
        read(resposta);
    end;
end.
