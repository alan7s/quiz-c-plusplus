#include<iostream>
#include <locale.h>
#include<fstream>
#include<string>
using namespace std;

void pontuacao(){
	string texto;
	ifstream arqLei("usuarios.txt");
	if(arqLei.is_open()){
		while(!arqLei.eof()){
			getline(arqLei,texto);
			cout<<texto<<endl;
			cout<<endl;
		}
	}
	else{
		cout<<"Erro ao abrir o arquivo!";
	}
}
void startquiz() //fun��o para iniciar jogo
{
	cout<<"###########################################################################################";
	cout<<"\nPergunta: ";
}
void instrucao() //fun��o para dar isntru��es de como jogar
{
	cout<<"###########################################################################################";
	cout<<"\nPara jogar basta escolher a resposta certa, caso contr�rio o jogo volta ao in�cio!";
	cout<<"\n###########################################################################################";
}
void sobregame() //fun��o para falar sobre os desenvolvedores
{
	cout<<"###########################################################################################";
	cout<<"\nJogo desenvolvido pelo grupo: Alan, Darcy, Vitor.";
	cout<<"\n###########################################################################################";
}
void escolher() //MENU de escolha
{
	int opcao, duvida;
	cin>>opcao;
	switch(opcao){
		case 1:
			startquiz();//inicia jogo
			break;
		case 2:
			instrucao();//instru��es
			cout<<"\n###########################################################################################";
			cout<<"\nDigite 1 para jogar ou 5 para sair: ";
			escolher();
			break;
		case 3:
			sobregame();//sobre o jogo
			cout<<"\n###########################################################################################";
			cout<<"\nDigite 1 para jogar ou 5 para sair: ";
			escolher();
			break;
		case 4:
			pontuacao();
			cout<<"\n###########################################################################################";
			cout<<"\nDigite 1 para jogar ou 5 para sair: ";
			escolher();
			break;
		case 5:
			cout<<"\nSaindo...";
			exit(0);
		default:
			cout<<"\nVoc� escolheu uma op��o inv�lida!";
	        cout<<"\nDigite 1 para jogar ou 5 para sair: ";
			escolher();
			cout<<"###########################################################################################";
			break;
	}
}
void menu(){
	cout<<"\nSelecione uma das op��es abaixo: \n";
	cout<<"1-INICIAR\n";
	cout<<"2-INSTRU��ES\n";
	cout<<"3-Sobre o jogo\n";
	cout<<"4-Pontua��o global\n";
	cout<<"5-Sair do jogo\n";
	cout<<"Digite uma opc�o: ";
	escolher();
}
void cabecalho(){
cout<<"                         ..,co88oc.oo8888cc,.."<<endl;
cout<<"  o8o.               ..,o8889689ooo888o'88888888oooc.."<<endl;
cout<<".88888             .o888896888'.88888888o'?888888888889ooo...."<<endl;
cout<<"a888P          ..c6888969''..,'o888888888o.?8888888888''.ooo8888oo."<<endl;
cout<<"088P        ..atc88889''.,oo8o.86888888888o 88988889',o888888888888."<<endl;
cout<<"888t  ...coo688889''.ooo88o88b.'86988988889 8688888'o8888896989^888o"<<endl;
cout<<" 888888888888'..ooo888968888888  '9o688888' '888988 8888868888'o88888"<<endl;
cout<<"  ""G8889''ooo888888888888889 .d8o9889'''   ''8688o.'88888988'o888888o ."<<endl;
cout<<"           o8888''''''''''''   o8688'         88868. 888888.68988888''o8o."<<endl;
cout<<"           88888o.              '8888ooo.        '8888. 88888.8898888o'888o."<<endl;
cout<<"           '888888'               '888888'          '''8o'8888.8869888oo8888o ."<<endl;
cout<<"      . :.:::::::::::.: .     . :.::::::::.: .   . : ::.:.'8888 '888888888888o"<<endl;
cout<<"                                                        :..8888,. '88888888888."<<endl;
cout<<"                                                        .:o888.o8o.  '866o9888o"<<endl;
cout<<"                                                         :888.o8888.  '88.''89'."<<endl;
cout<<"                                                        . 89  888888    '88':."<<endl;
cout<<"                   QUIZ DO MILH�O                       :.     '8888o"<<endl;
cout<<"                                                         .       '8888.."<<endl;
cout<<"                                                                   888888o."<<endl;
cout<<"                                                                    '888889,"<<endl;
cout<<"                                                             . : :.:::::::.: :."<<endl;
	
}
void se(int certa, int resp, int *passa){
	if(certa==resp){
		cout<<"\nCerta resposta!\n";
		cout<<"###########################################################################################";
		cout<<"\nPr�xima pergunta: ";
		*passa=1;
	}
	else {
		cout<<"Resposta errada! ";
		cout<<"Passe a vez!\n";
		*passa=0;
	}
}
void perg1(){
	int certa;
	cout<<"Qual o pa�s com maior popula��o mundial?\n";
	cout<<"1 - Brasil\n";
	cout<<"2 - �ndia\n";
	cout<<"3 - China\n";
    cout<<"4 - R�ssia\n";
    cout<<"Digite sua resposta: ";
    //certa=3;
}
void perg2(){
	int certa;
	cout<<"Qual a capital brasileira mais populosa?\n";
	cout<<"1 - Belo Horizonte\n";
	cout<<"2 - Rio de Janeiro\n";
	cout<<"3 - S�o Paulo\n";
    cout<<"4 - Vit�ria\n";
    cout<<"Digite sua resposta: ";
	//certa=3;
}
void perg3(){
    int certa;
    cout<<"Qual o pa�s com maior extens�o territorial do mundo?\n";
    cout<<"1 - R�ssia\n";
    cout<<"2 - EUA\n";
    cout<<"3 - Canad�\n";
    cout<<"4 - Austr�lia\n";
    cout<<"Digite sua resposta: ";
    //certa=1;
}
void perg4(){
    int certa;
    cout<<"Qual continente mais frio do planeta?\n";
    cout<<"1 - �frica\n";
    cout<<"2 - Am�rica\n";
    cout<<"3 - Antartico\n";
    cout<<"4 - Europa\n";
    cout<<"Digite sua resposta: ";
    //certa=3;
}
void perg5(){
    int certa;
    cout<<"Qual o maior oceano do mundo?\n";
    cout<<"1 - Atl�ntico\n";
    cout<<"2 - �ndico\n";
    cout<<"3 - Pac�fico\n";
    cout<<"4 - Antartico\n";
    cout<<"Digite sua resposta: ";
    //certa=3;
}
void perg6(){
    int certa;
    cout<<"Qual o estado que faz parte da regi�o sul do Brasil?\n";
    cout<<"1 - Paran�\n";
    cout<<"2 - Par�\n";
    cout<<"3 - Rond�nia\n";
    cout<<"4 - Maranh�o\n";
    cout<<"Digite sua resposta: ";
    //certa=1;
}
void perg7(){
    int certa;
    cout<<"Qual pa�s faz fronteira com o estado do Rio Grande do Sul?\n";
    cout<<"1 - Argentina\n";
    cout<<"2 - Paraguai\n";
    cout<<"3 - Bolivia\n";
    cout<<"4 - Uruguai\n";
    cout<<"Digite sua resposta: ";
    //certa=4;
}
void perg8(){
    int certa;
    cout<<"Qual pa�s tem a internet mais veloz?\n";
    cout<<"1 - Cor�ia do Sul\n";
    cout<<"2 - EUA\n";
    cout<<"3 - Brasil\n";
    cout<<"4 - Chile\n";
    cout<<"Digite sua resposta: ";
    //certa=1;
}
void perg9(){
    int certa;
    cout<<"Quantos partidos pol�ticos existem no Brasil\n";
    cout<<"1 - 50\n";
    cout<<"2 - 24\n";
    cout<<"3 - 14\n";
    cout<<"4 - 35\n";
    cout<<"Digite sua resposta: ";
    //certa=4;
}
void pergfinal(){
    int certa;
    cout<<"Qual a metade de dois mais dois?\n";
    cout<<"1 - 1\n";
    cout<<"2 - 2\n";
    cout<<"3 - 3\n";
    cout<<"4 - 4\n";
    cout<<"Digite sua resposta: ";
    //certa=3;
}
void guarda(int *parcial, string nome){
	int pontos;
	ofstream participantes;
	participantes.open("usuarios.txt", ofstream::app);
	participantes << "Nome: " << nome << " - Pontos: "<< *parcial;
	participantes << "\n";
	participantes.close();
}
int main(){
	setlocale(LC_ALL, "Portuguese");
	int resp, certa, passa, parcial;
	string nome;
	passa=0;
	parcial=0;
	cabecalho(); //chama o cabe�alho
	cout<<"Digite seu nome para salvar sua pontua��o: ";
	cin>>nome;
	menu(); //chama o menu
	perg1(); //chama a primeira pergunta
    certa=3; //resposta da primeira pergunta
    cin>>resp; 
    se(certa, resp, &passa); //chama fun��o 'se' para conferir resposta, & e * = passagem de par�metros por refer�ncia
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################\n";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	perg2();
	certa=3;
	cin>>resp;
    se(certa, resp, &passa);
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	perg3();
	certa=1;
	cin>>resp;
    se(certa, resp, &passa);
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	perg4();
	certa=3;
	cin>>resp;
    se(certa, resp, &passa);
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	perg5();
	certa=3;
	cin>>resp;
    se(certa, resp, &passa);
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	perg6();
	certa=1;
	cin>>resp;
    se(certa, resp, &passa);
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	perg7();
	certa=4;
	cin>>resp;
    se(certa, resp, &passa);
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	perg8();
	certa=1;
	cin>>resp;
    se(certa, resp, &passa);
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	perg9();
	certa=4;
	cin>>resp;
    se(certa, resp, &passa);
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	pergfinal();
	certa=3;
	cin>>resp;
    se(certa, resp, &passa);
	while(passa==0){
		cout<<"Pontua��o total: ";
		cout<<parcial << endl;
		guarda(&parcial, nome);
		cout<<"###########################################################################################";
		cout<<"\nDigite o nome do pr�ximo jogador: ";
		cin>>nome;
		cout<<"###########################################################################################";
		menu();
		perg1();
		cin>>resp;
		se(certa, resp, &passa);
	}
	parcial++;
	cout<<"\n";
cout<<"                                                                .`"<<endl;                                         
cout<<"                                                                .  "<<endl;                                        
cout<<"                                                               `,   "<<endl;                                       
cout<<"                                                               ,`    "<<endl;                                      
cout<<"                                                               .       "<<endl;                                    
cout<<"                                                               .      "<<endl;                                     
cout<<"                                                              .`    "<<endl;                                       
cout<<"                                       `                      ,`   "<<endl;                                        
cout<<"                                       .                     `.    "<<endl;                                        
cout<<"                                       .                     .` `   "<<endl;                                       
cout<<"                                       .                     .` `    "<<endl;                                      
cout<<"                                       .              ,`    `````    "<<endl;                                      
cout<<"                                       `           ,.,`.    ``  `     "<<endl;                                     
cout<<"                                       .          :..:::    ``   ``   "<<endl;                                     
cout<<"                                       .          :;,.,..   ```  ``       "<<endl;                                 
cout<<"                                       .         ;,;;::...  ```` ``       "<<endl;                                 
cout<<"                                      `         ':;,,,,..,  `  ````      "<<endl;                                  
cout<<"                                      .         ''':,;:.`,` `` ` ``      "<<endl;                                  
cout<<"                                      .`        ';';:,:,,..``` ````      "<<endl;                                  
cout<<"                                      ,.       `'';;;;;:,,`.`` ` ``        "<<endl;                                
cout<<"                                      ,.`      ;''';;::.``.. ``` ``      "<<endl;                                  
cout<<"                                      :,.      ''''';::,,.., ``` ``       "<<endl;                                 
cout<<"                                      :,.      ;'''';;::,:..  `````       "<<endl;                                 
cout<<"                             `        :,.     `'''';;';,:... ``````       "<<endl;                                 
cout<<"                             .        :,,     '''''';::,,,``, `````      "<<endl;                                  
cout<<"                             .        ::,,    ;';';';;::,.,., `````   .  "<<endl;                                  
cout<<"                             .        ;:::    ';;;:;:;::,,,,,.`````   .    "<<endl;                                
cout<<"                             .`       ;:::,   '';:;,,,;,,,.,,``.`.`   . `  "<<endl;                                
cout<<"                             ,,       ;:;::   ;';:,::,,:,..,...``.`   `  `   "<<endl;                              
cout<<"                             ::       ;:;;:  `;;;:;:,,::,,,,.,```.`      .`  "<<endl;                              
cout<<"                             .:       ,;:;;, ;';;;:::::;,,,,,..``.`      ..  "<<endl;                              
cout<<"                             `:,      `;;:;: :::;,.:::::...,,.```.`      ..  "<<endl;                              
cout<<"                              :;       ;;;;;:;;::::,,,:.,,,,...``.`     ``.  "<<endl;                              
cout<<"                              ;;:      :;;:;;::;;::::,:,,,,,,..``.`     .`.  "<<endl;                              
cout<<"                              ';:,     ::::;;;;;:,,.`..,:.`.,,.``..     `.`  "<<endl;                              
cout<<"    ,                         '';;,    ;::::';;;,,::::,..,..,,.``..    ```   "<<endl;                              
cout<<"     :.                       +'';;  ` .::::'::::::::::::,.,,,```..    .``   "<<endl;                              
cout<<"      ;;                       +'';;   ;::::';::,,.``.,`.,,,,,.....   ..`.   "<<endl;                              
cout<<"       ;;.                     +++'';  `::::',;;::....,,,::,,,.....``..`.    "<<endl;                              
cout<<"        ;;,                    `++++''. :::;';:;:,:,..:,:.``,.,......`.``    "<<endl;                              
cout<<"        `,;:                    #+#++''`;;:;';;;:::,::,,.:,,,,,,....``.`     "<<endl;                              
cout<<"         ,,::.                   +++++'';;::',.:,,:,..:::,.,,.,,....```      "<<endl;                              
cout<<"          ,..:,                  ,+++#++';;;',,:::::::,`.:,,:,,,,,.``        "<<endl;                              
cout<<"          .:.`,,.                 ++++++';;:':,:,.:,:,:::,.:,,,,,,.. `      "<<endl;                               
cout<<"           ::.``,.`                ++++++;;;'::::,::::``.,,,,...,,.` `     "<<endl;                                
cout<<"           `:,.``.,`                +++++';;';:;:,,..:...::::,,,,,.. `    "<<endl;                                 
cout<<"            ;:,``` ..`              .++++';;'::::,::,:.,:..,`...,,.. `    "<<endl;                                 
cout<<"            ';:.`````..              ++++'';';;;:,:::``.,:::..,,,,.. `   "<<endl;                                  
cout<<"           ;';;,.``` ``.              ++''';;;:::::,;.,,..,:,:.,,,.` `   "<<endl;                                  
cout<<"           ;'';:,.```````.            ''''';;;;,,,:'````::::.,,,,,.`    "<<endl;                                   
cout<<"            ++';:,..``````.`          .'''';;::,...`::,:..,::,.,,,.`   "<<endl;                                    
cout<<"            `++';:,..```````,`         ;'';;;;;:::......::::.,,,,,.`   "<<endl;                                    
cout<<"             ,++';:.,.```````.``       ::';;;:::,::,,,:,::::,,`.,,.`          "<<endl;                             
cout<<"              :++'::.,....`......,,`   ::;;;;:;::,..,..,,,,:.,`.,,.``  ````      "<<endl;                          
cout<<"               ;+'';:,..,:,.....,.,,:: ,:;::;;;:::,,,:::::::,,.,,..`` ``...``.```    "<<endl;                      
cout<<"                #+'';;;;;,,.....,..,,;,,:'::;;:,,::::,,,,.,:.,`.,,,```..`.`.....``     "<<endl;                    
cout<<"      `.````     ++'++';;;;;..,,.,.,,:::;;,::;;::,..,,,,::::.,,,,,,.....    `..,,..       "<<endl;                 
cout<<"        '''+++++;##++++++'';:.,,,,,,,,::;;,::;:,,:::;:::,.,:,,,,:,,...,.      ,,,..``      "<<endl;                
cout<<"        ;''++###########++''':,,,,,,,,:;;;:::;:::,..,...:,,:.,,,:,,....`       `::,..`     "<<endl;                
cout<<"         ''++#############++++::,,,,,,:;;;;,:;..`::::::::,::,,,,:,,...,          ,;:...`      "<<endl;             
cout<<"          ,++####+.   ######+++:::::,,:;;;':,;,.,,..:..,,,,:.,,,:,,.,,,           `;;:.,.       "<<endl;           
cout<<"           '+#`        ##++++''';;:::::;';',:;.`,::::...::::::,::,:.,,,             ;:,,..         "<<endl;        
cout<<"                        #+#+#+++'';;;::;''',:;..,::::,::.,,:,:..:,,,,,,              `;:,..`          "<<endl;     
cout<<"                         ;#####++'';;;:;'''::;:,:,,,,..,::::,,,,::,,,,,                ;::,,.        "<<endl;      
cout<<"                          .######+''';;:'''::;::::::::::..::::,::,,,,,,                  ';:.,        "<<endl;     
cout<<"                            ######++'';;+'+;:;:::,,,..,,...,.,,;:,,,,,.                   :;;,,.        "<<endl;   
cout<<"                             #####+++'';''+;:::::::::,,::::::,::,,,,.,.                     ;;:..`      "<<endl;   
cout<<"                              '##+#+++'''++;::::;::;`.,:,,:,,,,;,,,,...                       ;:...`      "<<endl; 
cout<<"                               `##+++++''+#':,:::,,:``.,,::::,,:,,,,.,`                        `:...,      "<<endl;
cout<<"                                 ##++++''+#':,..::::,,..``...,:,,,,,,,`                          `,...`    "<<endl;
cout<<"                                  ##++++++#':,;:,,,:```....:,,,,,,,.,,                              ``   "<<endl;  
cout<<"                                  :#+++++'#';::,,::;,,,,::;``,:,,,,.,,                                    "<<endl; 
cout<<"                                   ##+++++#+;:;:...,...:,,:.`,:,,,,.,,                              "<<endl;       
cout<<"                                   '#+++++++';;::::::,,::::.,::,,,,.,.                         "<<endl;            
cout<<"                                   `##+#++++';;;:::,,,:```:.,,:,,,,.,`                    "<<endl;                 
cout<<"                                    +###+++#';;:,,,````,..::::,,,,,,,                   "<<endl;                   
cout<<"                                     ###+++#+';::::....,,,:`.,,,,,.,,                "<<endl;                      
cout<<"                                     ####++#+';;,,:,,,:::::,,,,,,,.,,              "<<endl;                        
cout<<"                                     :###++#+';:,.,,,,,,::,``:,,,,.,,             "<<endl;                         
cout<<"                                      ####+#+'';:::::,:,,:,`.,,,,,,,`            "<<endl;                          
cout<<"                                      ####++#'';:::;::;::::,.:,,,..,          "<<endl;                             
cout<<"                                      ;####+#';;;::::,:,,,:,.,,,,.,,        "<<endl;                               
cout<<"                                       ####+#+''::::::::,,;:,:,,,.,,       "<<endl;                                
cout<<"                                       ####+#+';::;::::,,,:,,,,,,.,,      "<<endl;                                 
cout<<"                                       ;#####++;:,:...:::,:,,:,,,,,.    "<<endl;                                   
cout<<"                                        ####+++';;:,:::.,.,,,,,,,,,`    "<<endl;                                   
cout<<"                                        ######+;,.,:,,:,,,:,,,,,,,,    "<<endl;                                    
cout<<"                                        ######+;:,,:::,:,,:,.,,,,,,     "<<endl;                                   
cout<<"                                         #####+';:;::::``.,,,,,,,,,   "<<endl;                                     
cout<<"                                         #####++';:;,.,,.,,,,:,,,,.   "<<endl;                                     
cout<<"                                         #####+++';;:::...,,,,:,,,`   "<<endl;                                     
cout<<"                                         .######+''';:;,:::,,,,,,:   "<<endl;                                      
cout<<"                                          #####+';:'::;::,,,,,:,,:   "<<endl;                                      
cout<<"                                          ######+';';;;.`.,,,,:::,   "<<endl;                                      
cout<<"                                          :######++';:;,..:,:::::    "<<endl;                                      
cout<<"                                           ######++';;;::::,::::.   "<<endl;                                       
cout<<"                                           ,#####++++'+';;;:::;,  "<<endl;                                         
cout<<"                                             ###@###++';;;:::;`   "<<endl;                                         
cout<<"                                               .####++'';;;;`    "<<endl;                                          
cout<<"                                                ##++''+++#';      "<<endl;                                         
cout<<"                                                #####+''''':    "<<endl;                                           
cout<<"                                                ####++'''';`   "<<endl;                                            
cout<<"                                                ####++''';:,  "<<endl;                                             
cout<<"                                                +####++'';:;  "<<endl;                                             
cout<<"                                                #####+'';;;'  "<<endl;                                             
cout<<"                                                ##++++++;    "<<endl;                                              
	cout<<"Pontua��o total: ";
	cout<<parcial << endl;
	cout<<"\n";
	cout<<"Parab�ns ganhou 1 milh�o! - Confira acima!\n";
	guarda(&parcial, nome);
	cout<<"Para jogar abra novamente o programa... at� mais!";
	return 0;
}
