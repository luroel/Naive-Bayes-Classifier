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