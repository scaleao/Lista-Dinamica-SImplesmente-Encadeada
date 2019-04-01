#include <stdio.h>
#include <stdlib.h>
#include "artigoCadastro.h"
#include <string.h>
#include <locale.h>

/*JOAO ANTONIO SCALEAO BRITTO
            400972
TRABALHO DE CADASTRO DE ARTIGOS

FIZ COM AJUDA: CASSIA NARDONI GON�ALEZ*/

int main()
{

    LISTA lista;
    REGISTRO reg;

    inicialiazar(&lista);

    setlocale(LC_ALL,"PORTUGUESE");

    reg.ano = 2014;
    strcpy(reg.autores, "HOFFMANN, Christian");
    strcpy(reg.titulo, "Alguns casos, nem neur�ticos, nem abertamente psic�ticos");
    strcpy(reg.revista, "�gora (Rio J.)");
    strcpy(reg.doi, "10.1590/S1516-14982014000200006");
    inserir(&lista, reg);

    reg.ano = 2014;
    strcpy(reg.autores, "Rosana Alves Costa");
    strcpy(reg.titulo, "Alguns casos, nem neur�ticos, nem abertamente psic�ticos");
    strcpy(reg.revista, "�gora (Rio J.)");
    strcpy(reg.doi, "10.1590/S1516-14982014000200006");
    inserir(&lista, reg);

    reg.ano = 2013;
    strcpy(reg.autores, "BESSA");
    strcpy(reg.titulo, "Prospec��o fitoqu�mica preliminar de plantas nativas do cerrado de uso popular medicinal pela comunidade rural do assentamento vale verde - Tocantins");
    strcpy(reg.revista, "Rev. bras. plantas med");
    strcpy(reg.doi, "10.1590/S1516-05722013000500010");
    inserir(&lista, reg);

    reg.ano = 2010;
    strcpy(reg.autores, "ABELHO M");
    strcpy(reg.titulo, "Eucalyptus plantations: an economic solution or an environmental nightmare?");
    strcpy(reg.revista, "Braz. J. Biol.");
    strcpy(reg.doi, "10.1590/S1519-69842010000400007");
    inserir(&lista, reg);

    reg.ano = 2016;
    strcpy(reg.autores, "VICUNA SEBASTIAN DIAZ");
    strcpy(reg.titulo, "DECISION MAKING AND ADAPTATION PROCESSES TO CLIMATE CHANGE");
    strcpy(reg.revista, "ISSN");
    strcpy(reg.doi, "10.1590/1809-4422asocex0004v1942016");
    inserir(&lista, reg);

    reg.ano = 2016;
    strcpy(reg.autores, "MAGALHAES JUNIOR R");
    strcpy(reg.titulo, "Singularidades liter�rias e Machado de Assis e a crise de 93");
    strcpy(reg.revista, "ISSN");
    strcpy(reg.doi, "10.1590/1983-682120169171");
    inserir(&lista, reg);

    reg.ano = 2015;
    strcpy(reg.autores, "PEIGO NOELE DE FREITAS");
    strcpy(reg.titulo, "Rethinking, energy nationalism: a study of the relationship between nation states and companies in the oil industry");
    strcpy(reg.revista, "Rev. Econ. Polit");
    strcpy(reg.doi, "10.1590/0101-31572015v35n03a10");
    inserir(&lista, reg);

    reg.ano = 2008;
    strcpy(reg.autores, "Etcheverry Carlos Alfonso Llancar");
    strcpy(reg.titulo, "A sociedade civil e participa��o cidad�o : como atores sociais fazem parte das decis�es");
    strcpy(reg.revista, "Intera��es (Campo Grande)");
    strcpy(reg.doi, "10.1590/S1518-70122008000200007");
    inserir(&lista, reg);

    reg.ano = 2006;
    strcpy(reg.autores, "STEEN Gerard");
    strcpy(reg.titulo, "A met�fora na ling��stica aplicada: quatro abordagens cognitivas");
    strcpy(reg.revista, "DELTA");
    strcpy(reg.doi, "10.1590/S0102-44502006000300004");
    inserir(&lista, reg);

    reg.ano = 2003;
    strcpy(reg.autores, "COHN Am�lia");
    strcpy(reg.titulo, "Estado e sociedade e as reconfigura��es do direito � sa�de");
    strcpy(reg.revista, "Ci�nc. sa�de coletiva");
    strcpy(reg.doi, "10.1590/S1413-81232003000100002");
    inserir(&lista, reg);

    quantidadeArtigos(&lista);
    imprimir(&lista);

    busca_sequencial(&lista, "COHN Am�lia");

    excluir_elemento(&lista, "ABELHO M");

    imprimir(&lista);

    reinicilizar(&lista);

    return 0;
}
