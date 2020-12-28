#include <stdio.h>









void InfixtoPostfix(char infix[],char postfix[]);
int precedence(char op , char c);
int is_digit(char c);









void InfixtoPostfix(char infix[],char postfix[]){
    int j;
    int i;
    for(i = 0,j = 0; (c = infix[i]) != '\0';i++ ){
        if(is_digit(c)){
            postfix[j++] = c;
        }
        else{
            if(!StackEmpty()){
                StackTop(&op,&stack);
                while(!StackEmpty() , precedence (op , c) ){
                    pop(&op,&stack);
                    postfix[j++] = op;
                    if(!StackEmpty(&stack))
                        StackTop(&op,&stack);
                }
            }
            push(c,&stack);
        }
    }


    while(!StackEmpty()){
        pop(&op,&stack);
        postfix[j++] = op;
    }

    postfix[j] = '\0';
}



int precedence(char op , char c){
    int x , y;
    if(op == '+' || op == '-' ){
        x = 0;
    }
    else if( op == '*' || op == '/'){
        x = 1;
    }
    else {
        x = 2;
    }


    if(c == '+' || c == '-' ){
        y = 0;
    }
    else if( c == '*' || c == '/'){
        y = 1;
    }
    else {
        y = 2;
    }




    if(x >= y ){
        return 1
    }
    return 0;

}




int is_digit(char c){
    if( c <= 57 && c >= 48  ){
        return 1;
    }
    return 0;
}

double ... (char postfix[]){
    for(int i  = 0;(c = postfix[i] )!= '\0';i++){
        if(if is_digit(c) ){
            push((double) c - '0',&stack);
        }
        else{
            pop(&op1,&stack);
            pop(&op2,&stack);
            val = operate(c,op1,op2);
            // operate is a function that return the value of the operation between two operands using binary operator
            push(val,&stack);
        }
    }

    pop(&val,stack);
    return val;
}









