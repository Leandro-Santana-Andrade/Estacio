CREATE TABLE MODELO(
COD_MOD NUMERIC(3) PRIMARY KEY,
NOME VARCHAR(60)
);

CREATE TABLE PROPRIETARIO(
COD_PROP NUMERIC(8) PRIMARY KEY,
NOME VARCHAR(60),
CPF VARCHAR(11) UNIQUE
);

CREATE TABLE VEICULO(
PLACA CHAR(7) PRIMARY KEY,
COR VARCHAR(20),
MODELO NUMERIC(3) REFERENCES MODELO(COD_MOD),
PROPRIETARIO NUMERIC(8) REFERENCES PROPRIETARIO(COD_PROP),
ANO_FAB CHAR(4),
ANO_MOD CHAR(4),
VALOR_SEGURADO NUMERIC(9,2)
);

insert into modelo(cod_mod, nome) values (101,'Classic');
insert into modelo(cod_mod, nome) values (102, 'Sandero');
insert into modelo(cod_mod, nome) values (103, 'Ka');
insert into modelo(cod_mod, nome) values (104, 'Palio');
insert into modelo(cod_mod, nome) values (105, 'Gol');

insert into proprietario (cod_prop, nome, cpf) values (10812,'Dilma Neves', '51230611266');
insert into proprietario (cod_prop, nome, cpf) values (10816,'Jaqueline Meireles', null);
insert into proprietario (cod_prop, nome, cpf) values (10819, 'Ivone Neville', '21233622471');
insert into proprietario (cod_prop, nome, cpf) values (10821, 'Mariana Rosa', '41293524158');
insert into proprietario (cod_prop, nome, cpf) values (10823, 'Maria Chinalia', '6242138123');

insert into veiculo(placa, cor, modelo, proprietario, ano_fab, ano_mod, valor_segurado) values
('LGA4674', 'BRANCO', 101, 10816,'2010', '2011', 22849.4);
insert into veiculo(placa, cor, modelo, proprietario, ano_fab, ano_mod, valor_segurado) values
('KTM2693', 'PRETO', 101, 10823,'2010', '2010', 20584.68);
insert into veiculo(placa, cor, modelo, proprietario, ano_fab, ano_mod, valor_segurado) values
('KTM6449', 'VERMELHO', 102, 10823,'2018', '2018', 52584.68);
insert into veiculo(placa, cor, modelo, proprietario, ano_fab, ano_mod, valor_segurado) values
('NTA3259', 'VERDE', 103, 10819,'2013', '2014', 33000.93);
insert into veiculo(placa, cor, modelo, proprietario, ano_fab, ano_mod, valor_segurado) values
('LVA3600', 'PRETO', 104, 10823,'2015', '2015', 38979.67);
insert into veiculo(placa, cor, modelo, proprietario, ano_fab, ano_mod, valor_segurado) values
('KTM8642', 'PRETO', 105, 10812,'2009', '2009', 172584.68);
insert into veiculo(placa, cor, modelo, proprietario, ano_fab, ano_mod, valor_segurado) values
('LTU4580', 'AMARELO', 105, 10812,'2011', '2011', 23452.93);
