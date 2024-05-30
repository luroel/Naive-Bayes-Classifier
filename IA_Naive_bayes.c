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

%-------------------------------------------------------------------------%
fprintf('Ingrese los datos para calcular la probalidad en la muestra correspondiente:\n')
num_datos = n_1;

    for z=1:num_datos  
         muestra(z)=input('Valores:\n');
    end

muestra
P_H = normcdf(muestra,MH,DE_H)
P_M = normcdf(muestra,MM,DE_M)

%---------------------Probabilidad total de los atributos-----------------%
SP_H = prod(P_H);
SP_M = prod(P_M);

PE = (SP_H*PH)+(SP_M*PM)

%-------------------La probabilidad de que sea H/M------------------------%
fprintf('La probabilidad de que sea Hombre o Mujer en esa muestra es:\n')
PHNV = 100*(SP_H*PH)/(PE)
PMNV = 100*(SP_M*PM)/(PE)
