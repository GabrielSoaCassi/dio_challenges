#include <iostream>
#include <map>
int main(){
    int operacaoEscolhida;
    bool operacaoValida;
    char operacoesDisponiveis[6] = {'+','-','/','*','bin','hexa'};
    while(!operacaoValida){
        std::cout <<"Escolha o número  da operação a ser efetuada \n0-Soma \n1-Substração \n2-Divisão \n3-Multiplicação"<< std::endl;
        std::cin>>operacaoEscolhida;
        if(operacaoEscolhida < 0){
            system("clear");
            std::cout <<"Opção invalida"<< std::endl;
        }
        else{
            double n1,n2,resultado;
    
            std::cout <<"Digite o n1: "<< std::endl;
            std::cin>>n1;
            std::cout <<"Digite o n2: "<< std::endl;
            std::cin>>n2;
            std::map<char,double> operacaoAtual;
            operacaoAtual['+'] = n1+n2;
            operacaoAtual['-'] = n1-n2;
            operacaoAtual['/'] = n1/n2;
            operacaoAtual['*'] = n1*n2;
            std::cout<<n1<<" "<<operacoesDisponiveis[operacaoEscolhida]<<" "<<n2<<" = "<<operacaoAtual[operacoesDisponiveis[operacaoEscolhida]]<<std::endl;
        }
        
    }
    std::cout << "" <<std::endl;
    return 0;    
}