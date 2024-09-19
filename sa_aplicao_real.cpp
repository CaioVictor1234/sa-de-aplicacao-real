/******************************************************************************

*******************************************************************************/

#include <iostream>

int main()
{
    //Declarão das Variaveis que utilzaremos para o programa:
    double valorDaHora, quantidadeDeHoras, salarioBruto, salarioLiquido;
    double iNSS, fGTS, iR, totalDosDescostos;
    
    //Inserção dos dados do Usuario,para fornecer os valores requisitados:
        std::cout << "Digite quanto é o valor de uma hora trabalhada por você: ";
    std::cin >> valorDaHora;
        std::cout << "Digite agora quantidade de horas trabalhado por você em um mês: ";
    std::cin >> quantidadeDeHoras;
    
    
    
    //Prate de calculos do Sistema de pagamento:
         salarioBruto = (valorDaHora * quantidadeDeHoras);
        std::cout << "Seu salario bruto é: " << salarioBruto << "\n";
        
        
        
        
//Estrutura que valida se o usuario tera que descontar seu Imposto de Renda, essa validação é feita atraves do salario do usuario
                if (salarioBruto < 900)
                {
                    std::cout << "Seu imposto de renda é de:" << iR << " \n";
                } 
                    else if (salarioBruto < 1500)
                    {
                        iR = (salarioBruto * 5) / 100;
                        std::cout << "Seu imposto de renda é de:" << iR << " \n";
                    }
                        else if (salarioBruto < 2500)
                        {
                            iR = (salarioBruto * 10) / 100;
                            std::cout << "Seu imposto de renda é de:" << iR << " \n";
                        }
                                else  {
                                    iR = (salarioBruto * 20) / 100;
                                    std::cout << "Seu imposto de renda é de:" << iR << " \n";
                                }
                                
                                
                    //Calculo do INSS, FGTS, e o total de doscontos a serem descontados no salario do usuario:
                                                 iNSS = (salarioBruto * 10) / 100;
                                                 std::cout << "Seu INSS é: " << iNSS << "\n";
                                                     fGTS = (salarioBruto * 11) / 100;
                                                     std::cout << "Seu FGTS é: " << fGTS << "\n";
                                                                      totalDosDescostos = iNSS + fGTS + iR;
                                                                                salarioLiquido = salarioBruto - totalDosDescostos;
        
        
        
        //Exibição dos valores dos descontos e o salário do usuario.
        std::cout << "O total de descostos para você é de: " << totalDosDescostos << "\n";
                                        
        std::cout << "Seu salario liquido é de: " << salarioLiquido;
        
    return 0;
}