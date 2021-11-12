#include "sort.h"
#include "array.h"
#include "get_opt.h"
#include "unity.h"
#include "unity_fixture.h"

#define TAM 5
#define TAM1 10
#define TAM2 3

TEST_GROUP(Sort);

TEST_SETUP(Sort)
{}

TEST_TEAR_DOWN(Sort)
{}
/*Testes Validos*/

//Vetor de 5
  //Ordem Aleatoria
    //Positivos
      //SELECTION
      TEST(Sort, TestSort1)
      {
       int vet[TAM] = {47,37,46,31,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //INSERTION
      TEST(Sort, TestSort2)
      {
       int vet[TAM] = {47,37,46,31,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //SHELL
      TEST(Sort, TestSort3)
      {
       int vet[TAM] = {47,37,46,31,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //HEAP
      TEST(Sort, TestSort4)
      {
       int vet[TAM] = {47,37,46,31,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //MERGE
      TEST(Sort, TestSort5)
      {
       int vet[TAM] = {47,37,46,31,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //UNDEFINED
      TEST(Sort, TestSort6)
      {
       int vet[TAM] = {47,37,46,31,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
    //Negativos
      //SELECTION
      TEST(Sort, TestSort7)
      {
       int vet[TAM] = {-47,-37,-46,-31,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //INSERTION
      TEST(Sort, TestSort8)
      {
       int vet[TAM] = {-47,-37,-46,-31,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //SHELL
      TEST(Sort, TestSort9)
      {
       int vet[TAM] = {-47,-37,-46,-31,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //HEAP
      TEST(Sort, TestSort10)
      {
       int vet[TAM] = {-47,-37,-46,-31,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //MERGE
      TEST(Sort, TestSort11)
      {
       int vet[TAM] = {-47,-37,-46,-31,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //UNDEFINED
      TEST(Sort, TestSort12)
      {
       int vet[TAM] = {-47,-37,-46,-31,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
  //Ordem Crescente
    //Positivos
      //SELECTION
      TEST(Sort, TestSort13)
      {
       int vet[TAM] = {31,37,46,47,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //INSERTION
      TEST(Sort, TestSort14)
      {
       int vet[TAM] = {31,37,46,47,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //SHELL
      TEST(Sort, TestSort15)
      {
       int vet[TAM] = {31,37,46,47,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //HEAP
      TEST(Sort, TestSort16)
      {
       int vet[TAM] = {31,37,46,47,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //MERGE
      TEST(Sort, TestSort17)
      {
       int vet[TAM] = {31,37,46,47,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //UNDEFINED
      TEST(Sort, TestSort18)
      {
       int vet[TAM] = {31,37,46,47,47};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
    //Negativos
      //SELECTION
      TEST(Sort, TestSort19)
      {
       int vet[TAM] = {-47,-47,-46,-37,-31};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //INSERTION
      TEST(Sort, TestSort20)
      {
       int vet[TAM] = {-47,-47,-46,-37,-31};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //SHELL
      TEST(Sort, TestSort21)
      {
       int vet[TAM] = {-47,-47,-46,-37,-31};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //HEAP
      TEST(Sort, TestSort22)
      {
       int vet[TAM] = {-47,-47,-46,-37,-31};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //MERGE
      TEST(Sort, TestSort23)
      {
       int vet[TAM] = {-47,-47,-46,-37,-31};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //UNDEFINED
      TEST(Sort, TestSort24)
      {
       int vet[TAM] = {-47,-47,-46,-37,-31};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
  //Ordem Descrescente
    //Positivos
      TEST(Sort, TestSort25)
      {
       int vet[TAM] = {47,47,46,37,31};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //INSERTION
      TEST(Sort, TestSort26)
      {
       int vet[TAM] = {47,47,46,37,31};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //SHELL
      TEST(Sort, TestSort27)
      {
       int vet[TAM] = {47,47,46,37,31};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //HEAP
      TEST(Sort, TestSort28)
      {
       int vet[TAM] = {47,47,46,37,31};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //MERGE
      TEST(Sort, TestSort29)
      {
       int vet[TAM] = {47,47,46,37,31};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //UNDEFINED
      TEST(Sort, TestSort30)
      {
       int vet[TAM] = {47,47,46,37,31};
       int vet_exp[TAM] = {31,37,46,47,47};
       sort_array(vet,TAM,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
    //Negativos
      //SELECTION
      TEST(Sort, TestSort31)
      {
       int vet[TAM] = {-31,-37,-46,-47,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //INSERTION
      TEST(Sort, TestSort32)
      {
       int vet[TAM] = {-31,-37,-46,-47,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //SHELL
      TEST(Sort, TestSort33)
      {
       int vet[TAM] = {-31,-37,-46,-47,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //HEAP
      TEST(Sort, TestSort34)
      {
       int vet[TAM] = {-31,-37,-46,-47,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //MERGE
      TEST(Sort, TestSort35)
      {
       int vet[TAM] = {-31,-37,-46,-47,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
      //UNDEFINED
      TEST(Sort, TestSort36)
      {
       int vet[TAM] = {-31,-37,-46,-47,-47};
       int vet_exp[TAM] = {-47,-47,-46,-37,-31};
       sort_array(vet,TAM,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
      }
 
//Vetor de 10
  //Ordem Aleatoria
    //Positivos
      //SELECTION
      TEST(Sort, TestSort37)
      {
       int vet[TAM1] = {57,98,70,71,2,22,14,65,2,6};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //INSERTION
      TEST(Sort, TestSort38)
      {
       int vet[TAM1] = {57,98,70,71,2,22,14,65,2,6};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //SHELL
      TEST(Sort, TestSort39)
      {
       int vet[TAM1] = {57,98,70,71,2,22,14,65,2,6};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //HEAP
      TEST(Sort, TestSort40)
      {
       int vet[TAM1] = {57,98,70,71,2,22,14,65,2,6};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //MERGE
      TEST(Sort, TestSort41)
      {
       int vet[TAM1] = {57,98,70,71,2,22,14,65,2,6};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //UNDEFINED
      TEST(Sort, TestSort42)
      {
       int vet[TAM1] = {57,98,70,71,2,22,14,65,2,6};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
    //Negativos
      //SELECTION
      TEST(Sort, TestSort43)
      {
       int vet[TAM1] = {-57,-98,-70,-71,-2,-22,-14,-65,-2,-6};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //INSERTION
      TEST(Sort, TestSort44)
      {
       int vet[TAM1] = {-57,-98,-70,-71,-2,-22,-14,-65,-2,-6};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //SHELL
      TEST(Sort, TestSort45)
      {
       int vet[TAM1] = {-57,-98,-70,-71,-2,-22,-14,-65,-2,-6};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //HEAP
      TEST(Sort, TestSort46)
      {
       int vet[TAM1] = {-57,-98,-70,-71,-2,-22,-14,-65,-2,-6};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //MERGE
      TEST(Sort, TestSort47)
      {
       int vet[TAM1] = {-57,-98,-70,-71,-2,-22,-14,-65,-2,-6};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //UNDEFINED
      TEST(Sort, TestSort48)
      {
       int vet[TAM1] = {-57,-98,-70,-71,-2,-22,-14,-65,-2,-6};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
  //Ordem Crescente
    //Positivos
      //SELECTION
      TEST(Sort, TestSort49)
      {
       int vet[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //INSERTION
      TEST(Sort, TestSort50)
      {
       int vet[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //SHELL
      TEST(Sort, TestSort51)
      {
       int vet[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //HEAP
      TEST(Sort, TestSort52)
      {
       int vet[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //MERGE
      TEST(Sort, TestSort53)
      {
       int vet[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //UNDEFINED
      TEST(Sort, TestSort54)
      {
       int vet[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
    //Negativos
      //SELECTION
      TEST(Sort, TestSort55)
      {
       int vet[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //INSERTION
      TEST(Sort, TestSort56)
      {
       int vet[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //SHELL
      TEST(Sort, TestSort57)
      {
       int vet[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //HEAP
      TEST(Sort, TestSort58)
      {
       int vet[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //MERGE
      TEST(Sort, TestSort59)
      {
       int vet[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //UNDEFINED
      TEST(Sort, TestSort60)
      {
       int vet[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
  //Ordem Descrescente
    //Positivos
      TEST(Sort, TestSort61)
      {
       int vet[TAM1] = {98,71,70,65,57,22,14,6,2,2};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //INSERTION
      TEST(Sort, TestSort62)
      {
       int vet[TAM1] = {98,71,70,65,57,22,14,6,2,2};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //SHELL
      TEST(Sort, TestSort63)
      {
       int vet[TAM1] = {98,71,70,65,57,22,14,6,2,2};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //HEAP
      TEST(Sort, TestSort64)
      {
       int vet[TAM1] = {98,71,70,65,57,22,14,6,2,2};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //MERGE
      TEST(Sort, TestSort65)
      {
       int vet[TAM1] = {98,71,70,65,57,22,14,6,2,2};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //UNDEFINED
      TEST(Sort, TestSort66)
      {
       int vet[TAM1] = {98,71,70,65,57,22,14,6,2,2};
       int vet_exp[TAM1] = {2,2,6,14,22,57,65,70,71,98};
       sort_array(vet,TAM1,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
    //Negativos
      //SELECTION
      TEST(Sort, TestSort67)
      {
       int vet[TAM1] = {-2,-2,-6,-14,-22,-57,-65,-70,-71,-98};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,SELECTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //INSERTION
      TEST(Sort, TestSort68)
      {
       int vet[TAM1] = {-2,-2,-6,-14,-22,-57,-65,-70,-71,-98};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,INSERTION);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //SHELL
      TEST(Sort, TestSort69)
      {
       int vet[TAM1] = {-2,-2,-6,-14,-22,-57,-65,-70,-71,-98};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,SHELL);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //HEAP
      TEST(Sort, TestSort70)
      {
       int vet[TAM1] = {-2,-2,-6,-14,-22,-57,-65,-70,-71,-98};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,HEAP);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //MERGE
      TEST(Sort, TestSort71)
      {
       int vet[TAM1] = {-2,-2,-6,-14,-22,-57,-65,-70,-71,-98};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,MERGE);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }
      //UNDEFINED
      TEST(Sort, TestSort72)
      {
       int vet[TAM1] = {-2,-2,-6,-14,-22,-57,-65,-70,-71,-98};
       int vet_exp[TAM1] = {-98,-71,-70,-65,-57,-22,-14,-6,-2,-2};
       sort_array(vet,TAM1,UNDEFINED);
       TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
      }

/*Testes Invalidos*/
//Metodo inv
TEST(Sort, TestSort73)
{
 int vet[TAM2] = {0,7,4};
 int vet_exp[TAM2] = {0,4,7};
 sort_array(vet,TAM2,TAM1);
 TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM2);
}
//Tam inv
TEST(Sort, TestSort74)
{
 int vet[TAM2] = {0,7,4,2};
 int vet_exp[TAM2] = {0,2,4,7};
 sort_array(vet,TAM1,SELECTION);
 TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM1);
}
//vet inv
TEST(Sort, TestSort75)
{
 char vet[TAM2] = {'a','v','d'};
 char vet_exp[TAM2] = {'a','d','v'};
 sort_array(vet,TAM2,SELECTION);
 TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM2);
}

/*TEST(Sort, TestSort1)
{
 int vet[TAM] = {1,3,2,8,4};
 int vet_exp[5] = {1,2,3,4,8};
 sort_array(vet,TAM,SELECTION);
 TEST_ASSERT_EQUAL_INT_ARRAY(vet_exp,vet,TAM);
}*/
