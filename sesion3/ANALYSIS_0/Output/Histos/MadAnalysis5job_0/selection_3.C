void selection_3()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo7","canvas_plotflow_tempo7",0,0,700,500);
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
  TH1F* S4_M_0 = new TH1F("S4_M_0","S4_M_0",100,100.0,200.0);
  // Content
  S4_M_0->SetBinContent(0,1.79621278971); // underflow
  S4_M_0->SetBinContent(1,0.0576171960983);
  S4_M_0->SetBinContent(2,0.0521087489815);
  S4_M_0->SetBinContent(3,0.0604802565382);
  S4_M_0->SetBinContent(4,0.0656914406321);
  S4_M_0->SetBinContent(5,0.0535197119625);
  S4_M_0->SetBinContent(6,0.0453060545294);
  S4_M_0->SetBinContent(7,0.0631747938775);
  S4_M_0->SetBinContent(8,0.0487476086463);
  S4_M_0->SetBinContent(9,0.0584998925237);
  S4_M_0->SetBinContent(10,0.0637370032484);
  S4_M_0->SetBinContent(11,0.0701624102533);
  S4_M_0->SetBinContent(12,0.0501328740303);
  S4_M_0->SetBinContent(13,0.0372703792945);
  S4_M_0->SetBinContent(14,0.0583169860978);
  S4_M_0->SetBinContent(15,0.0562991521469);
  S4_M_0->SetBinContent(16,0.0558679959401);
  S4_M_0->SetBinContent(17,0.0623243912238);
  S4_M_0->SetBinContent(18,0.0483415316452);
  S4_M_0->SetBinContent(19,0.0425927364151);
  S4_M_0->SetBinContent(20,0.0405597862305);
  S4_M_0->SetBinContent(21,0.0440923812995);
  S4_M_0->SetBinContent(22,0.0533155970029);
  S4_M_0->SetBinContent(23,0.02947970156);
  S4_M_0->SetBinContent(24,0.0374163883685);
  S4_M_0->SetBinContent(25,0.0932192699875);
  S4_M_0->SetBinContent(26,0.101194388675);
  S4_M_0->SetBinContent(27,0.0356249085632);
  S4_M_0->SetBinContent(28,0.0387395855814);
  S4_M_0->SetBinContent(29,0.0545997668492);
  S4_M_0->SetBinContent(30,0.0210702797412);
  S4_M_0->SetBinContent(31,0.0444580338276);
  S4_M_0->SetBinContent(32,0.0622140656223);
  S4_M_0->SetBinContent(33,0.0328620733323);
  S4_M_0->SetBinContent(34,0.0408655693124);
  S4_M_0->SetBinContent(35,0.0329350206109);
  S4_M_0->SetBinContent(36,0.0268070140492);
  S4_M_0->SetBinContent(37,0.0389869650337);
  S4_M_0->SetBinContent(38,0.0289722541807);
  S4_M_0->SetBinContent(39,0.0300962148548);
  S4_M_0->SetBinContent(40,0.0265058803543);
  S4_M_0->SetBinContent(41,0.039061446839);
  S4_M_0->SetBinContent(42,0.0437421656524);
  S4_M_0->SetBinContent(43,0.0390794259956);
  S4_M_0->SetBinContent(44,0.0178324741297);
  S4_M_0->SetBinContent(45,0.0391236753337);
  S4_M_0->SetBinContent(46,0.0204492544798);
  S4_M_0->SetBinContent(47,0.0236059225625);
  S4_M_0->SetBinContent(48,0.0362309550113);
  S4_M_0->SetBinContent(49,0.0332627451348);
  S4_M_0->SetBinContent(50,0.0);
  S4_M_0->SetBinContent(51,0.0148953326937);
  S4_M_0->SetBinContent(52,0.0245638795083);
  S4_M_0->SetBinContent(53,0.0143281968049);
  S4_M_0->SetBinContent(54,0.0390310769516);
  S4_M_0->SetBinContent(55,0.0123392119566);
  S4_M_0->SetBinContent(56,0.0350837932091);
  S4_M_0->SetBinContent(57,0.0181320274911);
  S4_M_0->SetBinContent(58,0.0387853007362);
  S4_M_0->SetBinContent(59,0.0212105790015);
  S4_M_0->SetBinContent(60,0.0230568368308);
  S4_M_0->SetBinContent(61,0.0272568365141);
  S4_M_0->SetBinContent(62,0.0165660017283);
  S4_M_0->SetBinContent(63,0.0204878901985);
  S4_M_0->SetBinContent(64,0.0273207369559);
  S4_M_0->SetBinContent(65,0.027230841173);
  S4_M_0->SetBinContent(66,0.00616310141718);
  S4_M_0->SetBinContent(67,0.0185681033447);
  S4_M_0->SetBinContent(68,0.0147549303681);
  S4_M_0->SetBinContent(69,0.0210434667493);
  S4_M_0->SetBinContent(70,0.0209749558563);
  S4_M_0->SetBinContent(71,0.012349312349);
  S4_M_0->SetBinContent(72,0.0151549448435);
  S4_M_0->SetBinContent(73,0.00308711279543);
  S4_M_0->SetBinContent(74,0.00895665466686);
  S4_M_0->SetBinContent(75,0.0093011765327);
  S4_M_0->SetBinContent(76,0.0116964490932);
  S4_M_0->SetBinContent(77,0.0208652440655);
  S4_M_0->SetBinContent(78,0.0120723165306);
  S4_M_0->SetBinContent(79,0.00310966804815);
  S4_M_0->SetBinContent(80,0.00619807030411);
  S4_M_0->SetBinContent(81,0.0154442832955);
  S4_M_0->SetBinContent(82,0.0156814753225);
  S4_M_0->SetBinContent(83,0.0150124880843);
  S4_M_0->SetBinContent(84,0.0132969948366);
  S4_M_0->SetBinContent(85,0.0207707011861);
  S4_M_0->SetBinContent(86,0.0145001348001);
  S4_M_0->SetBinContent(87,0.0171642908003);
  S4_M_0->SetBinContent(88,0.0117105255131);
  S4_M_0->SetBinContent(89,0.0184126191407);
  S4_M_0->SetBinContent(90,0.00620854173135);
  S4_M_0->SetBinContent(91,0.00861575153572);
  S4_M_0->SetBinContent(92,0.0125993440131);
  S4_M_0->SetBinContent(93,0.00939576063826);
  S4_M_0->SetBinContent(94,0.012556597137);
  S4_M_0->SetBinContent(95,0.0218851226007);
  S4_M_0->SetBinContent(96,0.0215057417841);
  S4_M_0->SetBinContent(97,0.0121357818081);
  S4_M_0->SetBinContent(98,0.00625344152565);
  S4_M_0->SetBinContent(99,0.00311002992162);
  S4_M_0->SetBinContent(100,0.0188070245772);
  S4_M_0->SetBinContent(101,0.893614926702); // overflow
  S4_M_0->SetEntries(1968);
  // Style
  S4_M_0->SetLineColor(9);
  S4_M_0->SetLineStyle(1);
  S4_M_0->SetLineWidth(1);
  S4_M_0->SetFillColor(9);
  S4_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_8","mystack");
  stack->Add(S4_M_0);
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
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_3.png");

}
