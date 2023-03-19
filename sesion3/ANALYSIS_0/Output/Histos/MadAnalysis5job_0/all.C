// STL headers
#include <iostream>

// ROOT headers
#include <TAxis.h>
#include <TH1F.h>
#include <TLegend.h>
#include <TCanvas.h>
#include <TFile.h>
#include <THStack.h>
#include <TStyle.h>
#include <TSystem.h>
#include <TROOT.h>

// Including histograms
#include "selection_0.C"
#include "selection_1.C"
#include "selection_2.C"
#include "selection_3.C"
#include "selection_4.C"
#include "selection_5.C"
#include "selection_6.C"
#include "selection_7.C"
#include "selection_8.C"
#include "selection_9.C"
#include "selection_10.C"
#include "selection_11.C"
#include "selection_12.C"
#include "selection_13.C"
#include "selection_14.C"

// Main program
int main()
{
  std::cout << "BEGIN-STAMP" << std::endl;
  selection_0();
  selection_1();
  selection_2();
  selection_3();
  selection_4();
  selection_5();
  selection_6();
  selection_7();
  selection_8();
  selection_9();
  selection_10();
  selection_11();
  selection_12();
  selection_13();
  selection_14();
  std::cout << "END-STAMP" << std::endl;
  return 0;
}
