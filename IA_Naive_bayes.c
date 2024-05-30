%-------------------------------------------------------------------------%
%---------------------------Inteligencia Artificial-----------------------%
%------------------------------Naive Bayes--------------------------------%
%----------------------------LUIS RODRIGUEZ ELIAS-------------------------%

clc 
clear all

fprintf('Introduzca la cantidad de elementos de la clase Hombres\n')
m_1 = input('Numero de filas:\n')
n_1 = input('Numero de columnas:\n')

fprintf('Introduzca la cantidad de elementos de la clase Mujer\n')
m_2 = input('Numero de filas:\n')
n_2 = input('Numero de columnas:\n')

fprintf('La probabilidad de que sea Hombre es:\n')
PH = (m_1)/(m_1+m_2)
fprintf('La probabilidad de que sea Mujer es:\n')
PM = (m_2)/(m_1+m_2)

%------------------LLenar filas y columnas de los atributos---------------%
%----------------------------Llenar datos H/M--------------------------%
for i=1:n_1
    for j=1:m_1
         disp(['El elemento de la clase Hombres en la posicion: (',num2str(i),',',num2str(j),')'])
        H(i,j) = input('');
    end
end
H = transpose(H)
H
fprintf('Las medias de cada atributo de la clase Hombres es:\n')
MH = mean(H)
fprintf('Las desvianciones estandar de cada atributo de la clase Hombres es:\n')
DE_H = std(H)

for k=1:n_2
    for l=1:m_2
          disp(['El elemento de la clase Hombres en la posicion: (',num2str(k),',',num2str(l),')'])
          M(k,l) = input('');
    end
end
M = transpose(M)
M
fprintf('La media de cada atributo de la clase Mujeres es:\n')
MM = mean(M)
fprintf('Las desvianciones estandar de cada atributo de la clase Mujeres es:\n')
DE_M = std(M)