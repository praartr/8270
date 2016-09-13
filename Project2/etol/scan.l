%{
// The remainder of wc is left as an exercise
#include <iostream>
#include <string>
%}

letter_a	[aA]
letter_b 	[bB]
letter_c	[cC]
letter_d	[dD]
letter_e	[eE]
letter_f	[fF]
letter_g	[gG]
letter_h	[hH]
letter_i	[iI]
letter_j	[jJ]
letter_k	[kK]
letter_l	[lL]
letter_m	[mM]
letter_n	[nN]
letter_o	[oO]
letter_p	[pP]
letter_q	[qQ]
letter_r	[rR]
letter_s	[sS]
letter_t	[tT]
letter_u	[uU]
letter_v	[vV]
letter_w	[wW]
letter_x	[xX]
letter_y	[yY]
letter_z	[zZ]
digit_zero	[0]
digit_one	[1]
digit_two	[2]
digit_three	[3]
digit_four	[4]
digit_five	[5]
digit_six	[6]
digit_seven	[7]
digit_eight	[8]
digit_nine	[9]

percent		[%]

%option noinput
%option nounput

%%
{letter_a}	{ std::cout << "/-\\";    }
{letter_b}	{ std::cout << "|}";      }
{letter_c}	{ std::cout << "(";       }
{letter_d}	{ std::cout << "|)";      }
{letter_e}	{ std::cout << "[-";      }
{letter_f}	{ std::cout << "/=";      }
{letter_g}	{ std::cout << "(_+";     }
{letter_h}	{ std::cout << "|-|";     }
{letter_i}	{ std::cout << "]";       }
{letter_j}	{ std::cout << "_|";      }
{letter_k}	{ std::cout << "|<";      }
{letter_l}	{ std::cout << "|_";      }
{letter_m}	{ std::cout << "|\\/|";   }
{letter_n}	{ std::cout << "(\\)";    }
{letter_o}	{ std::cout << "()";      }
{letter_p}	{ std::cout << "|>";      }
{letter_q}	{ std::cout << "(,)";     } 
{letter_r}	{ std::cout << "|?";      }
{letter_s}	{ std::cout << "$";       }
{letter_t}	{ std::cout << "'|'";     }
{letter_u}	{ std::cout << "(_)";     }
{letter_v}	{ std::cout << "\\/";     }
{letter_w}	{ std::cout << "\\^/";    }
{letter_x}	{ std::cout << "><";      }
{letter_y}	{ std::cout << "`/";      }
{letter_z}	{ std::cout << "7_";      }

{digit_zero}	{ std::cout << "zero";    }
{digit_one}	{ std::cout << "one";     }
{digit_two}	{ std::cout << "two";     }
{digit_three}	{ std::cout << "three";   }
{digit_four}	{ std::cout << "four";    }
{digit_five}	{ std::cout << "five";    }
{digit_six}	{ std::cout << "six";     }
{digit_seven}	{ std::cout << "seven";   }
{digit_eight}	{ std::cout << "eight";   }
{digit_nine}	{ std::cout << "nine";    }

{percent}       { std::cout << "percent"; }

.	        { std::cout << yytext;    }
%%

int yywrap() { return 1; }
