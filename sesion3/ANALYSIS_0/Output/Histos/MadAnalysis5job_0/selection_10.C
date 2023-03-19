void selection_10()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo21","canvas_plotflow_tempo21",0,0,700,500);
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
  TH1F* S11_M_0 = new TH1F("S11_M_0","S11_M_0",100,105.0,160.0);
  // Content
  S11_M_0->SetBinContent(0,2.08563013213); // underflow
  S11_M_0->SetBinContent(1,0.0339796456359);
  S11_M_0->SetBinContent(2,0.0172116558465);
  S11_M_0->SetBinContent(3,0.0280592808634);
  S11_M_0->SetBinContent(4,0.0407266622935);
  S11_M_0->SetBinContent(5,0.0258125732839);
  S11_M_0->SetBinContent(6,0.0352183981324);
  S11_M_0->SetBinContent(7,0.0317483062279);
  S11_M_0->SetBinContent(8,0.0340403625103);
  S11_M_0->SetBinContent(9,0.0267329229182);
  S11_M_0->SetBinContent(10,0.0350595631555);
  S11_M_0->SetBinContent(11,0.0440342775828);
  S11_M_0->SetBinContent(12,0.023239309237);
  S11_M_0->SetBinContent(13,0.032296636175);
  S11_M_0->SetBinContent(14,0.0172646840544);
  S11_M_0->SetBinContent(15,0.037557429258);
  S11_M_0->SetBinContent(16,0.023367476581);
  S11_M_0->SetBinContent(17,0.032809946846);
  S11_M_0->SetBinContent(18,0.0299379539448);
  S11_M_0->SetBinContent(19,0.0290493942093);
  S11_M_0->SetBinContent(20,0.0293687132069);
  S11_M_0->SetBinContent(21,0.044317134391);
  S11_M_0->SetBinContent(22,0.031642675815);
  S11_M_0->SetBinContent(23,0.0234943842389);
  S11_M_0->SetBinContent(24,0.0283009802883);
  S11_M_0->SetBinContent(25,0.0174790139339);
  S11_M_0->SetBinContent(26,0.0201030960121);
  S11_M_0->SetBinContent(27,0.0284811612204);
  S11_M_0->SetBinContent(28,0.0120140073967);
  S11_M_0->SetBinContent(29,0.0290648081876);
  S11_M_0->SetBinContent(30,0.032277969916);
  S11_M_0->SetBinContent(31,0.0240511884385);
  S11_M_0->SetBinContent(32,0.0179382405509);
  S11_M_0->SetBinContent(33,0.0145493480182);
  S11_M_0->SetBinContent(34,0.0139940714744);
  S11_M_0->SetBinContent(35,0.0290167568853);
  S11_M_0->SetBinContent(36,0.0366075571601);
  S11_M_0->SetBinContent(37,0.113421778154);
  S11_M_0->SetBinContent(38,0.0302252769132);
  S11_M_0->SetBinContent(39,0.0170915733974);
  S11_M_0->SetBinContent(40,0.0240900783868);
  S11_M_0->SetBinContent(41,0.0210832853211);
  S11_M_0->SetBinContent(42,0.0236664802759);
  S11_M_0->SetBinContent(43,0.0289497186765);
  S11_M_0->SetBinContent(44,0.0196398727544);
  S11_M_0->SetBinContent(45,0.015094130231);
  S11_M_0->SetBinContent(46,0.0150737576697);
  S11_M_0->SetBinContent(47,0.0292801000093);
  S11_M_0->SetBinContent(48,0.0262710074438);
  S11_M_0->SetBinContent(49,0.0359466799777);
  S11_M_0->SetBinContent(50,0.017666853758);
  S11_M_0->SetBinContent(51,0.0212719061506);
  S11_M_0->SetBinContent(52,0.0226932238216);
  S11_M_0->SetBinContent(53,0.0242765577498);
  S11_M_0->SetBinContent(54,0.0116815876626);
  S11_M_0->SetBinContent(55,0.0151492472276);
  S11_M_0->SetBinContent(56,0.0176817020227);
  S11_M_0->SetBinContent(57,0.0212900754062);
  S11_M_0->SetBinContent(58,0.0237698203503);
  S11_M_0->SetBinContent(59,0.0176104908171);
  S11_M_0->SetBinContent(60,0.0144141493349);
  S11_M_0->SetBinContent(61,0.0178903358302);
  S11_M_0->SetBinContent(62,0.0152590460567);
  S11_M_0->SetBinContent(63,0.00826352308812);
  S11_M_0->SetBinContent(64,0.0212594970965);
  S11_M_0->SetBinContent(65,0.0268814971785);
  S11_M_0->SetBinContent(66,0.0147544821885);
  S11_M_0->SetBinContent(67,0.0238095348204);
  S11_M_0->SetBinContent(68,0.026056837888);
  S11_M_0->SetBinContent(69,0.0212363119996);
  S11_M_0->SetBinContent(70,0.011742155665);
  S11_M_0->SetBinContent(71,0.00916438881255);
  S11_M_0->SetBinContent(72,0.00919084222255);
  S11_M_0->SetBinContent(73,0.0299328235865);
  S11_M_0->SetBinContent(74,0.0143531507489);
  S11_M_0->SetBinContent(75,0.0152447131182);
  S11_M_0->SetBinContent(76,0.0113919216779);
  S11_M_0->SetBinContent(77,0.0183117237644);
  S11_M_0->SetBinContent(78,0.0179015149726);
  S11_M_0->SetBinContent(79,0.0214181442657);
  S11_M_0->SetBinContent(80,0.0149277233948);
  S11_M_0->SetBinContent(81,0.0);
  S11_M_0->SetBinContent(82,0.0);
  S11_M_0->SetBinContent(83,0.00305618879667);
  S11_M_0->SetBinContent(84,0.0148979398326);
  S11_M_0->SetBinContent(85,0.00933626955776);
  S11_M_0->SetBinContent(86,0.014702512117);
  S11_M_0->SetBinContent(87,0.00919405785784);
  S11_M_0->SetBinContent(88,0.0175091295952);
  S11_M_0->SetBinContent(89,0.0210471552308);
  S11_M_0->SetBinContent(90,0.00615572912102);
  S11_M_0->SetBinContent(91,0.00925872098552);
  S11_M_0->SetBinContent(92,0.0289480467294);
  S11_M_0->SetBinContent(93,0.00613573446566);
  S11_M_0->SetBinContent(94,0.0119720712982);
  S11_M_0->SetBinContent(95,0.0154055704641);
  S11_M_0->SetBinContent(96,0.0264472948003);
  S11_M_0->SetBinContent(97,0.0150353830477);
  S11_M_0->SetBinContent(98,0.00926758688596);
  S11_M_0->SetBinContent(99,0.00616158551663);
  S11_M_0->SetBinContent(100,0.0168952409981);
  S11_M_0->SetBinContent(101,1.47183933243); // overflow
  S11_M_0->SetEntries(1968);
  // Style
  S11_M_0->SetLineColor(9);
  S11_M_0->SetLineStyle(1);
  S11_M_0->SetLineWidth(1);
  S11_M_0->SetFillColor(9);
  S11_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_22","mystack");
  stack->Add(S11_M_0);
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
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_10.png");

}
