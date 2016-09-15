%{
#include <iostream>
#include <string>
%}

letter_a	[a]
letter_b 	[b]
letter_c	[c]
letter_d	[d]
letter_e	[e]
letter_f	[f]
letter_g	[g]
letter_h	[h]
letter_i	[i]
letter_j	[j]
letter_k	[k]
letter_l	[l]
letter_m	[m]
letter_n	[n]
letter_o	[o]
letter_p	[p]
letter_q	[q]
letter_r	[r]
letter_s	[s]
letter_t	[t]
letter_u	[u]
letter_v	[v]
letter_w	[w]
letter_x	[x]
letter_y	[y]
letter_z	[z]

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
