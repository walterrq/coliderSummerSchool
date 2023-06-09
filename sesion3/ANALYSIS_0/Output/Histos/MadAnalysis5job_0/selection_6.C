void selection_6()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo13","canvas_plotflow_tempo13",0,0,700,500);
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
  TH1F* S7_M_0 = new TH1F("S7_M_0","S7_M_0",200,105.0,160.0);
  // Content
  S7_M_0->SetBinContent(0,2.08563013047); // underflow
  S7_M_0->SetBinContent(1,0.0196661566637);
  S7_M_0->SetBinContent(2,0.0143134797838);
  S7_M_0->SetBinContent(3,0.00837010856557);
  S7_M_0->SetBinContent(4,0.00884154726722);
  S7_M_0->SetBinContent(5,0.0137451437301);
  S7_M_0->SetBinContent(6,0.0143141394013);
  S7_M_0->SetBinContent(7,0.02672103604);
  S7_M_0->SetBinContent(8,0.0140056262211);
  S7_M_0->SetBinContent(9,0.005591469865);
  S7_M_0->SetBinContent(10,0.0202211056887);
  S7_M_0->SetBinContent(11,0.0144307496971);
  S7_M_0->SetBinContent(12,0.0207876506977);
  S7_M_0->SetBinContent(13,0.0139071737292);
  S7_M_0->SetBinContent(14,0.0178411278928);
  S7_M_0->SetBinContent(15,0.00595067739817);
  S7_M_0->SetBinContent(16,0.0280896965368);
  S7_M_0->SetBinContent(17,0.0178062574887);
  S7_M_0->SetBinContent(18,0.00892666769857);
  S7_M_0->SetBinContent(19,0.0178534063976);
  S7_M_0->SetBinContent(20,0.0172061658913);
  S7_M_0->SetBinContent(21,0.0177724727051);
  S7_M_0->SetBinContent(22,0.026261800262);
  S7_M_0->SetBinContent(23,0.00595291505891);
  S7_M_0->SetBinContent(24,0.0172863987403);
  S7_M_0->SetBinContent(25,0.0179122703881);
  S7_M_0->SetBinContent(26,0.0143843634709);
  S7_M_0->SetBinContent(27,0.0142822647601);
  S7_M_0->SetBinContent(28,0.00298241928064);
  S7_M_0->SetBinContent(29,0.011606750842);
  S7_M_0->SetBinContent(30,0.0259506806765);
  S7_M_0->SetBinContent(31,0.0149665698147);
  S7_M_0->SetBinContent(32,0.00840090216706);
  S7_M_0->SetBinContent(33,0.00899882939453);
  S7_M_0->SetBinContent(34,0.0238111151351);
  S7_M_0->SetBinContent(35,0.0179442251912);
  S7_M_0->SetBinContent(36,0.0119937287298);
  S7_M_0->SetBinContent(37,0.00850862594932);
  S7_M_0->SetBinContent(38,0.0205407636562);
  S7_M_0->SetBinContent(39,0.0239105158271);
  S7_M_0->SetBinContent(40,0.0054581813241);
  S7_M_0->SetBinContent(41,0.0263759965409);
  S7_M_0->SetBinContent(42,0.0179411492666);
  S7_M_0->SetBinContent(43,0.0119786857864);
  S7_M_0->SetBinContent(44,0.0196639831324);
  S7_M_0->SetBinContent(45,0.0115600714525);
  S7_M_0->SetBinContent(46,0.0119343058967);
  S7_M_0->SetBinContent(47,0.0112117292853);
  S7_M_0->SetBinContent(48,0.0170892601419);
  S7_M_0->SetBinContent(49,0.0120095664207);
  S7_M_0->SetBinContent(50,0.00546944749931);
  S7_M_0->SetBinContent(51,0.00802446441715);
  S7_M_0->SetBinContent(52,0.012078631579);
  S7_M_0->SetBinContent(53,0.0144417158379);
  S7_M_0->SetBinContent(54,0.0140394430695);
  S7_M_0->SetBinContent(55,0.0);
  S7_M_0->SetBinContent(56,0.0120140073871);
  S7_M_0->SetBinContent(57,0.0140404943348);
  S7_M_0->SetBinContent(58,0.0150243138297);
  S7_M_0->SetBinContent(59,0.0206440487624);
  S7_M_0->SetBinContent(60,0.0116339279989);
  S7_M_0->SetBinContent(61,0.0120081326688);
  S7_M_0->SetBinContent(62,0.0120430465893);
  S7_M_0->SetBinContent(63,0.0119093160131);
  S7_M_0->SetBinContent(64,0.0060289245236);
  S7_M_0->SetBinContent(65,0.00558493323884);
  S7_M_0->SetBinContent(66,0.00896441476782);
  S7_M_0->SetBinContent(67,0.00853743153697);
  S7_M_0->SetBinContent(68,0.00545663992627);
  S7_M_0->SetBinContent(69,0.0204144331638);
  S7_M_0->SetBinContent(70,0.00860231224676);
  S7_M_0->SetBinContent(71,0.0225701158174);
  S7_M_0->SetBinContent(72,0.0140374413136);
  S7_M_0->SetBinContent(73,0.0862552024705);
  S7_M_0->SetBinContent(74,0.0271665755936);
  S7_M_0->SetBinContent(75,0.0151262522168);
  S7_M_0->SetBinContent(76,0.0150990315434);
  S7_M_0->SetBinContent(77,0.0116166451044);
  S7_M_0->SetBinContent(78,0.00547492827941);
  S7_M_0->SetBinContent(79,0.0119672638681);
  S7_M_0->SetBinContent(80,0.0121228213705);
  S7_M_0->SetBinContent(81,0.01203263242);
  S7_M_0->SetBinContent(82,0.00905065288437);
  S7_M_0->SetBinContent(83,0.0146259140236);
  S7_M_0->SetBinContent(84,0.00904057081417);
  S7_M_0->SetBinContent(85,0.0259223262856);
  S7_M_0->SetBinContent(86,0.0030273832066);
  S7_M_0->SetBinContent(87,0.0106057904536);
  S7_M_0->SetBinContent(88,0.00903407999479);
  S7_M_0->SetBinContent(89,0.00908617145424);
  S7_M_0->SetBinContent(90,0.00600795647438);
  S7_M_0->SetBinContent(91,0.00597615054326);
  S7_M_0->SetBinContent(92,0.0090976071145);
  S7_M_0->SetBinContent(93,0.0175694479368);
  S7_M_0->SetBinContent(94,0.0117106543396);
  S7_M_0->SetBinContent(95,0.0146497564477);
  S7_M_0->SetBinContent(96,0.0116212509752);
  S7_M_0->SetBinContent(97,0.0120643284149);
  S7_M_0->SetBinContent(98,0.0238823675666);
  S7_M_0->SetBinContent(99,0.0146269904827);
  S7_M_0->SetBinContent(100,0.00303986326123);
  S7_M_0->SetBinContent(101,0.00908718607421);
  S7_M_0->SetBinContent(102,0.0121847177692);
  S7_M_0->SetBinContent(103,0.0141552975535);
  S7_M_0->SetBinContent(104,0.00853792625009);
  S7_M_0->SetBinContent(105,0.0151464507123);
  S7_M_0->SetBinContent(106,0.00913009556651);
  S7_M_0->SetBinContent(107,0.00563141794958);
  S7_M_0->SetBinContent(108,0.00605016970377);
  S7_M_0->SetBinContent(109,0.0151492472156);
  S7_M_0->SetBinContent(110,0.0);
  S7_M_0->SetBinContent(111,0.00558228789785);
  S7_M_0->SetBinContent(112,0.0120994141108);
  S7_M_0->SetBinContent(113,0.0121762480973);
  S7_M_0->SetBinContent(114,0.00911382958229);
  S7_M_0->SetBinContent(115,0.0152353524925);
  S7_M_0->SetBinContent(116,0.0085344609679);
  S7_M_0->SetBinContent(117,0.00607251882711);
  S7_M_0->SetBinContent(118,0.011537971976);
  S7_M_0->SetBinContent(119,0.0060884504219);
  S7_M_0->SetBinContent(120,0.0083256966112);
  S7_M_0->SetBinContent(121,0.0118105818095);
  S7_M_0->SetBinContent(122,0.00607975400652);
  S7_M_0->SetBinContent(123,0.00305691941224);
  S7_M_0->SetBinContent(124,0.0122021266323);
  S7_M_0->SetBinContent(125,0.00826352308155);
  S7_M_0->SetBinContent(126,0.0);
  S7_M_0->SetBinContent(127,0.0121328484726);
  S7_M_0->SetBinContent(128,0.00912664860702);
  S7_M_0->SetBinContent(129,0.00299737519122);
  S7_M_0->SetBinContent(130,0.0238841311273);
  S7_M_0->SetBinContent(131,0.0061096314726);
  S7_M_0->SetBinContent(132,0.00864485070421);
  S7_M_0->SetBinContent(133,0.00250181693454);
  S7_M_0->SetBinContent(134,0.0213077109959);
  S7_M_0->SetBinContent(135,0.0169064865468);
  S7_M_0->SetBinContent(136,0.00915036048179);
  S7_M_0->SetBinContent(137,0.00608616924473);
  S7_M_0->SetBinContent(138,0.015150142738);
  S7_M_0->SetBinContent(139,0.00914855111435);
  S7_M_0->SetBinContent(140,0.00259360454134);
  S7_M_0->SetBinContent(141,0.00916438880527);
  S7_M_0->SetBinContent(142,0.0);
  S7_M_0->SetBinContent(143,0.0030661197021);
  S7_M_0->SetBinContent(144,0.00612472022281);
  S7_M_0->SetBinContent(145,0.0208049519149);
  S7_M_0->SetBinContent(146,0.00912787622847);
  S7_M_0->SetBinContent(147,0.0);
  S7_M_0->SetBinContent(148,0.0143531507375);
  S7_M_0->SetBinContent(149,0.00609610473326);
  S7_M_0->SetBinContent(150,0.00914860837282);
  S7_M_0->SetBinContent(151,0.00263186464642);
  S7_M_0->SetBinContent(152,0.0087600547321);
  S7_M_0->SetBinContent(153,0.00612231994804);
  S7_M_0->SetBinContent(154,0.0121894038018);
  S7_M_0->SetBinContent(155,0.0117480716001);
  S7_M_0->SetBinContent(156,0.00615344335828);
  S7_M_0->SetBinContent(157,0.0122845215608);
  S7_M_0->SetBinContent(158,0.00913362268784);
  S7_M_0->SetBinContent(159,0.00876081970517);
  S7_M_0->SetBinContent(160,0.00616690596814);
  S7_M_0->SetBinContent(161,0.0);
  S7_M_0->SetBinContent(162,0.0);
  S7_M_0->SetBinContent(163,0.0);
  S7_M_0->SetBinContent(164,0.0);
  S7_M_0->SetBinContent(165,0.00305618879425);
  S7_M_0->SetBinContent(166,0.0);
  S7_M_0->SetBinContent(167,0.00877256914181);
  S7_M_0->SetBinContent(168,0.00612537067895);
  S7_M_0->SetBinContent(169,0.00933626955034);
  S7_M_0->SetBinContent(170,0.0);
  S7_M_0->SetBinContent(171,0.0121688228198);
  S7_M_0->SetBinContent(172,0.00253369157582);
  S7_M_0->SetBinContent(173,0.00611447095791);
  S7_M_0->SetBinContent(174,0.00307958689263);
  S7_M_0->SetBinContent(175,0.00872913516199);
  S7_M_0->SetBinContent(176,0.00877999441932);
  S7_M_0->SetBinContent(177,0.0148838634002);
  S7_M_0->SetBinContent(178,0.00616329181394);
  S7_M_0->SetBinContent(179,0.00307523983011);
  S7_M_0->SetBinContent(180,0.00308049157635);
  S7_M_0->SetBinContent(181,0.0061793699904);
  S7_M_0->SetBinContent(182,0.00307935098777);
  S7_M_0->SetBinContent(183,0.0111007234479);
  S7_M_0->SetBinContent(184,0.0178473278392);
  S7_M_0->SetBinContent(185,0.00304396525753);
  S7_M_0->SetBinContent(186,0.00309176920326);
  S7_M_0->SetBinContent(187,0.00618806640578);
  S7_M_0->SetBinContent(188,0.00578400488291);
  S7_M_0->SetBinContent(189,0.00615995708105);
  S7_M_0->SetBinContent(190,0.00924561337078);
  S7_M_0->SetBinContent(191,0.0203005758549);
  S7_M_0->SetBinContent(192,0.00614671892436);
  S7_M_0->SetBinContent(193,0.003092389885);
  S7_M_0->SetBinContent(194,0.0119429931508);
  S7_M_0->SetBinContent(195,0.0092675868786);
  S7_M_0->SetBinContent(196,0.0);
  S7_M_0->SetBinContent(197,0.0);
  S7_M_0->SetBinContent(198,0.00616158551174);
  S7_M_0->SetBinContent(199,0.0114845429589);
  S7_M_0->SetBinContent(200,0.00541069802577);
  S7_M_0->SetBinContent(201,1.47183933126); // overflow
  S7_M_0->SetEntries(1968);
  // Style
  S7_M_0->SetLineColor(9);
  S7_M_0->SetLineStyle(1);
  S7_M_0->SetLineWidth(1);
  S7_M_0->SetFillColor(9);
  S7_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_14","mystack");
  stack->Add(S7_M_0);
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
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_6.png");

}
