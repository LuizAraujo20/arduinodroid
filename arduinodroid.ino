int Linhas[] = {16,17,18,19};

int a[] = {14,15,0,1};
int b[] = {2,3,4,5};
int c[] = {6,7,8,9};
int d[]= {10,11,12,13};

void setup (){
  for (int contb = 0; contb < 4; contb++) {      
    pinMode(Linhas[contb], OUTPUT);
    pinMode(a[contb], OUTPUT);
    pinMode(b[contb], OUTPUT);
    pinMode(c[contb], OUTPUT);
    pinMode(d[contb], OUTPUT);
  }
}

void acende(){
  for(int conta = 0; conta < 4; conta++){
    digitalWrite(Linhas[conta], HIGH);
    digitalWrite(a[conta], HIGH);
    digitalWrite(b[conta], HIGH);
    digitalWrite(c[conta], HIGH);
    digitalWrite(d[conta], HIGH);
  }
  delay(100);
}//fim acende
void apaga(){
  for(int conta = 0; conta < 4; conta++){
    digitalWrite(Linhas[conta], LOW);
    digitalWrite(a[conta], LOW);
    digitalWrite(b[conta], LOW);
    digitalWrite(c[conta], LOW);
    digitalWrite(d[conta], LOW);
  }
  delay(100);
}//fim apaga

void acenderfileira(){
  for(int cont = 0; cont < 6; cont++){
   for(int conta = 0; conta < 4; conta++){
      digitalWrite(Linhas[conta], HIGH);
    }
    for(int conta = 0; conta < 4; conta++){
      digitalWrite(a[conta], HIGH);
      digitalWrite(b[conta], HIGH);
      digitalWrite(c[conta], HIGH);
      digitalWrite(d[conta], HIGH);
      delay(100);
      digitalWrite(a[conta], LOW);
      digitalWrite(b[conta], LOW);
      digitalWrite(c[conta], LOW);
      digitalWrite(d[conta], LOW);
    }
    for(int conta = 3; conta > (-1); conta--){
      digitalWrite(d[conta], HIGH);
      digitalWrite(c[conta], HIGH);
      digitalWrite(b[conta], HIGH);
      digitalWrite(a[conta], HIGH);
      delay(100);
      digitalWrite(d[conta], LOW);
      digitalWrite(c[conta], LOW);
      digitalWrite(b[conta], LOW);
      digitalWrite(a[conta], LOW);
      delay(100);
    }
  }
}//fim acenderfileira

void diagonais(){
  for(int conta = 0; conta < 6; conta++){
    for(int cont = 0; cont < 4; cont++){
      digitalWrite(Linhas[cont], HIGH);
      digitalWrite(a[cont], HIGH);
      digitalWrite(b[cont], HIGH);
      digitalWrite(c[cont], HIGH);
      digitalWrite(d[cont], HIGH);
      delay(100);    
    }
    for(int cont = 0; cont < 4; cont++){
      digitalWrite(Linhas[cont], LOW);
      digitalWrite(a[cont], LOW);
      digitalWrite(b[cont], LOW);
      digitalWrite(c[cont], LOW);
      digitalWrite(d[cont], LOW);
      delay(100);    
    }
  }//FIM repetidor
  delay(200);  
   
  for(int conta = 0; conta < 6; conta++){
    for(int cont = 0; cont < 4; cont++){
      digitalWrite(Linhas[cont], HIGH);
      digitalWrite(a[cont], HIGH);
      digitalWrite(b[cont], HIGH);
      digitalWrite(c[cont], HIGH);
      digitalWrite(d[cont], HIGH);
      delay(100);    
    }
    for(int cont = 3; cont > (-1); cont--){
  
      digitalWrite(Linhas[cont], LOW);
      digitalWrite(a[cont], LOW);
      digitalWrite(b[cont], LOW);
      digitalWrite(c[cont], LOW);
      digitalWrite(d[cont], LOW);
      delay(100);    
    }
  }//FIM repetidor
  delay(200);
}//FIM diagonal

void percorrendo(){
        for(int conta = 0; conta < 4; conta++){
          digitalWrite(Linhas[conta], HIGH);
          for(int cont=0;cont <4; cont++){
            digitalWrite(a[cont], HIGH);
            delay(100);    
            digitalWrite(a[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(b[cont], HIGH);
            delay(100);    
            digitalWrite(b[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(c[cont], HIGH);
            delay(100);    
            digitalWrite(c[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(d[cont], HIGH);
            delay(100);    
            digitalWrite(d[cont], LOW);
          }
          digitalWrite(Linhas[conta], LOW);    
        }
        //CONTRARIO
        for(int conta = 3; conta > (-1); conta--){
          digitalWrite(Linhas[conta], HIGH);
          for(int cont=3;cont > (-1); cont--){
            digitalWrite(d[cont], HIGH);
            delay(100);    
            digitalWrite(d[cont], LOW);
          }
          for(int cont=3;cont > (-1); cont--){
            digitalWrite(c[cont], HIGH);
            delay(100);    
            digitalWrite(c[cont], LOW);
          }
          for(int cont=3;cont > (-1); cont--){
            digitalWrite(b[cont], HIGH);
            delay(100);    
            digitalWrite(b[cont], LOW);
          }
          for(int cont=3;cont > (-1); cont--){
            digitalWrite(a[cont], HIGH);
            delay(100);    
            digitalWrite(a[cont], LOW);
          }
          digitalWrite(Linhas[conta], LOW);    
        }
        //SERPENTEIA 1
        for(int conta = 0; conta < 4; conta++){
          digitalWrite(Linhas[conta], HIGH);
          for(int cont=0;cont <4; cont++){
            digitalWrite(a[cont], HIGH);
            delay(100);    
            digitalWrite(a[cont], LOW);
          }
          for(int cont=3;cont > (-1); cont--){
            digitalWrite(d[cont], HIGH);
            delay(100);    
            digitalWrite(d[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(b[cont], HIGH);
            delay(100);    
            digitalWrite(b[cont], LOW);
          }
          for(int cont=3;cont > (-1); cont--){
            digitalWrite(c[cont], HIGH);
            delay(100);    
            digitalWrite(c[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(c[cont], HIGH);
            delay(100);    
            digitalWrite(c[cont], LOW);
          }
          for(int cont=3;cont > (-1); cont--){
            digitalWrite(b[cont], HIGH);
            delay(100);    
            digitalWrite(b[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(d[cont], HIGH);
            delay(100);    
            digitalWrite(d[cont], LOW);
          }
          for(int cont=3;cont > (-1); cont--){
            digitalWrite(a[cont], HIGH);
            delay(100);    
            digitalWrite(a[cont], LOW);
          }
          digitalWrite(Linhas[conta], LOW);    
        }

        //SERPENTEIA CONTINUAMENTE

          digitalWrite(Linhas[0], HIGH);
          for(int cont=0;cont <4; cont++){
            digitalWrite(a[cont], HIGH);
            delay(100);    
            digitalWrite(a[cont], LOW);
          }
          for(int cont=3;cont >(-1); cont--){
            digitalWrite(b[cont], HIGH);
            delay(100);    
            digitalWrite(b[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(c[cont], HIGH);
            delay(100);    
            digitalWrite(c[cont], LOW);
          }
          for(int cont=3;cont >(-1); cont--){
            digitalWrite(d[cont], HIGH);
            delay(100);    
            digitalWrite(d[cont], LOW);
          }
          digitalWrite(Linhas[0], LOW);    


          digitalWrite(Linhas[1], HIGH);
          for(int cont=0;cont <4; cont++){
            digitalWrite(d[cont], HIGH);
            delay(100);    
            digitalWrite(d[cont], LOW);
          }
          for(int cont=3;cont >(-1); cont--){
            digitalWrite(c[cont], HIGH);
            delay(100);    
            digitalWrite(c[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(b[cont], HIGH);
            delay(100);    
            digitalWrite(b[cont], LOW);
          }
          for(int cont=3;cont >(-1); cont--){
            digitalWrite(a[cont], HIGH);
            delay(100);    
            digitalWrite(a[cont], LOW);
          }
          digitalWrite(Linhas[1], LOW);


          digitalWrite(Linhas[2], HIGH);
          for(int cont=0;cont <4; cont++){
            digitalWrite(a[cont], HIGH);
            delay(100);    
            digitalWrite(a[cont], LOW);
          }
          for(int cont=3;cont >(-1); cont--){
            digitalWrite(b[cont], HIGH);
            delay(100);    
            digitalWrite(b[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(c[cont], HIGH);
            delay(100);    
            digitalWrite(c[cont], LOW);
          }
          for(int cont=3;cont >(-1); cont--){
            digitalWrite(d[cont], HIGH);
            delay(100);    
            digitalWrite(d[cont], LOW);
          }
          digitalWrite(Linhas[2], LOW);    


          digitalWrite(Linhas[3], HIGH);
          for(int cont=0;cont <4; cont++){
            digitalWrite(d[cont], HIGH);
            delay(100);    
            digitalWrite(d[cont], LOW);
          }
          for(int cont=3;cont >(-1); cont--){
            digitalWrite(c[cont], HIGH);
            delay(100);    
            digitalWrite(c[cont], LOW);
          }
          for(int cont=0;cont <4; cont++){
            digitalWrite(b[cont], HIGH);
            delay(100);    
            digitalWrite(b[cont], LOW);
          }
          for(int cont=3;cont >(-1); cont--){
            digitalWrite(a[cont], HIGH);
            delay(100);    
            digitalWrite(a[cont], LOW);
          }

}//FIm void percorrendo
void cobrinha(){
  for(int cont = 0; cont < 4; cont++){
    digitalWrite(Linhas[cont], HIGH);
    for(int conta = 0; conta < 4; conta++){
      digitalWrite(a[conta], HIGH);
      delay(100);    
      digitalWrite(a[conta], LOW);
      delay(100);
    }
    digitalWrite(Linhas[cont], LOW);
      int contb = cont+1;
      digitalWrite(Linhas[contb], HIGH);
      for(int conta = 3; conta > (-1); conta--){
        digitalWrite(a[conta], HIGH);
        delay(100);    
        digitalWrite(a[conta], LOW);
        delay(100);
      }
      digitalWrite(Linhas[contb], LOW);
      cont++;
  }//FIM a
  for(int cont = 3; cont > (-1); cont--){
    digitalWrite(Linhas[cont], HIGH);
    for(int conta = 0; conta < 4; conta++){
      digitalWrite(b[conta], HIGH);
      delay(100);    
      digitalWrite(b[conta], LOW);
      delay(100);
    }
    digitalWrite(Linhas[cont], LOW);
      int contb = cont-1;
      digitalWrite(Linhas[contb], HIGH);
      for(int conta = 3; conta > (-1); conta--){
        digitalWrite(b[conta], HIGH);
        delay(100);    
        digitalWrite(b[conta], LOW);
        delay(100);
      }
      digitalWrite(Linhas[contb], LOW);
      cont--;
  }//FIM b
  for(int cont = 0; cont < 4; cont++){
    digitalWrite(Linhas[cont], HIGH);
    for(int conta = 0; conta < 4; conta++){
      digitalWrite(c[conta], HIGH);
      delay(100);    
      digitalWrite(c[conta], LOW);
      delay(100);
    }
    digitalWrite(Linhas[cont], LOW);
      int contb = cont+1;
      digitalWrite(Linhas[contb], HIGH);
      for(int conta = 3; conta > (-1); conta--){
        digitalWrite(c[conta], HIGH);
        delay(100);    
        digitalWrite(c[conta], LOW);
        delay(100);
      }
      digitalWrite(Linhas[contb], LOW);
      cont++;
  }//FIM c
  for(int cont = 3; cont > (-1); cont--){
    digitalWrite(Linhas[cont], HIGH);
    for(int conta = 0; conta < 4; conta++){
      digitalWrite(d[conta], HIGH);
      delay(100);    
      digitalWrite(d[conta], LOW);
      delay(100);
    }
    digitalWrite(Linhas[cont], LOW);
      int contb = cont-1;
      digitalWrite(Linhas[contb], HIGH);
      for(int conta = 3; conta > (-1); conta--){
        digitalWrite(d[conta], HIGH);
        delay(100);    
        digitalWrite(d[conta], LOW);
        delay(100);
      }
      digitalWrite(Linhas[contb], LOW);
      cont--;
  }//FIM d
  for(int cont = 0; cont < 4; cont++){
    digitalWrite(Linhas[cont], HIGH);
    for(int conta = 0; conta < 4; conta++){
      digitalWrite(c[conta], HIGH);
      delay(100);    
      digitalWrite(c[conta], LOW);
      delay(100);
    }
    digitalWrite(Linhas[cont], LOW);
      int contb = cont+1;
      digitalWrite(Linhas[contb], HIGH);
      for(int conta = 3; conta > (-1); conta--){
        digitalWrite(c[conta], HIGH);
        delay(100);    
        digitalWrite(c[conta], LOW);
        delay(100);
      }
      digitalWrite(Linhas[contb], LOW);
      cont++;
  }//FIM c
  for(int cont = 3; cont > (-1); cont--){
    digitalWrite(Linhas[cont], HIGH);
    for(int conta = 0; conta < 4; conta++){
      digitalWrite(b[conta], HIGH);
      delay(100);    
      digitalWrite(b[conta], LOW);
      delay(100);
    }
    digitalWrite(Linhas[cont], LOW);
      int contb = cont-1;
      digitalWrite(Linhas[contb], HIGH);
      for(int conta = 3; conta > (-1); conta--){
        digitalWrite(b[conta], HIGH);
        delay(100);    
        digitalWrite(b[conta], LOW);
        delay(100);
      }
      digitalWrite(Linhas[contb], LOW);
      cont--;
  }//FIM b
  for(int cont = 0; cont < 4; cont++){
    digitalWrite(Linhas[cont], HIGH);
    for(int conta = 0; conta < 4; conta++){
      digitalWrite(a[conta], HIGH);
      delay(100);    
      digitalWrite(a[conta], LOW);
      delay(100);
    }
    digitalWrite(Linhas[cont], LOW);
      int contb = cont+1;
      digitalWrite(Linhas[contb], HIGH);
      for(int conta = 3; conta > (-1); conta--){
        digitalWrite(a[conta], HIGH);
        delay(100);    
        digitalWrite(a[conta], LOW);
        delay(100);
      }
      digitalWrite(Linhas[contb], LOW);
      cont++;
  }//FIM a
  //DEU CERTO: vai e volta de 1 em 1 continuamente
}// fim void

void colunas(){
  for(int conta = 0; conta < 4; conta++){
    digitalWrite(Linhas[conta], HIGH);
    digitalWrite(a[2], LOW);
      digitalWrite(a[0], HIGH);
      digitalWrite(b[1], HIGH);
      digitalWrite(c[2], HIGH);
      digitalWrite(d[3], HIGH);
      delay(100);
      digitalWrite(a[0], LOW);
      digitalWrite(b[1], LOW);
      digitalWrite(c[2], LOW);
      digitalWrite(d[3], LOW);
      digitalWrite(a[1], HIGH);
      digitalWrite(b[2], HIGH);
      digitalWrite(c[3], HIGH);
      digitalWrite(d[0], HIGH);
      delay(100);
      digitalWrite(a[1], LOW);
      digitalWrite(b[2], LOW);
      digitalWrite(c[3], LOW);
      digitalWrite(d[0], LOW);
      digitalWrite(a[2], HIGH);
      digitalWrite(b[3], HIGH);
      digitalWrite(c[0], HIGH);
      digitalWrite(d[1], HIGH);
      delay(100);
      digitalWrite(a[2], LOW);
      digitalWrite(b[3], LOW);
      digitalWrite(c[0], LOW);
      digitalWrite(d[1], LOW);
      digitalWrite(a[3], HIGH);
      digitalWrite(b[0], HIGH);
      digitalWrite(c[1], HIGH);
      digitalWrite(d[2], HIGH);
      delay(100);
      digitalWrite(a[3], LOW);
      digitalWrite(b[0], LOW);
      digitalWrite(c[1], LOW);
      digitalWrite(d[2], LOW);
      digitalWrite(a[0], HIGH);
      digitalWrite(b[1], HIGH);
      digitalWrite(c[2], HIGH);
      digitalWrite(d[3], HIGH);
    }
// LINHA DIAGONAL
    for(int conta = 0; conta < 4; conta++){
    digitalWrite(Linhas[conta], HIGH);
    digitalWrite(a[2], LOW);
    for(int cont = 0; cont < 4; cont++){
      for(int cont = 0; cont < 4; cont++){
        digitalWrite(a[cont], HIGH);
        cont++;
        digitalWrite(b[cont], HIGH);
        cont++;
        digitalWrite(c[cont], HIGH);
        cont++;
        digitalWrite(d[cont], HIGH);
        cont++;
        delay(100);
      }
    }
  }

  for(int conta = 0; conta < 4; conta++){
    digitalWrite(Linhas[conta], HIGH);
    digitalWrite(a[2], LOW);
    digitalWrite(a[0], HIGH);
    digitalWrite(b[0], HIGH);
    digitalWrite(c[0], HIGH);
    digitalWrite(d[0], HIGH);
    delay(100);
    digitalWrite(a[0], LOW);
    digitalWrite(b[0], LOW);
    digitalWrite(c[0], LOW);
    digitalWrite(d[0], LOW);
    delay(100);

    digitalWrite(a[3], HIGH);
    digitalWrite(b[2], HIGH);
    digitalWrite(c[1], HIGH);
    digitalWrite(d[0], HIGH);
    delay(100);
    digitalWrite(a[3], LOW);
    digitalWrite(b[2], LOW);
    digitalWrite(c[1], LOW);
    digitalWrite(d[0], LOW);
    delay(100);

    
    digitalWrite(d[0], HIGH);
    digitalWrite(d[1], HIGH);
    digitalWrite(d[2], HIGH);
    digitalWrite(d[3], HIGH);
    delay(100);
    digitalWrite(d[0], LOW);
    digitalWrite(d[1], LOW);
    digitalWrite(d[2], LOW);
    digitalWrite(d[3], LOW);
    delay(100);
    
  }
}// void colunas



void loop(){
 
  acende();
  apaga();
  percorrendo();
  acende();
  apaga();
  acenderfileira();
  acende();
  apaga();
  diagonais();
  apaga();
  cobrinha();
  acende();
  apaga();
  apaga();
  colunas();
  
}
