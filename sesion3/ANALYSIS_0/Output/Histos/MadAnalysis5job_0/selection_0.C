void selection_0()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo1","canvas_plotflow_tempo1",0,0,700,500);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  canvas->SetHighLightColor(2);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(3);
  canvas->SetFrameBorderMode(0);
  canvas->SetFrameBorderSize(0);
  canvas->SetTickx(1);
  canvas->SetTicky(1);
  canvas->SetLeftMargin(0.14);
  canvas->SetRightMargin(0.05);
  canvas->SetBottomMargin(0.15);
  canvas->SetTopMargin(0.05);

  // Creating a new TH1F
  TH1F* S1_M_0 = new TH1F("S1_M_0","S1_M_0",50,100.0,200.0);
  // Content
  S1_M_0->SetBinContent(0,140.900318267); // underflow
  S1_M_0->SetBinContent(1,0.320397638086);
  S1_M_0->SetBinContent(2,0.332333580462);
  S1_M_0->SetBinContent(3,0.259886810562);
  S1_M_0->SetBinContent(4,0.284617067101);
  S1_M_0->SetBinContent(5,0.258973589301);
  S1_M_0->SetBinContent(6,0.245292214154);
  S1_M_0->SetBinContent(7,0.23003557448);
  S1_M_0->SetBinContent(8,0.231809893143);
  S1_M_0->SetBinContent(9,0.254286656799);
  S1_M_0->SetBinContent(10,0.215205057897);
  S1_M_0->SetBinContent(11,0.209979128157);
  S1_M_0->SetBinContent(12,0.163507180829);
  S1_M_0->SetBinContent(13,0.334567179171);
  S1_M_0->SetBinContent(14,0.143600924279);
  S1_M_0->SetBinContent(15,0.154670936206);
  S1_M_0->SetBinContent(16,0.203648003997);
  S1_M_0->SetBinContent(17,0.133625934892);
  S1_M_0->SetBinContent(18,0.102106735301);
  S1_M_0->SetBinContent(19,0.115208987673);
  S1_M_0->SetBinContent(20,0.104489315521);
  S1_M_0->SetBinContent(21,0.138068348889);
  S1_M_0->SetBinContent(22,0.114823917391);
  S1_M_0->SetBinContent(23,0.10127708081);
  S1_M_0->SetBinContent(24,0.140347973949);
  S1_M_0->SetBinContent(25,0.0725385416121);
  S1_M_0->SetBinContent(26,0.0830689100214);
  S1_M_0->SetBinContent(27,0.0863270024892);
  S1_M_0->SetBinContent(28,0.0928070800612);
  S1_M_0->SetBinContent(29,0.0838539712155);
  S1_M_0->SetBinContent(30,0.0822200076364);
  S1_M_0->SetBinContent(31,0.0866877108377);
  S1_M_0->SetBinContent(32,0.0783147082361);
  S1_M_0->SetBinContent(33,0.0548790341568);
  S1_M_0->SetBinContent(34,0.0611727021951);
  S1_M_0->SetBinContent(35,0.0653513778921);
  S1_M_0->SetBinContent(36,0.0465872379996);
  S1_M_0->SetBinContent(37,0.0315346260053);
  S1_M_0->SetBinContent(38,0.0694382537782);
  S1_M_0->SetBinContent(39,0.0456576911525);
  S1_M_0->SetBinContent(40,0.0262333765856);
  S1_M_0->SetBinContent(41,0.0485394802626);
  S1_M_0->SetBinContent(42,0.0506791436273);
  S1_M_0->SetBinContent(43,0.0609483869543);
  S1_M_0->SetBinContent(44,0.0429801545145);
  S1_M_0->SetBinContent(45,0.0541770339487);
  S1_M_0->SetBinContent(46,0.0416882695702);
  S1_M_0->SetBinContent(47,0.035590817657);
  S1_M_0->SetBinContent(48,0.0569091390694);
  S1_M_0->SetBinContent(49,0.0331081764857);
  S1_M_0->SetBinContent(50,0.044519986056);
  S1_M_0->SetBinContent(51,1.3763997787); // overflow
  S1_M_0->SetEntries(50720);
  // Style
  S1_M_0->SetLineColor(9);
  S1_M_0->SetLineStyle(1);
  S1_M_0->SetLineWidth(1);
  S1_M_0->SetFillColor(9);
  S1_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_2","mystack");
  stack->Add(S1_M_0);
  stack->Draw("");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( L_{int} = 0.001 fb^{-1} )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("M [ a_{1} a_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(0);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_0.png");

}
