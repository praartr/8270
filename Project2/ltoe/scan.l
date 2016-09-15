%{
// The remainder of wc is left as an exercise
#include <iostream>
#include <cstring>
  int words = 0;
  int chars = 0;
  int lines = 0;
%}
letter_a	[/][-][\\]
letter_b	[|][}]
letter_c	[(]
letter_d	[|][)]
letter_e        [[][-]
letter_f	[/][=]
letter_g	[(][_][+]
letter_h	[|][-][|]
letter_j	[_][|]
letter_k	[|][<]
letter_l	[|][_]
letter_m	[|][\\][/][|]
letter_o	[(][)]
letter_p	[|][>]
letter_n	[(][\\][)]
letter_q	[(][,][)]
letter_r	[|][?]
letter_s	[$]
letter_t	['][|][']
letter_u	[(][_][)]
letter_v	[\\][/]
letter_x	[>][<]
letter_y	[`][//]
letter_z	[7][_]

digit_zero	[z|Z][e|E][r|R][o|O]
digit_one 	[o|O][n|N][e|E]
digit_two 	[t|T][w|W][o|O]
digit_three 	[t|T][h|H][r|R][e|E][e|E]
digit_four 	[f|F][o|O][u|U][r|R]
digit_five 	[f|F][i|I][v|V][e|E]
digit_six 	[s|S][i|I][x|X]
digit_seven 	[s|S][e|E][v|V][e|E][n|N]
digit_eight 	[e|E][i|I][g|G][h|H][t|T]
digit_nine 	[n|N][i|I][n|N][e|E]
percent		[p|P][e|E][r|R][c|C][e|E][n|N][t|T]


%option noinput
%option nounput

%%

{letter_a}	{ std::cout << "a"; }
{letter_b}	{ std::cout << "b"; }
{letter_c}	{ std::cout << "c"; }
{letter_d}	{ std::cout << "d"; }
{letter_e}	{ std::cout << "e"; }
{letter_f}	{ std::cout << "f"; }
{letter_g}	{ std::cout << "g"; }
{letter_h}	{ std::cout << "h"; }
"]"		{ std::cout << "i"; }
{letter_j}	{ std::cout << "j"; }
{letter_k}	{ std::cout << "k"; }
{letter_l}	{ std::cout << "l"; }
{letter_m}	{ std::cout << "m"; }
{letter_n}  	{ std::cout << "n"; }
{letter_o}  	{ std::cout << "o"; }
{letter_p}   	{ std::cout << "p"; }
{letter_q}  	{ std::cout << "q"; } 
{letter_r}  	{ std::cout << "r"; }
{letter_s}  	{ std::cout << "s"; }
{letter_t}   	{ std::cout << "t"; }
{letter_u}  	{ std::cout << "u"; }
{letter_v}  	{ std::cout << "v"; }
"\\^/"   	{ std::cout << "w"; }
{letter_x}  	{ std::cout << "x"; } 
{letter_y}  	{ std::cout << "y"; }
{letter_z}  	{ std::cout << "z"; }

{digit_zero}	{ std::cout << "0"; }
{digit_one}	{ std::cout << "1"; }
{digit_two} 	{ std::cout << "2"; }
{digit_three}	{ std::cout << "3"; }
{digit_four} 	{ std::cout << "4"; }
{digit_five} 	{ std::cout << "5"; }
{digit_six} 	{ std::cout << "6"; }
{digit_seven} 	{ std::cout << "7"; }
{digit_eight} 	{ std::cout << "8"; }
{digit_nine} 	{ std::cout << "9"; }

{percent}	{ std::cout << "%"; }

.          	{ std::cout << yytext; }
%%
int yywrap() { return 1; }

