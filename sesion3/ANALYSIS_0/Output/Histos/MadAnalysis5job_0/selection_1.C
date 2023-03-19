void selection_1()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo3","canvas_plotflow_tempo3",0,0,700,500);
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
  TH1F* S2_M_0 = new TH1F("S2_M_0","S2_M_0",100,100.0,200.0);
  // Content
  S2_M_0->SetBinContent(0,140.900318144); // underflow
  S2_M_0->SetBinContent(1,0.156113544671);
  S2_M_0->SetBinContent(2,0.164284177434);
  S2_M_0->SetBinContent(3,0.183436085107);
  S2_M_0->SetBinContent(4,0.148897523165);
  S2_M_0->SetBinContent(5,0.14203071747);
  S2_M_0->SetBinContent(6,0.117856092866);
  S2_M_0->SetBinContent(7,0.149611746488);
  S2_M_0->SetBinContent(8,0.135005264167);
  S2_M_0->SetBinContent(9,0.116442763545);
  S2_M_0->SetBinContent(10,0.142530825531);
  S2_M_0->SetBinContent(11,0.127922320073);
  S2_M_0->SetBinContent(12,0.117369893867);
  S2_M_0->SetBinContent(13,0.11965924122);
  S2_M_0->SetBinContent(14,0.11037636116);
  S2_M_0->SetBinContent(15,0.109581380979);
  S2_M_0->SetBinContent(16,0.122228511962);
  S2_M_0->SetBinContent(17,0.138555306444);
  S2_M_0->SetBinContent(18,0.115731322035);
  S2_M_0->SetBinContent(19,0.103253403926);
  S2_M_0->SetBinContent(20,0.111951653784);
  S2_M_0->SetBinContent(21,0.0970898909967);
  S2_M_0->SetBinContent(22,0.112889265077);
  S2_M_0->SetBinContent(23,0.082879690504);
  S2_M_0->SetBinContent(24,0.0806274620836);
  S2_M_0->SetBinContent(25,0.168790348321);
  S2_M_0->SetBinContent(26,0.165776830559);
  S2_M_0->SetBinContent(27,0.0652659284245);
  S2_M_0->SetBinContent(28,0.0783349957295);
  S2_M_0->SetBinContent(29,0.102615610197);
  S2_M_0->SetBinContent(30,0.0520553258736);
  S2_M_0->SetBinContent(31,0.0904087642575);
  S2_M_0->SetBinContent(32,0.113239239563);
  S2_M_0->SetBinContent(33,0.0685687265825);
  S2_M_0->SetBinContent(34,0.0650572081931);
  S2_M_0->SetBinContent(35,0.0549067679363);
  S2_M_0->SetBinContent(36,0.0471999391769);
  S2_M_0->SetBinContent(37,0.0615513096267);
  S2_M_0->SetBinContent(38,0.0536576779462);
  S2_M_0->SetBinContent(39,0.0593467092074);
  S2_M_0->SetBinContent(40,0.0451426062229);
  S2_M_0->SetBinContent(41,0.060469381276);
  S2_M_0->SetBinContent(42,0.0775989955921);
  S2_M_0->SetBinContent(43,0.0618791139105);
  S2_M_0->SetBinContent(44,0.052944803381);
  S2_M_0->SetBinContent(45,0.058990552916);
  S2_M_0->SetBinContent(46,0.0422865278062);
  S2_M_0->SetBinContent(47,0.0642492462203);
  S2_M_0->SetBinContent(48,0.076098755706);
  S2_M_0->SetBinContent(49,0.054303901409);
  S2_M_0->SetBinContent(50,0.0182346485697);
  S2_M_0->SetBinContent(51,0.0423929391573);
  S2_M_0->SetBinContent(52,0.0406759707918);
  S2_M_0->SetBinContent(53,0.0316591612587);
  S2_M_0->SetBinContent(54,0.0546678411555);
  S2_M_0->SetBinContent(55,0.0278100376139);
  S2_M_0->SetBinContent(56,0.0649970479864);
  S2_M_0->SetBinContent(57,0.0325764568906);
  S2_M_0->SetBinContent(58,0.051277514252);
  S2_M_0->SetBinContent(59,0.0469325479919);
  S2_M_0->SetBinContent(60,0.035287459573);
  S2_M_0->SetBinContent(61,0.0461008422664);
  S2_M_0->SetBinContent(62,0.0405868403968);
  S2_M_0->SetBinContent(63,0.0394004957321);
  S2_M_0->SetBinContent(64,0.0389142124359);
  S2_M_0->SetBinContent(65,0.0401420594945);
  S2_M_0->SetBinContent(66,0.0147369689948);
  S2_M_0->SetBinContent(67,0.0307548193191);
  S2_M_0->SetBinContent(68,0.0304178828228);
  S2_M_0->SetBinContent(69,0.0294356501345);
  S2_M_0->SetBinContent(70,0.0359157277008);
  S2_M_0->SetBinContent(71,0.0242675989576);
  S2_M_0->SetBinContent(72,0.0223196502412);
  S2_M_0->SetBinContent(73,0.00745897769948);
  S2_M_0->SetBinContent(74,0.0240756595181);
  S2_M_0->SetBinContent(75,0.0370906641245);
  S2_M_0->SetBinContent(76,0.0323475895932);
  S2_M_0->SetBinContent(77,0.0255986147293);
  S2_M_0->SetBinContent(78,0.0200590707636);
  S2_M_0->SetBinContent(79,0.0075440337227);
  S2_M_0->SetBinContent(80,0.0186893428401);
  S2_M_0->SetBinContent(81,0.0293006057844);
  S2_M_0->SetBinContent(82,0.0192388856755);
  S2_M_0->SetBinContent(83,0.0307661151636);
  S2_M_0->SetBinContent(84,0.0199130396593);
  S2_M_0->SetBinContent(85,0.0360125572535);
  S2_M_0->SetBinContent(86,0.0249358380775);
  S2_M_0->SetBinContent(87,0.0210580842438);
  S2_M_0->SetBinContent(88,0.0219220758532);
  S2_M_0->SetBinContent(89,0.032850760458);
  S2_M_0->SetBinContent(90,0.0213262650139);
  S2_M_0->SetBinContent(91,0.0208849796415);
  S2_M_0->SetBinContent(92,0.0208032955122);
  S2_M_0->SetBinContent(93,0.0173004990882);
  S2_M_0->SetBinContent(94,0.0182903157279);
  S2_M_0->SetBinContent(95,0.0268498571116);
  S2_M_0->SetBinContent(96,0.0300592819083);
  S2_M_0->SetBinContent(97,0.0179327460509);
  S2_M_0->SetBinContent(98,0.015175430406);
  S2_M_0->SetBinContent(99,0.00754496661334);
  S2_M_0->SetBinContent(100,0.0369750362634);
  S2_M_0->SetBinContent(101,1.3763997775); // overflow
  S2_M_0->SetEntries(50720);
  // Style
  S2_M_0->SetLineColor(9);
  S2_M_0->SetLineStyle(1);
  S2_M_0->SetLineWidth(1);
  S2_M_0->SetFillColor(9);
  S2_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_4","mystack");
  stack->Add(S2_M_0);
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
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_1.png");

}
