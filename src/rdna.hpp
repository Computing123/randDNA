#include <random>
#include <iostream>
using namespace std;

string randDNA (int seed,string bases, int n){
  mt19937 eng1(seed);
  int min = 0;
  int max = bases.size()-1;
  
  if (bases == ""){
    return "";
  }
  
  uniform_int_distribution<> unifrm(min, max);
  int choose = 0;
  int i = 0;
  string dna = "";
  
  while (i < n){
    choose = unifrm(eng1);
    dna += bases[choose];
    ++i;
  }

  return dna;
}
