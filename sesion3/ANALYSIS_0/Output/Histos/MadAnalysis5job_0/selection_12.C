void selection_12()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo25","canvas_plotflow_tempo25",0,0,700,500);
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
  TH1F* S13_M_0 = new TH1F("S13_M_0","S13_M_0",100,115.0,135.0);
  // Content
  S13_M_0->SetBinContent(0,0.0); // underflow
  S13_M_0->SetBinContent(1,0.0);
  S13_M_0->SetBinContent(2,0.0);
  S13_M_0->SetBinContent(3,0.0);
  S13_M_0->SetBinContent(4,0.0);
  S13_M_0->SetBinContent(5,0.0);
  S13_M_0->SetBinContent(6,0.0);
  S13_M_0->SetBinContent(7,0.0);
  S13_M_0->SetBinContent(8,0.0);
  S13_M_0->SetBinContent(9,0.0);
  S13_M_0->SetBinContent(10,0.0);
  S13_M_0->SetBinContent(11,0.0);
  S13_M_0->SetBinContent(12,0.0);
  S13_M_0->SetBinContent(13,0.0);
  S13_M_0->SetBinContent(14,0.0);
  S13_M_0->SetBinContent(15,0.0);
  S13_M_0->SetBinContent(16,0.0);
  S13_M_0->SetBinContent(17,0.0);
  S13_M_0->SetBinContent(18,0.0);
  S13_M_0->SetBinContent(19,0.0);
  S13_M_0->SetBinContent(20,0.0);
  S13_M_0->SetBinContent(21,0.0);
  S13_M_0->SetBinContent(22,0.0);
  S13_M_0->SetBinContent(23,0.0);
  S13_M_0->SetBinContent(24,0.0);
  S13_M_0->SetBinContent(25,0.0);
  S13_M_0->SetBinContent(26,0.0);
  S13_M_0->SetBinContent(27,0.0118313054334);
  S13_M_0->SetBinContent(28,0.0108784704182);
  S13_M_0->SetBinContent(29,0.00886077605173);
  S13_M_0->SetBinContent(30,0.0118512892379);
  S13_M_0->SetBinContent(31,0.0173623759228);
  S13_M_0->SetBinContent(32,0.00847835009043);
  S13_M_0->SetBinContent(33,0.00594522468743);
  S13_M_0->SetBinContent(34,0.0118146124157);
  S13_M_0->SetBinContent(35,0.00890423969872);
  S13_M_0->SetBinContent(36,0.00289638405386);
  S13_M_0->SetBinContent(37,0.00883182209032);
  S13_M_0->SetBinContent(38,0.00593724018767);
  S13_M_0->SetBinContent(39,0.00298451578933);
  S13_M_0->SetBinContent(40,0.00838143540522);
  S13_M_0->SetBinContent(41,0.00543519559355);
  S13_M_0->SetBinContent(42,0.00593454259962);
  S13_M_0->SetBinContent(43,0.00242509782787);
  S13_M_0->SetBinContent(44,0.0170942726606);
  S13_M_0->SetBinContent(45,0.00595827054805);
  S13_M_0->SetBinContent(46,0.00847149334487);
  S13_M_0->SetBinContent(47,0.0167355723922);
  S13_M_0->SetBinContent(48,0.00846530874082);
  S13_M_0->SetBinContent(49,0.010849969814);
  S13_M_0->SetBinContent(50,0.0472793131156);
  S13_M_0->SetBinContent(51,0.0555111744809);
  S13_M_0->SetBinContent(52,0.0118976760238);
  S13_M_0->SetBinContent(53,0.01190497936);
  S13_M_0->SetBinContent(54,0.00594065277189);
  S13_M_0->SetBinContent(55,0.0144010061607);
  S13_M_0->SetBinContent(56,0.00596774368336);
  S13_M_0->SetBinContent(57,0.00539166879232);
  S13_M_0->SetBinContent(58,0.0);
  S13_M_0->SetBinContent(59,0.0177646954683);
  S13_M_0->SetBinContent(60,0.00595904193193);
  S13_M_0->SetBinContent(61,0.00886381422156);
  S13_M_0->SetBinContent(62,0.00891765997374);
  S13_M_0->SetBinContent(63,0.0089609025809);
  S13_M_0->SetBinContent(64,0.00594473073109);
  S13_M_0->SetBinContent(65,0.00546335336049);
  S13_M_0->SetBinContent(66,0.020003001112);
  S13_M_0->SetBinContent(67,0.011443892543);
  S13_M_0->SetBinContent(68,0.0);
  S13_M_0->SetBinContent(69,0.00892008690078);
  S13_M_0->SetBinContent(70,0.0134024587566);
  S13_M_0->SetBinContent(71,0.0);
  S13_M_0->SetBinContent(72,0.0089479943063);
  S13_M_0->SetBinContent(73,0.00591659100821);
  S13_M_0->SetBinContent(74,0.0);
  S13_M_0->SetBinContent(75,0.00588526876298);
  S13_M_0->SetBinContent(76,0.0);
  S13_M_0->SetBinContent(77,0.0);
  S13_M_0->SetBinContent(78,0.0);
  S13_M_0->SetBinContent(79,0.0);
  S13_M_0->SetBinContent(80,0.0);
  S13_M_0->SetBinContent(81,0.0);
  S13_M_0->SetBinContent(82,0.0);
  S13_M_0->SetBinContent(83,0.0);
  S13_M_0->SetBinContent(84,0.0);
  S13_M_0->SetBinContent(85,0.0);
  S13_M_0->SetBinContent(86,0.0);
  S13_M_0->SetBinContent(87,0.0);
  S13_M_0->SetBinContent(88,0.0);
  S13_M_0->SetBinContent(89,0.0);
  S13_M_0->SetBinContent(90,0.0);
  S13_M_0->SetBinContent(91,0.0);
  S13_M_0->SetBinContent(92,0.0);
  S13_M_0->SetBinContent(93,0.0);
  S13_M_0->SetBinContent(94,0.0);
  S13_M_0->SetBinContent(95,0.0);
  S13_M_0->SetBinContent(96,0.0);
  S13_M_0->SetBinContent(97,0.0);
  S13_M_0->SetBinContent(98,0.0);
  S13_M_0->SetBinContent(99,0.0);
  S13_M_0->SetBinContent(100,0.0);
  S13_M_0->SetBinContent(101,0.0); // overflow
  S13_M_0->SetEntries(171);
  // Style
  S13_M_0->SetLineColor(9);
  S13_M_0->SetLineStyle(1);
  S13_M_0->SetLineWidth(1);
  S13_M_0->SetFillColor(9);
  S13_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_26","mystack");
  stack->Add(S13_M_0);
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
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_12.png");

}
