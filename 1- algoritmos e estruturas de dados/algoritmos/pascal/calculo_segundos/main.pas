program calculo_segundos;
var entrada, graus, minutos, segundos: integer;

begin
    write('Digite a quantidade de segundos: ');
    read(entrada);
    
    graus:= entrada div 3600;
    entrada:= entrada - graus*3600;
    
    minutos:= entrada div 60;
    entrada:= entrada - minutos*60;
    
    segundos:= entrada;
    
    writeln(graus);
    writeln(minutos);
    writeln(segundos);
end.